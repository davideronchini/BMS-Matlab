% Code to plot simulation results from BatteryCCCVExample
%% Plot Description:
%
% This plot shows the current, voltage, and temperature of the battery
% under test.

% Copyright 2022 The MathWorks, Inc.

% Generate simulation results if they don't exist
if ~exist('BatteryCCCVSimlog', 'var') || ...
        get_param('BatteryCCCV','RTWModifiedTimeStamp') == double(simscape.logging.timestamp(BatteryCCCVSimlog)) 
    sim('BatteryCCCV')
    % Model StopFcn callback adds a timestamp to the Simscape simulation data log
end

% Reuse figure if it exists, else create new figure
if ~exist('h1_BatteryCCCV', 'var') || ...
        ~isgraphics(h1_BatteryCCCV, 'figure')
    h1_BatteryCCCV = figure('Name', 'BatteryCCCV');
end
figure(h1_BatteryCCCV)
clf(h1_BatteryCCCV)

% Get simulation results
simlog_current = BatteryCCCVLogsout.get('current');
simlog_voltage = BatteryCCCVLogsout.get('voltage');
simlog_temp = BatteryCCCVLogsout.get('temperature');

% Plot results
simlog_handles(1) = subplot(3, 1, 1);
plot(simlog_current.Values.Time/3600, simlog_current.Values.Data(:), 'LineWidth', 1)
grid on
title('Charging/Discharging Current')
ylabel('Current (A)')
xlabel('Time (hours)')
simlog_handles(1) = subplot(3, 1, 2);
plot(simlog_voltage.Values.Time/3600, simlog_voltage.Values.Data(:), 'LineWidth', 1)
grid on
title('Battery Voltage')
ylabel('Voltage (V)')
xlabel('Time (hours)')
simlog_handles(1) = subplot(3, 1, 3);
plot(simlog_temp.Values.Time/3600, simlog_temp.Values.Data(:), 'LineWidth', 1)
grid on
title('Battery Temperature')
ylabel('Temperature (K)')
xlabel('Time (hours)')

linkaxes(simlog_handles, 'x')  

% Remove temporary variables
clear simlog_current simlog_voltage simlog_temp
clear simlog_handles