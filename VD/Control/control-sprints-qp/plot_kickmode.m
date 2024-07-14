% Extract the time and data from the first logged signal
time1 = out_mode3_semkm.logsout{5}.Values.Time;
data1 = out_mode3_semkm.logsout{5}.Values.Data;

% Plot the first signal with a specified color
plot(time1, data1, 'Color', 'r'); % Red color for the first plot

% Hold the current plot
hold on;

% Extract the time and data from the second logged signal
time2 = out.logsout{6}.Values.Time; % Replace with the actual index for the second signal
data2 = out.logsout{6}.Values.Data;

% Plot the second signal with another specified color
plot(time2, data2, 'Color', 'b'); % Blue color for the second plot

% Optionally, add labels, title, and legend
xlabel('Time');
ylabel('Value');
title('');
legend('sem Km', 'Km');

% Release the hold
hold off;
