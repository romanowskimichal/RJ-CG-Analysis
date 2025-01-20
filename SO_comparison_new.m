clc;
clear all;
%List of folders:
%1: badanie_analiza_wynikow/...                                 Z2  -Z46
%2: badanie_analiza_wynikow_2/badanie_analiza_wynikow_2/...     Z47 -Z104
%3: badanie_analiza_wynikow_3/badanie_analiza_wynikow_3/...     Z105-Z175
%4: badanie_analiza_wynikow_4/...                               Z201-Z216
%without numbers: 33, 50-65, 70-71, 75, 105-111, 121, 156-158, 209
%       >=82 - naciąg wstępny
%       >=94 - zmiana butli
%Names of files:
%1: outputZ[N].1_without_averaging_data.dat
%2: outputZ[N].2_with_averaging_data.dat
%3: outputZ[N].3_times&total_impulse.dat


%reading
%CG
f201 = 'badanie_analiza_wynikow_4/outputZ201.2_with_averaging_data.dat';
T201 = readtable(f201);
f202 = 'badanie_analiza_wynikow_4/outputZ202.2_with_averaging_data.dat';
T202 = readtable(f202);
f203 = 'badanie_analiza_wynikow_4/outputZ203.2_with_averaging_data.dat';
T203 = readtable(f203);
f204 = 'badanie_analiza_wynikow_4/outputZ204.2_with_averaging_data.dat';
T204 = readtable(f204);
f205 = 'badanie_analiza_wynikow_4/outputZ205.2_with_averaging_data.dat';
T205 = readtable(f205);
f206 = 'badanie_analiza_wynikow_4/outputZ206.2_with_averaging_data.dat';
T206 = readtable(f206);
%RJ-delay0
f207 = 'badanie_analiza_wynikow_4/outputZ207.2_with_averaging_data.dat';
T207 = readtable(f207);
f208 = 'badanie_analiza_wynikow_4/outputZ208.2_with_averaging_data.dat';
T208 = readtable(f208);
f210 = 'badanie_analiza_wynikow_4/outputZ210.2_with_averaging_data.dat';
T210 = readtable(f210);
%RJ-delay1
f211 = 'badanie_analiza_wynikow_4/outputZ211.2_with_averaging_data.dat';
T211 = readtable(f211);
f212 = 'badanie_analiza_wynikow_4/outputZ212.2_with_averaging_data.dat';
T212 = readtable(f212);
f213 = 'badanie_analiza_wynikow_4/outputZ213.2_with_averaging_data.dat';
T213 = readtable(f213);
%RJ-delay2
f214 = 'badanie_analiza_wynikow_4/outputZ214.2_with_averaging_data.dat';
T214 = readtable(f214);
f215 = 'badanie_analiza_wynikow_4/outputZ215.2_with_averaging_data.dat';
T215 = readtable(f215);
f216 = 'badanie_analiza_wynikow_4/outputZ216.2_with_averaging_data.dat';
T216 = readtable(f216);



% %ploting
% %2s-cases
% P1 = plot (T201.Time_s_, T201.Ps_zw_bar_, T202.Time_s_, T202.Ps_zw_bar_, T207.Time_s_, T207.Ps_zw_bar_, T211.Time_s_-1, T211.Ps_zw_bar_, T214.Time_s_-2, T214.Ps_zw_bar_);
% legend({'CG-T2_1','CG-T2_2','RJ-D0-T2','RJ-D1-T2','RJ-D2-T2'},'Location','northeast','Orientation','vertical');
% title('Time2-Ps-zw');
% xlabel('Time [s]');
% ylabel('Ps_zw [bar]');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T2-Ps_zw.fig');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T2-Ps_zw.png');
% 
% P2 = plot (T201.Time_s_, T201.Thrust_N_, T202.Time_s_, T202.Thrust_N_, T207.Time_s_, T207.Thrust_N_, T211.Time_s_-1, T211.Thrust_N_, T214.Time_s_-2, T214.Thrust_N_);
% legend({'CG-T2_1','CG-T2_2','RJ-D0-T2','RJ-D1-T2','RJ-D2-T2'},'Location','northeast','Orientation','vertical');
% title('Time2-Thrust');
% xlabel('Time [s]');
% ylabel('Thrust [N]');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T2-Thrust.fig');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T2-Thrust.png');
% 
% P3 = plot (T201.Time_s_, T201.I_sp_m_s_, T202.Time_s_, T202.I_sp_m_s_, T207.Time_s_, T207.I_sp_m_s_, T211.Time_s_-1, T211.I_sp_m_s_, T214.Time_s_-2, T214.I_sp_m_s_);
% legend({'CG-T2_1','CG-T2_2','RJ-D0-T2','RJ-D1-T2','RJ-D2-T2'},'Location','northeast','Orientation','vertical');
% title('Time2-I-sp');
% xlabel('Time [s]');
% ylabel('Specific impulse [m/s]');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T2-I_sp.fig');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T2-I_sp.png');
% 
% P4 = plot (T201.Time_s_, T201.m__kg_s_, T202.Time_s_, T202.m__kg_s_, T207.Time_s_, T207.m__kg_s_, T211.Time_s_-1, T211.m__kg_s_, T214.Time_s_-2, T214.m__kg_s_);
% legend({'CG-T2_1','CG-T2_2','RJ-D0-T2','RJ-D1-T2','RJ-D2-T2'},'Location','northeast','Orientation','vertical');
% title('Time2-m-dot');
% xlabel('Time [s]');
% ylabel('m* [kg/s]');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T2-m_dot.fig');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T2-m_dot.png');
% 
% P5 = plot (T201.Time_s_, T201.Dp_bar_, T202.Time_s_, T202.Dp_bar_, T207.Time_s_, T207.Dp_bar_, T211.Time_s_-1, T211.Dp_bar_, T214.Time_s_-2, T214.Dp_bar_);
% legend({'CG-T2_1','CG-T2_2','RJ-D0-T2','RJ-D1-T2','RJ-D2-T2'},'Location','northeast','Orientation','vertical');
% title('Time2-Dp');
% xlabel('Time [s]');
% ylabel('Dp [bar]');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T2-Dp.fig');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T2-Dp.png');
% 
% P6 = plot (T201.Time_s_, T201.Ts_ch_Out_Celcius_, T202.Time_s_, T202.Ts_ch_Out_Celcius_, T207.Time_s_, T207.Ts_ch_Out_Celcius_, T211.Time_s_-1, T211.Ts_ch_Out_Celcius_, T214.Time_s_-2, T214.Ts_ch_Out_Celcius_);
% legend({'CG-T2_1','CG-T2_2','RJ-D0-T2','RJ-D1-T2','RJ-D2-T2'},'Location','northwest','Orientation','vertical');
% title('Time2-Ts-ch');
% xlabel('Time [s]');
% ylabel('Ts-ch [*C]');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T2-Ts-ch.fig');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T2-Ts-ch.png');
% %5s-cases
% P7 = plot (T203.Time_s_, T203.Ps_zw_bar_, T204.Time_s_, T204.Ps_zw_bar_, T208.Time_s_, T208.Ps_zw_bar_, T212.Time_s_-1, T212.Ps_zw_bar_, T215.Time_s_-2, T215.Ps_zw_bar_);
% legend({'CG-T5_1','CG-T5_2','RJ-D0-T5','RJ-D1-T5','RJ-D2-T5'},'Location','northeast','Orientation','vertical');
% title('Time5-Ps-zw');
% xlabel('Time [s]');
% ylabel('Ps_zw [bar]');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T5-Ps_zw.fig');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T5-Ps_zw.png');
% 
% P8 = plot (T203.Time_s_, T203.Thrust_N_, T204.Time_s_, T204.Thrust_N_, T208.Time_s_, T208.Thrust_N_, T212.Time_s_-1, T212.Thrust_N_, T215.Time_s_-2, T215.Thrust_N_);
% legend({'CG-T5_1','CG-T5_2','RJ-D0-T5','RJ-D1-T5','RJ-D2-T5'},'Location','northeast','Orientation','vertical');
% title('Time5-Thrust');
% xlabel('Time [s]');
% ylabel('Thrust [N]');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T5-Thrust.fig');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T5-Thrust.png');
% 
% P9 = plot (T203.Time_s_, T203.I_sp_m_s_, T204.Time_s_, T204.I_sp_m_s_, T208.Time_s_, T208.I_sp_m_s_, T212.Time_s_-1, T212.I_sp_m_s_, T215.Time_s_-2, T215.I_sp_m_s_);
% legend({'CG-T5_1','CG-T5_2','RJ-D0-T5','RJ-D1-T5','RJ-D2-T5'},'Location','northeast','Orientation','vertical');
% title('Time5-I-sp');
% xlabel('Time [s]');
% ylabel('Specific impulse [m/s]');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T5-I_sp.fig');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T5-I_sp.png');
% 
% P10 = plot (T203.Time_s_, T203.m__kg_s_, T204.Time_s_, T204.m__kg_s_, T208.Time_s_, T208.m__kg_s_, T212.Time_s_-1, T212.m__kg_s_, T215.Time_s_-2, T215.m__kg_s_);
% legend({'CG-T5_1','CG-T5_2','RJ-D0-T5','RJ-D1-T5','RJ-D2-T5'},'Location','northeast','Orientation','vertical');
% title('Time5-m-dot');
% xlabel('Time [s]');
% ylabel('m* [kg/s]');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T5-m_dot.fig');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T5-m_dot.png');
% 
% P11 = plot (T203.Time_s_, T203.Dp_bar_, T204.Time_s_, T204.Dp_bar_, T208.Time_s_, T208.Dp_bar_, T212.Time_s_-1, T212.Dp_bar_, T215.Time_s_-2, T215.Dp_bar_);
% legend({'CG-T5_1','CG-T5_2','RJ-D0-T5','RJ-D1-T5','RJ-D2-T5'},'Location','northeast','Orientation','vertical');
% title('Time5-Dp');
% xlabel('Time [s]');
% ylabel('Dp [bar]');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T5-Dp.fig');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T5-Dp.png');
% 
% P12 = plot (T203.Time_s_, T203.Ts_ch_Out_Celcius_, T204.Time_s_, T204.Ts_ch_Out_Celcius_, T208.Time_s_, T208.Ts_ch_Out_Celcius_, T212.Time_s_-1, T212.Ts_ch_Out_Celcius_, T215.Time_s_-2, T215.Ts_ch_Out_Celcius_);
% legend({'CG-T5_1','CG-T5_2','RJ-D0-T5','RJ-D1-T5','RJ-D2-T5'},'Location','northwest','Orientation','vertical');
% title('Time5-Ts-ch');
% xlabel('Time [s]');
% ylabel('Ts-ch [*C]');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T5-Ts-ch.fig');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T5-Ts-ch.png');
% %10s-cases
% P13 = plot (T205.Time_s_, T205.Ps_zw_bar_, T206.Time_s_, T206.Ps_zw_bar_, T210.Time_s_, T210.Ps_zw_bar_, T213.Time_s_-1, T213.Ps_zw_bar_, T216.Time_s_-2, T216.Ps_zw_bar_);
% legend({'CG-T10_1','CG-T10_2','RJ-D0-T10','RJ-D1-T10','RJ-D2-T10'},'Location','northeast','Orientation','vertical');
% title('Time10-Ps-zw');
% xlabel('Time [s]');
% ylabel('Ps_zw [bar]');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T10-Ps_zw.fig');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T10-Ps_zw.png');
% 
% P14 = plot (T205.Time_s_, T205.Thrust_N_, T206.Time_s_, T206.Thrust_N_, T210.Time_s_, T210.Thrust_N_, T213.Time_s_-1, T213.Thrust_N_, T216.Time_s_-2, T216.Thrust_N_);
% legend({'CG-T10_1','CG-T10_2','RJ-D0-T10','RJ-D1-T10','RJ-D2-T10'},'Location','northeast','Orientation','vertical');
% title('Time10-Thrust');
% xlabel('Time [s]');
% ylabel('Thrust [N]');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T10-Thrust.fig');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T10-Thrust.png');
% 
% P15 = plot (T205.Time_s_, T205.I_sp_m_s_, T206.Time_s_, T206.I_sp_m_s_, T210.Time_s_, T210.I_sp_m_s_, T213.Time_s_-1, T213.I_sp_m_s_, T216.Time_s_-2, T216.I_sp_m_s_);
% legend({'CG-T10_1','CG-T10_2','RJ-D0-T10','RJ-D1-T10','RJ-D2-T10'},'Location','northeast','Orientation','vertical');
% title('Time10-I-sp');
% xlabel('Time [s]');
% ylabel('Specific impulse [m/s]');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T10-I_sp.fig');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T10-I_sp.png');
% 
% P16 = plot (T205.Time_s_, T205.m__kg_s_, T206.Time_s_, T206.m__kg_s_, T210.Time_s_, T210.m__kg_s_, T213.Time_s_-1, T213.m__kg_s_, T216.Time_s_-2, T216.m__kg_s_);
% legend({'CG-T10_1','CG-T10_2','RJ-D0-T10','RJ-D1-T10','RJ-D2-T10'},'Location','northeast','Orientation','vertical');
% title('Time10-m-dot');
% xlabel('Time [s]');
% ylabel('m* [kg/s]');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T10-m_dot.fig');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T10-m_dot.png');
% 
% P17 = plot (T205.Time_s_, T205.Dp_bar_, T206.Time_s_, T206.Dp_bar_, T210.Time_s_, T210.Dp_bar_, T213.Time_s_-1, T213.Dp_bar_, T216.Time_s_-2, T216.Dp_bar_);
% legend({'CG-T10_1','CG-T10_2','RJ-D0-T10','RJ-D1-T10','RJ-D2-T10'},'Location','northeast','Orientation','vertical');
% title('Time10-Dp');
% xlabel('Time [s]');
% ylabel('Dp [bar]');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T10-Dp.fig');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T10-Dp.png');
% 
% P18 = plot (T205.Time_s_, T205.Ts_ch_Out_Celcius_, T206.Time_s_, T206.Ts_ch_Out_Celcius_, T210.Time_s_, T210.Ts_ch_Out_Celcius_, T213.Time_s_-1, T213.Ts_ch_Out_Celcius_, T216.Time_s_-2, T216.Ts_ch_Out_Celcius_);
% legend({'CG-T10_1','CG-T10_2','RJ-D0-T10','RJ-D1-T10','RJ-D2-T10'},'Location','northwest','Orientation','vertical');
% title('Time10-Ts-ch');
% xlabel('Time [s]');
% ylabel('Ts-ch [*C]');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T10-Ts-ch.fig');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T10-Ts-ch.png');
% 
% P19 = plot (T201.Time_s_, T201.Ts_ch_Out_Celcius_, T214.Time_s_-2, T214.Ts_ch_Out_Celcius_, T215.Time_s_-2, T215.Ts_ch_Out_Celcius_, T205.Time_s_, T205.Ts_ch_Out_Celcius_, T210.Time_s_, T210.Ts_ch_Out_Celcius_, T213.Time_s_-1, T213.Ts_ch_Out_Celcius_, T216.Time_s_-2, T216.Ts_ch_Out_Celcius_);
% legend({'CG-T2_1','RJ-D2-T2','RJ-D2-T5','CG-T10_1','RJ-D0-T10','RJ-D1-T10','RJ-D2-T10'},'Location','northwest','Orientation','vertical');
% xlabel('Time [s]');
% ylabel('Ts-ch [*C]');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T_output.fig');
% saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T_output.png');

A0 = T201.Ts_ch_Out_Celcius_;
A1 = T203.Ts_ch_Out_Celcius_;
A2 = T214.Ts_ch_Out_Celcius_(10001:25000);
A3 = T215.Ts_ch_Out_Celcius_(10001:40000);
A4 = T205.Ts_ch_Out_Celcius_;
A5 = T210.Ts_ch_Out_Celcius_; 
A6 = T213.Ts_ch_Out_Celcius_(5001:60000);
A7 = T216.Ts_ch_Out_Celcius_(10001:65000);

C0 = cat(1,A0,NaN(50000,1));
C1 = cat(1,A1,NaN(35000,1));
C2 = cat(1,A2,NaN(50000,1));
C3 = cat(1,A3,NaN(35000,1));
C4 = cat(1,A4,NaN(10000,1));
C5 = cat(1,A5,NaN(10000,1));
C6 = cat(1,A6,NaN(10000,1));
C7 = cat(1,A7,NaN(10000,1));


TAB1 = table (T216.Time_s_, C0, C1, C2, C3, C4, C5, C6, C7);
TAB1.Properties.VariableNames = ["Time[s]","CG-Case-0.2","CG-Case-0.5","RJ-Case-2.2","RJ-Case-2.5","CG-Case-0.10","RJ-Case-0.10","RJ-Case-1.10","RJ-Case-2.10"];
writetable(TAB1, 'PlotFig7.txt','Delimiter','\t') 
P19 = plot (T216.Time_s_, C0, T216.Time_s_, C1, T216.Time_s_, C2, T216.Time_s_, C3, T216.Time_s_, C4, T216.Time_s_, C5, T216.Time_s_, C6, T216.Time_s_, C7);
legend(TAB1.Properties.VariableNames(2:9),'Location','northwest','Orientation','vertical');
xlabel('Time [s]');
ylabel('Ts-ch [*C]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T_output.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB_2/T_output.png');