%% Battery Charging and Discharging
% This example shows how to use a constant current and constant voltage 
% algorithm to charge and discharge a battery. The Battery CC-CV block is 
% charging and discharging the battery for 10 hours. The initial 
% state of charge (SOC) is equal to 0.3. When the battery is charging, the 
% current is constant until the battery reaches the maximum voltage and 
% the current decreases to 0. When the battery is discharging, the model 
% uses a constant current.

% Copyright 2022 The MathWorks, Inc.

%% Model Overview

open_system('BatteryCCCV')

set_param(find_system('BatteryCCCV','FindAll', 'on','type','annotation','Tag','ModelFeatures'),'Interpreter','off')

%% Simulation Results
%
% This plot shows the current, voltage, and temperature of the battery
% under test.
%


BatteryCCCVPlotResults;

%% Results from Real-Time Simulation
%%
%
% This example was tested on a Speedgoat Performance real-time target 
% machine with an Intel(R) 3.5 GHz i7 multi-core CPU. This model can run 
% in real time with a step size of 50 microseconds.