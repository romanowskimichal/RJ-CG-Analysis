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
f26 = 'badanie_analiza_wynikow/outputZ26.2_with_averaging_data.dat';
T26 = readtable(f26);
f27 = 'badanie_analiza_wynikow/outputZ27.2_with_averaging_data.dat';
T27 = readtable(f27);
f28 = 'badanie_analiza_wynikow/outputZ28.2_with_averaging_data.dat';
T28 = readtable(f28);
f29 = 'badanie_analiza_wynikow/outputZ29.2_with_averaging_data.dat';
T29 = readtable(f29);
f39 = 'badanie_analiza_wynikow/outputZ39.2_with_averaging_data.dat';
T39 = readtable(f39);
f40 = 'badanie_analiza_wynikow/outputZ40.2_with_averaging_data.dat';
T40 = readtable(f40);
f41 = 'badanie_analiza_wynikow/outputZ41.2_with_averaging_data.dat';
T41 = readtable(f41);
f42 = 'badanie_analiza_wynikow/outputZ42.2_with_averaging_data.dat';
T42 = readtable(f42);
f43 = 'badanie_analiza_wynikow/outputZ43.2_with_averaging_data.dat';
T43 = readtable(f43);
f44 = 'badanie_analiza_wynikow/outputZ44.2_with_averaging_data.dat';
T44 = readtable(f44);
f45 = 'badanie_analiza_wynikow/outputZ45.2_with_averaging_data.dat';
T45 = readtable(f45);
f46 = 'badanie_analiza_wynikow/outputZ46.2_with_averaging_data.dat';
T46 = readtable(f46);
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
f84 = 'badanie_analiza_wynikow_2/badanie_analiza_wynikow_2/outputZ84.2_with_averaging_data.dat';
T84 = readtable(f84);
f85 = 'badanie_analiza_wynikow_2/badanie_analiza_wynikow_2/outputZ85.2_with_averaging_data.dat';
T85 = readtable(f85);
f86 = 'badanie_analiza_wynikow_2/badanie_analiza_wynikow_2/outputZ86.2_with_averaging_data.dat';
T86 = readtable(f86);
f93 = 'badanie_analiza_wynikow_2/badanie_analiza_wynikow_2/outputZ93.2_with_averaging_data.dat';
T93 = readtable(f93);
f94 = 'badanie_analiza_wynikow_2/badanie_analiza_wynikow_2/outputZ94.2_with_averaging_data.dat';
T94 = readtable(f94);
f95 = 'badanie_analiza_wynikow_2/badanie_analiza_wynikow_2/outputZ95.2_with_averaging_data.dat';
T95 = readtable(f95);
f96 = 'badanie_analiza_wynikow_2/badanie_analiza_wynikow_2/outputZ96.2_with_averaging_data.dat';
T96 = readtable(f96);
f97 = 'badanie_analiza_wynikow_2/badanie_analiza_wynikow_2/outputZ97.2_with_averaging_data.dat';
T97 = readtable(f97);
f98 = 'badanie_analiza_wynikow_2/badanie_analiza_wynikow_2/outputZ98.2_with_averaging_data.dat';
T98 = readtable(f98);
f207 = 'badanie_analiza_wynikow_4/outputZ207.2_with_averaging_data.dat';
T207 = readtable(f207);
f208 = 'badanie_analiza_wynikow_4/outputZ208.2_with_averaging_data.dat';
T208 = readtable(f208);
f210 = 'badanie_analiza_wynikow_4/outputZ210.2_with_averaging_data.dat';
T210 = readtable(f210);
%RJ-delay1
f125 = 'badanie_analiza_wynikow_3/badanie_analiza_wynikow_3/outputZ125.2_with_averaging_data.dat';
T125 = readtable(f125);
f126 = 'badanie_analiza_wynikow_3/badanie_analiza_wynikow_3/outputZ126.2_with_averaging_data.dat';
T126 = readtable(f126);
f127 = 'badanie_analiza_wynikow_3/badanie_analiza_wynikow_3/outputZ127.2_with_averaging_data.dat';
T127 = readtable(f127);
f134 = 'badanie_analiza_wynikow_3/badanie_analiza_wynikow_3/outputZ134.2_with_averaging_data.dat';
T134 = readtable(f134);
f135 = 'badanie_analiza_wynikow_3/badanie_analiza_wynikow_3/outputZ135.2_with_averaging_data.dat';
T135 = readtable(f135);
f136 = 'badanie_analiza_wynikow_3/badanie_analiza_wynikow_3/outputZ136.2_with_averaging_data.dat';
T136 = readtable(f136);
f137 = 'badanie_analiza_wynikow_3/badanie_analiza_wynikow_3/outputZ137.2_with_averaging_data.dat';
T137 = readtable(f137);
f138 = 'badanie_analiza_wynikow_3/badanie_analiza_wynikow_3/outputZ138.2_with_averaging_data.dat';
T138 = readtable(f138);
f139 = 'badanie_analiza_wynikow_3/badanie_analiza_wynikow_3/outputZ139.2_with_averaging_data.dat';
T139 = readtable(f139);
f211 = 'badanie_analiza_wynikow_4/outputZ211.2_with_averaging_data.dat';
T211 = readtable(f211);
f212 = 'badanie_analiza_wynikow_4/outputZ212.2_with_averaging_data.dat';
T212 = readtable(f212);
f213 = 'badanie_analiza_wynikow_4/outputZ213.2_with_averaging_data.dat';
T213 = readtable(f213);
%RJ-delay2
f161 = 'badanie_analiza_wynikow_3/badanie_analiza_wynikow_3/outputZ161.2_with_averaging_data.dat';
T161 = readtable(f161);
f162 = 'badanie_analiza_wynikow_3/badanie_analiza_wynikow_3/outputZ162.2_with_averaging_data.dat';
T162 = readtable(f162);
f163 = 'badanie_analiza_wynikow_3/badanie_analiza_wynikow_3/outputZ163.2_with_averaging_data.dat';
T163 = readtable(f163);
f170 = 'badanie_analiza_wynikow_3/badanie_analiza_wynikow_3/outputZ170.2_with_averaging_data.dat';
T170 = readtable(f170);
f171 = 'badanie_analiza_wynikow_3/badanie_analiza_wynikow_3/outputZ171.2_with_averaging_data.dat';
T171 = readtable(f171);
f172 = 'badanie_analiza_wynikow_3/badanie_analiza_wynikow_3/outputZ172.2_with_averaging_data.dat';
T172 = readtable(f172);
f173 = 'badanie_analiza_wynikow_3/badanie_analiza_wynikow_3/outputZ173.2_with_averaging_data.dat';
T173 = readtable(f173);
f174 = 'badanie_analiza_wynikow_3/badanie_analiza_wynikow_3/outputZ174.2_with_averaging_data.dat';
T174 = readtable(f174);
f175 = 'badanie_analiza_wynikow_3/badanie_analiza_wynikow_3/outputZ175.2_with_averaging_data.dat';
T175 = readtable(f175);
f214 = 'badanie_analiza_wynikow_4/outputZ214.2_with_averaging_data.dat';
T214 = readtable(f214);
f215 = 'badanie_analiza_wynikow_4/outputZ215.2_with_averaging_data.dat';
T215 = readtable(f215);
f216 = 'badanie_analiza_wynikow_4/outputZ216.2_with_averaging_data.dat';
T216 = readtable(f216);
%...

%ploting
%RJ-delay2
P1 = plot (T214.Time_s_-2, T214.Dp_bar_, T161.Time_s_-2, T161.Dp_bar_, T162.Time_s_-2, T162.Dp_bar_, T163.Time_s_-2, T163.Dp_bar_);
legend({'Z214avg','Z161avg','Z162avg','Z163avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay2-Time2-Dp');
xlabel('Time [s]');
ylabel('Dp [bar]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D2-T2-Dp.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D2-T2-Dp.png');

P2 = plot (T214.Time_s_-2, T214.Ts_ch_Out_Celcius_, T161.Time_s_-2, T161.Ts_ch_Out_Celcius_, T162.Time_s_-2, T162.Ts_ch_Out_Celcius_, T163.Time_s_-2, T163.Ts_ch_Out_Celcius_);
legend({'Z214avg','Z161avg','Z162avg','Z163avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay2-Time2-Ts-ch');
xlabel('Time [s]');
ylabel('Ts-ch [*C]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D2-T2-Ts-ch.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D2-T2-Ts-ch.png');

P3 = plot (T215.Time_s_-2, T215.Dp_bar_, T170.Time_s_-2, T170.Dp_bar_, T171.Time_s_-2, T171.Dp_bar_, T172.Time_s_-2, T172.Dp_bar_);
legend({'Z215avg','Z170avg','Z171avg','Z172avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay2-Time5-Dp');
xlabel('Time [s]');
ylabel('Dp [bar]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D2-T5-Dp.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D2-T5-Dp.png');

P4 = plot (T215.Time_s_-2, T215.Ts_ch_Out_Celcius_, T170.Time_s_-2, T170.Ts_ch_Out_Celcius_, T171.Time_s_-2, T171.Ts_ch_Out_Celcius_, T172.Time_s_-2, T172.Ts_ch_Out_Celcius_);
legend({'Z215avg','Z170avg','Z171avg','Z172avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay2-Time5-Ts-ch');
xlabel('Time [s]');
ylabel('Ts-ch [*C]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D2-T5-Ts-ch.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D2-T5-Ts-ch.png');

P5 = plot (T216.Time_s_-2, T216.Dp_bar_, T173.Time_s_-2, T173.Dp_bar_, T174.Time_s_-2, T174.Dp_bar_, T175.Time_s_-2, T175.Dp_bar_);
legend({'Z216avg','Z173avg','Z174avg','Z175avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay2-Time10-Dp');
xlabel('Time [s]');
ylabel('Dp [bar]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D2-T10-Dp.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D2-T10-Dp.png');

P6 = plot (T216.Time_s_-2, T216.Ts_ch_Out_Celcius_, T173.Time_s_-2, T173.Ts_ch_Out_Celcius_, T174.Time_s_-2, T174.Ts_ch_Out_Celcius_, T175.Time_s_-2, T175.Ts_ch_Out_Celcius_);
legend({'Z216avg','Z173avg','Z174avg','Z175avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay2-Time10-Ts-ch');
xlabel('Time [s]');
ylabel('Ts-ch [*C]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D2-T10-Ts-ch.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D2-T10-Ts-ch.png');

%RJ-delay1
P7 = plot (T211.Time_s_-1, T211.Dp_bar_, T125.Time_s_-1, T125.Dp_bar_, T126.Time_s_-1, T126.Dp_bar_, T127.Time_s_-1, T127.Dp_bar_);
legend({'Z211avg','Z125avg','Z126avg','Z127avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay1-Time2-Dp');
xlabel('Time [s]');
ylabel('Dp [bar]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D1-T2-Dp.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D1-T2-Dp.png');

P8 = plot (T211.Time_s_-1, T211.Ts_ch_Out_Celcius_, T125.Time_s_-1, T125.Ts_ch_Out_Celcius_, T126.Time_s_-1, T126.Ts_ch_Out_Celcius_, T127.Time_s_-1, T127.Ts_ch_Out_Celcius_);
legend({'Z211avg','Z125avg','Z126avg','Z127avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay1-Time2-Ts-ch');
xlabel('Time [s]');
ylabel('Ts-ch [*C]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D1-T2-Ts-ch.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D1-T2-Ts-ch.png');

P9 = plot (T212.Time_s_-1, T212.Dp_bar_, T134.Time_s_-1, T134.Dp_bar_, T135.Time_s_-1, T135.Dp_bar_, T136.Time_s_-1, T136.Dp_bar_);
legend({'Z215avg','Z170avg','Z171avg','Z172avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay1-Time5-Dp');
xlabel('Time [s]');
ylabel('Dp [bar]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D1-T5-Dp.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D1-T5-Dp.png');

P10 = plot (T212.Time_s_-1, T212.Ts_ch_Out_Celcius_, T134.Time_s_-1, T134.Ts_ch_Out_Celcius_, T135.Time_s_-1, T135.Ts_ch_Out_Celcius_, T136.Time_s_-1, T136.Ts_ch_Out_Celcius_);
legend({'Z215avg','Z170avg','Z171avg','Z172avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay1-Time5-Ts-ch');
xlabel('Time [s]');
ylabel('Ts-ch [*C]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D1-T5-Ts-ch.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D1-T5-Ts-ch.png');

P11 = plot (T213.Time_s_-1, T213.Dp_bar_, T137.Time_s_-1, T137.Dp_bar_, T138.Time_s_-1, T138.Dp_bar_, T139.Time_s_-1, T139.Dp_bar_);
legend({'Z213avg','Z137avg','Z138avg','Z139avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay1-Time10-Dp');
xlabel('Time [s]');
ylabel('Dp [bar]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D1-T10-Dp.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D1-T10-Dp.png');

P12 = plot (T213.Time_s_-1, T213.Ts_ch_Out_Celcius_, T137.Time_s_-1, T137.Ts_ch_Out_Celcius_, T138.Time_s_-1, T138.Ts_ch_Out_Celcius_, T139.Time_s_-1, T139.Ts_ch_Out_Celcius_);
legend({'Z213avg','Z137avg','Z138avg','Z139avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay1-Time10-Ts-ch');
xlabel('Time [s]');
ylabel('Ts-ch [*C]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D1-T10-Ts-ch.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D1-T10-Ts-ch.png');

%RJ-delay0
P13 = plot (T207.Time_s_, T207.Dp_bar_, T84.Time_s_, T84.Dp_bar_, T85.Time_s_, T85.Dp_bar_, T86.Time_s_, T86.Dp_bar_);
legend({'Z207avg','Z84avg','Z85avg','Z86avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay0-Time2-Dp');
xlabel('Time [s]');
ylabel('Dp [bar]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D0-T2-Dp.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D0-T2-Dp.png');

P14 = plot (T207.Time_s_, T207.Ts_ch_Out_Celcius_, T84.Time_s_, T84.Ts_ch_Out_Celcius_, T85.Time_s_, T85.Ts_ch_Out_Celcius_, T86.Time_s_, T86.Ts_ch_Out_Celcius_);
legend({'Z207avg','Z84avg','Z85avg','Z86avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay0-Time2-Ts-ch');
xlabel('Time [s]');
ylabel('Ts-ch [*C]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D0-T2-Ts-ch.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D0-T2-Ts-ch.png');

P15 = plot (T208.Time_s_, T208.Dp_bar_, T93.Time_s_, T93.Dp_bar_, T94.Time_s_, T94.Dp_bar_, T95.Time_s_, T95.Dp_bar_);
legend({'Z208avg','Z93avg','Z94avg','Z95avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay0-Time5-Dp');
xlabel('Time [s]');
ylabel('Dp [bar]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D0-T5-Dp.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D0-T5-Dp.png');

P16 = plot (T208.Time_s_, T208.Ts_ch_Out_Celcius_, T93.Time_s_, T93.Ts_ch_Out_Celcius_, T94.Time_s_, T94.Ts_ch_Out_Celcius_, T95.Time_s_, T95.Ts_ch_Out_Celcius_);
legend({'Z208avg','Z93avg','Z94avg','Z95avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay0-Time5-Ts-ch');
xlabel('Time [s]');
ylabel('Ts-ch [*C]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D0-T5-Ts-ch.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D0-T5-Ts-ch.png');

P17 = plot (T210.Time_s_, T210.Dp_bar_, T96.Time_s_, T96.Dp_bar_, T97.Time_s_, T97.Dp_bar_, T98.Time_s_, T98.Dp_bar_);
legend({'Z210avg','Z96avg','Z97avg','Z98avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay0-Time10-Dp');
xlabel('Time [s]');
ylabel('Dp [bar]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D0-T10-Dp.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D0-T10-Dp.png');

P18 = plot (T210.Time_s_, T210.Ts_ch_Out_Celcius_, T96.Time_s_, T96.Ts_ch_Out_Celcius_, T97.Time_s_, T97.Ts_ch_Out_Celcius_, T98.Time_s_, T98.Ts_ch_Out_Celcius_);
legend({'Z210avg','Z96avg','Z97avg','Z98avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay0-Time10-Ts-ch');
xlabel('Time [s]');
ylabel('Ts-ch [*C]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D0-T10-Ts-ch.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D0-T10-Ts-ch.png');

%CG
P19 = plot (T201.Time_s_, T201.Dp_bar_, T202.Time_s_, T202.Dp_bar_, T26.Time_s_, T26.Dp_bar_, T27.Time_s_, T27.Dp_bar_, T28.Time_s_, T28.Dp_bar_, T29.Time_s_, T29.Dp_bar_);
legend({'Z201avg','Z202avg','Z26avg','Z27avg','Z28avg','Z29avg'},'Location','northeast','Orientation','vertical');
title('CG-Time2-Dp');
xlabel('Time [s]');
ylabel('Dp [bar]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/CG-T2-Dp.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/CG-T2-Dp.png');

P20 = plot (T201.Time_s_, T201.Ts_ch_Out_Celcius_, T202.Time_s_, T202.Ts_ch_Out_Celcius_, T26.Time_s_, T26.Ts_ch_Out_Celcius_, T27.Time_s_, T27.Ts_ch_Out_Celcius_, T28.Time_s_, T28.Ts_ch_Out_Celcius_, T29.Time_s_, T29.Ts_ch_Out_Celcius_);
legend({'Z201avg','Z202avg','Z26avg','Z27avg','Z28avg','Z29avg'},'Location','northeast','Orientation','vertical');
title('CG-Time2-Ts-ch');
xlabel('Time [s]');
ylabel('Ts-ch [*C]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/CG-T2-Ts-ch.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/CG-T2-Ts-ch.png');

P21 = plot (T203.Time_s_, T203.Dp_bar_, T204.Time_s_, T204.Dp_bar_, T39.Time_s_, T39.Dp_bar_, T40.Time_s_, T40.Dp_bar_, T41.Time_s_, T41.Dp_bar_, T42.Time_s_, T42.Dp_bar_);
legend({'Z203avg','Z204avg','Z39avg','Z40avg','Z41avg','Z42avg'},'Location','northeast','Orientation','vertical');
title('CG-Time5-Dp');
xlabel('Time [s]');
ylabel('Dp [bar]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/CG-T5-Dp.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/CG-T5-Dp.png');

P22 = plot (T203.Time_s_, T203.Ts_ch_Out_Celcius_, T204.Time_s_, T204.Ts_ch_Out_Celcius_, T39.Time_s_, T39.Ts_ch_Out_Celcius_, T40.Time_s_, T40.Ts_ch_Out_Celcius_, T41.Time_s_, T41.Ts_ch_Out_Celcius_, T42.Time_s_, T42.Ts_ch_Out_Celcius_);
legend({'Z203avg','Z204avg','Z39avg','Z40avg','Z41avg','Z42avg'},'Location','northeast','Orientation','vertical');
title('CG-Time5-Ts-ch');
xlabel('Time [s]');
ylabel('Ts-ch [*C]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/CG-T5-Ts-ch.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/CG-T5-Ts-ch.png');

P23 = plot (T205.Time_s_, T205.Dp_bar_, T206.Time_s_, T206.Dp_bar_, T43.Time_s_, T43.Dp_bar_, T44.Time_s_, T44.Dp_bar_, T45.Time_s_, T45.Dp_bar_, T46.Time_s_, T46.Dp_bar_);
legend({'Z205avg','Z206avg','Z43avg','Z44avg','Z45avg','Z46avg'},'Location','northeast','Orientation','vertical');
title('CG-Time10-Dp');
xlabel('Time [s]');
ylabel('Dp [bar]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/CG-T10-Dp.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/CG-T10-Dp.png');

P24 = plot (T205.Time_s_, T205.Ts_ch_Out_Celcius_, T206.Time_s_, T206.Ts_ch_Out_Celcius_, T43.Time_s_, T43.Ts_ch_Out_Celcius_, T44.Time_s_, T44.Ts_ch_Out_Celcius_, T45.Time_s_, T45.Ts_ch_Out_Celcius_, T46.Time_s_, T46.Ts_ch_Out_Celcius_);
legend({'Z205avg','Z206avg','Z43avg','Z44avg','Z45avg','Z46avg'},'Location','northeast','Orientation','vertical');
title('CG-Time10-Ts-ch');
xlabel('Time [s]');
ylabel('Ts-ch [*C]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/CG-T10-Ts-ch.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/CG-T10-Ts-ch.png');