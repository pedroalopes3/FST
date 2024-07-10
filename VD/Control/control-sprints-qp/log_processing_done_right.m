clear; clc;
%change log path here
data = load('2000-03-02_00-12-31_4_YRC.mat');

white_list = ["te_main_APPS", "te_main_BPSe",...
              "dash_se",...
              "accX", "accY",...
              "amk_actual_speed0", "amk_actual_speed1", "amk_actual_speed2", "amk_actual_speed3",...
              "EKF_x_13_vx", "EKF_x_14_vy", "EKF_x_15_r",...
              "gyrZ"];
timeseries_data = struct();


for i = 1:length(white_list)
    values = data.(white_list(i)).signals.values;
    time = data.(white_list(i)).time;
    
    timeseries_data.(white_list(i)) = timeseries(values, time);
end

clear i values time white_list