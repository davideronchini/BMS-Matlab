% Code to plot simulation results from BatterySOHEstimationExample
%% Plot Description:
%
% The plot below shows the real and estimated battery state-of-charge, 
% estimated terminal resistance, and estimated state-of-health of the battery.

% Copyright 2022 The MathWorks, Inc.

% Generate simulation results if they don't exist
if ~exist('BatterySOHEstimationSimlog', 'var') || ... 
        get_param('BatterySOHEstimation','RTWModifiedTimeStamp') == double(simscape.logging.timestamp(BatterySOHEstimationSimlog))
    sim('BatterySOHEstimation')
    % Model StopFcn callback adds a timestamp to the Simscape simulation data log
end

% Reuse figure if it exists, else create new figure
if ~exist('h1_BatterySOHEstimation', 'var') || ...
        ~isgraphics(h1_BatterySOHEstimation, 'figure')
    h1_BatterySOHEstimation = figure('Name', 'BatterySOHEstimation');
end
figure(h1_BatterySOHEstimation)
clf(h1_BatterySOHEstimation)

% Get simulation results
simlog_SOC_real = BatterySOHEstimationLogsout.get('real_soc');
simlog_SOC_est = BatterySOHEstimationLogsout.get('est_soc');
simlog_SOH_est = BatterySOHEstimationLogsout.get('est_soh');
simlog_R0_est = BatterySOHEstimationLogsout.get('est_R0');

% Plot results
simlog_handles(1) = subplot(3, 1, 1);
plot(simlog_SOC_real.Values.Time/3600, simlog_SOC_real.Values.Data(:)*100, 'LineWidth', 1)
hold on
plot(simlog_SOC_est.Values.Time/3600, simlog_SOC_est.Values.Data(:)*100, 'LineWidth', 1)
hold off
grid on
title('State-of-charge')
ylabel('SOC (%)')
xlabel('Time (hours)')
legend({'Real','Estimated'},'Location','Best');
simlog_handles(1) = subplot(3, 1, 2);
plot(simlog_R0_est.Values.Time/3600, simlog_R0_est.Values.Data(:), 'LineWidth', 1)
grid on
title('Terminal resistance')
ylabel('R0 (ohm)')
xlabel('Time (hours)')
simlog_handles(1) = subplot(3, 1, 3);
plot(simlog_SOH_est.Values.Time/3600, simlog_SOH_est.Values.Data(:)*100, 'LineWidth', 1)
grid on
title('State-of-health')
ylabel('SOH (%)')
xlabel('Time (hours)')

linkaxes(simlog_handles, 'x')  

% Remove temporary variables
clear simlog_SOC_real simlog_SOC_est simlog_R0_est simlog_SOH_est
clear simlog_handles