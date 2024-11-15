%% Battery State-of-Health Estimation
% This example shows how to estimate the battery internal resistance and 
% state-of-health (SOH) by using an adaptive Kalman filter. The initial 
% state-of-charge (SOC) of the battery is equal to 0.6. The estimator uses 
% an initial condition for the SOC equal to 0.65. The battery keeps 
% charging and discharging for 10 hours. The unscented Kalman filter
% estimator converges to the real value of the SOC while also estimating 
% the internal resistance. To use a different Kalman filter implementation, 
% in the SOC Estimator (Kalman Filter) block, set the Filter type parameter 
% to the desired value.

% Copyright 2022 The MathWorks, Inc.

%% Model

open_system('BatterySOHEstimation')

set_param(find_system('BatterySOHEstimation','FindAll', 'on','type','annotation','Tag','ModelFeatures'),'Interpreter','off')

%% Simulation Results
%
% The plot below shows the real and estimated battery state-of-charge, 
% estimated terminal resistance, and estimated state-of-health of the battery.
%


BatterySOHEstimationPlotResults;

%% Results from Real-Time Simulation
%%
%
% This example has been tested on a Speedgoat Performance real-time target 
% machine with an Intel(R) 3.5 GHz i7 multi-core CPU. This model can run 
% in real time with a step size of 100 microseconds.