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
P1 = plot (T214.Time_s_-2, T214.I_sp_m_s_, T161.Time_s_-2, T161.I_sp_m_s_, T162.Time_s_-2, T162.I_sp_m_s_, T163.Time_s_-2, T163.I_sp_m_s_);
legend({'Z214avg','Z161avg','Z162avg','Z163avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay2-Time2-Isp');
xlabel('Time [s]');
ylabel('Specific impulse [m/s]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D2-T2-I_sp.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D2-T2-I_sp.png');

P2 = plot (T214.Time_s_-2, T214.m__kg_s_, T161.Time_s_-2, T161.m__kg_s_, T162.Time_s_-2, T162.m__kg_s_, T163.Time_s_-2, T163.m__kg_s_);
legend({'Z214avg','Z161avg','Z162avg','Z163avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay2-Time2');
xlabel('Time [s]');
ylabel('m* [kg/s]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D2-T2-m_dot.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D2-T2-m_dot.png');

P3 = plot (T215.Time_s_-2, T215.I_sp_m_s_, T170.Time_s_-2, T170.I_sp_m_s_, T171.Time_s_-2, T171.I_sp_m_s_, T172.Time_s_-2, T172.I_sp_m_s_);
legend({'Z215avg','Z170avg','Z171avg','Z172avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay2-Time5-Isp');
xlabel('Time [s]');
ylabel('Specific impulse [m/s]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D2-T5-I_sp.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D2-T5-I_sp.png');

P4 = plot (T215.Time_s_-2, T215.m__kg_s_, T170.Time_s_-2, T170.m__kg_s_, T171.Time_s_-2, T171.m__kg_s_, T172.Time_s_-2, T172.m__kg_s_);
legend({'Z215avg','Z170avg','Z171avg','Z172avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay2-Time5-mdot');
xlabel('Time [s]');
ylabel('m* [kg/s]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D2-T5-m_dot.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D2-T5-m_dot.png');

P5 = plot (T216.Time_s_-2, T216.I_sp_m_s_, T173.Time_s_-2, T173.I_sp_m_s_, T174.Time_s_-2, T174.I_sp_m_s_, T175.Time_s_-2, T175.I_sp_m_s_);
legend({'Z216avg','Z173avg','Z174avg','Z175avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay2-Time10-Isp');
xlabel('Time [s]');
ylabel('Specific impulse [m/s]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D2-T10-I_sp.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D2-T10-I_sp.png');

P6 = plot (T216.Time_s_-2, T216.m__kg_s_, T173.Time_s_-2, T173.m__kg_s_, T174.Time_s_-2, T174.m__kg_s_, T175.Time_s_-2, T175.m__kg_s_);
legend({'Z216avg','Z173avg','Z174avg','Z175avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay2-Time10-mdot');
xlabel('Time [s]');
ylabel('m* [kg/s]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D2-T10-m_dot.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D2-T10-m_dot.png');

%RJ-delay1
P7 = plot (T211.Time_s_-1, T211.I_sp_m_s_, T125.Time_s_-1, T125.I_sp_m_s_, T126.Time_s_-1, T126.I_sp_m_s_, T127.Time_s_-1, T127.I_sp_m_s_);
legend({'Z211avg','Z125avg','Z126avg','Z127avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay1-Time2-Isp');
xlabel('Time [s]');
ylabel('Specific impulse [m/s]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D1-T2-I_sp.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D1-T2-I_sp.png');

P8 = plot (T211.Time_s_-1, T211.m__kg_s_, T125.Time_s_-1, T125.m__kg_s_, T126.Time_s_-1, T126.m__kg_s_, T127.Time_s_-1, T127.m__kg_s_);
legend({'Z211avg','Z125avg','Z126avg','Z127avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay1-Time2');
xlabel('Time [s]');
ylabel('m* [kg/s]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D1-T2-m_dot.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D1-T2-m_dot.png');

P9 = plot (T212.Time_s_-1, T212.I_sp_m_s_, T134.Time_s_-1, T134.I_sp_m_s_, T135.Time_s_-1, T135.I_sp_m_s_, T136.Time_s_-1, T136.I_sp_m_s_);
legend({'Z215avg','Z170avg','Z171avg','Z172avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay1-Time5-Isp');
xlabel('Time [s]');
ylabel('Specific impulse [m/s]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D1-T5-I_sp.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D1-T5-I_sp.png');

P10 = plot (T212.Time_s_-1, T212.m__kg_s_, T134.Time_s_-1, T134.m__kg_s_, T135.Time_s_-1, T135.m__kg_s_, T136.Time_s_-1, T136.m__kg_s_);
legend({'Z215avg','Z170avg','Z171avg','Z172avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay1-Time5-mdot');
xlabel('Time [s]');
ylabel('m* [kg/s]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D1-T5-m_dot.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D1-T5-m_dot.png');

P11 = plot (T213.Time_s_-1, T213.I_sp_m_s_, T137.Time_s_-1, T137.I_sp_m_s_, T138.Time_s_-1, T138.I_sp_m_s_, T139.Time_s_-1, T139.I_sp_m_s_);
legend({'Z213avg','Z137avg','Z138avg','Z139avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay1-Time10-Isp');
xlabel('Time [s]');
ylabel('Specific impulse [m/s]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D1-T10-I_sp.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D1-T10-I_sp.png');

P12 = plot (T213.Time_s_-1, T213.m__kg_s_, T137.Time_s_-1, T137.m__kg_s_, T138.Time_s_-1, T138.m__kg_s_, T139.Time_s_-1, T139.m__kg_s_);
legend({'Z213avg','Z137avg','Z138avg','Z139avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay1-Time10-mdot');
xlabel('Time [s]');
ylabel('m* [kg/s]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D1-T10-m_dot.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D1-T10-m_dot.png');

%RJ-delay0
P13 = plot (T207.Time_s_, T207.I_sp_m_s_, T84.Time_s_, T84.I_sp_m_s_, T85.Time_s_, T85.I_sp_m_s_, T86.Time_s_, T86.I_sp_m_s_);
legend({'Z207avg','Z84avg','Z85avg','Z86avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay0-Time2-Isp');
xlabel('Time [s]');
ylabel('Specific impulse [m/s]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D0-T2-I_sp.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D0-T2-I_sp.png');

P14 = plot (T207.Time_s_, T207.m__kg_s_, T84.Time_s_, T84.m__kg_s_, T85.Time_s_, T85.m__kg_s_, T86.Time_s_, T86.m__kg_s_);
legend({'Z207avg','Z84avg','Z85avg','Z86avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay0-Time2');
xlabel('Time [s]');
ylabel('m* [kg/s]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D0-T2-m_dot.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D0-T2-m_dot.png');

P15 = plot (T208.Time_s_, T208.I_sp_m_s_, T93.Time_s_, T93.I_sp_m_s_, T94.Time_s_, T94.I_sp_m_s_, T95.Time_s_, T95.I_sp_m_s_);
legend({'Z208avg','Z93avg','Z94avg','Z95avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay0-Time5-Isp');
xlabel('Time [s]');
ylabel('Specific impulse [m/s]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D0-T5-I_sp.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D0-T5-I_sp.png');

P16 = plot (T208.Time_s_, T208.m__kg_s_, T93.Time_s_, T93.m__kg_s_, T94.Time_s_, T94.m__kg_s_, T95.Time_s_, T95.m__kg_s_);
legend({'Z208avg','Z93avg','Z94avg','Z95avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay0-Time5-mdot');
xlabel('Time [s]');
ylabel('m* [kg/s]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D0-T5-m_dot.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D0-T5-m_dot.png');

P17 = plot (T210.Time_s_, T210.I_sp_m_s_, T96.Time_s_, T96.I_sp_m_s_, T97.Time_s_, T97.I_sp_m_s_, T98.Time_s_, T98.I_sp_m_s_);
legend({'Z210avg','Z96avg','Z97avg','Z98avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay0-Time10-Isp');
xlabel('Time [s]');
ylabel('Specific impulse [m/s]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D0-T10-I_sp.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D0-T10-I_sp.png');

P18 = plot (T210.Time_s_, T210.m__kg_s_, T96.Time_s_, T96.m__kg_s_, T97.Time_s_, T97.m__kg_s_, T98.Time_s_, T98.m__kg_s_);
legend({'Z210avg','Z96avg','Z97avg','Z98avg'},'Location','northeast','Orientation','vertical');
title('RJ-Delay0-Time10-mdot');
xlabel('Time [s]');
ylabel('m* [kg/s]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D0-T10-m_dot.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/RJ-D0-T10-m_dot.png');

%CG
P19 = plot (T201.Time_s_, T201.I_sp_m_s_, T202.Time_s_, T202.I_sp_m_s_, T26.Time_s_, T26.I_sp_m_s_, T27.Time_s_, T27.I_sp_m_s_, T28.Time_s_, T28.I_sp_m_s_, T29.Time_s_, T29.I_sp_m_s_);
legend({'Z201avg','Z202avg','Z26avg','Z27avg','Z28avg','Z29avg'},'Location','northeast','Orientation','vertical');
title('CG-Time2-Isp');
xlabel('Time [s]');
ylabel('Specific impulse [m/s]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/CG-T2-I_sp.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/CG-T2-I_sp.png');

P20 = plot (T201.Time_s_, T201.m__kg_s_, T202.Time_s_, T202.m__kg_s_, T26.Time_s_, T26.m__kg_s_, T27.Time_s_, T27.m__kg_s_, T28.Time_s_, T28.m__kg_s_, T29.Time_s_, T29.m__kg_s_);
legend({'Z201avg','Z202avg','Z26avg','Z27avg','Z28avg','Z29avg'},'Location','northeast','Orientation','vertical');
title('CG-Time2');
xlabel('Time [s]');
ylabel('m* [kg/s]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/CG-T2-m_dot.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/CG-T2-m_dot.png');

P21 = plot (T203.Time_s_, T203.I_sp_m_s_, T204.Time_s_, T204.I_sp_m_s_, T39.Time_s_, T39.I_sp_m_s_, T40.Time_s_, T40.I_sp_m_s_, T41.Time_s_, T41.I_sp_m_s_, T42.Time_s_, T42.I_sp_m_s_);
legend({'Z203avg','Z204avg','Z39avg','Z40avg','Z41avg','Z42avg'},'Location','northeast','Orientation','vertical');
title('CG-Time5-Isp');
xlabel('Time [s]');
ylabel('Specific impulse [m/s]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/CG-T5-I_sp.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/CG-T5-I_sp.png');

P22 = plot (T203.Time_s_, T203.m__kg_s_, T204.Time_s_, T204.m__kg_s_, T39.Time_s_, T39.m__kg_s_, T40.Time_s_, T40.m__kg_s_, T41.Time_s_, T41.m__kg_s_, T42.Time_s_, T42.m__kg_s_);
legend({'Z203avg','Z204avg','Z39avg','Z40avg','Z41avg','Z42avg'},'Location','northeast','Orientation','vertical');
title('CG-Time5-mdot');
xlabel('Time [s]');
ylabel('m* [kg/s]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/CG-T5-m_dot.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/CG-T5-m_dot.png');

P23 = plot (T205.Time_s_, T205.I_sp_m_s_, T206.Time_s_, T206.I_sp_m_s_, T43.Time_s_, T43.I_sp_m_s_, T44.Time_s_, T44.I_sp_m_s_, T45.Time_s_, T45.I_sp_m_s_, T46.Time_s_, T46.I_sp_m_s_);
legend({'Z205avg','Z206avg','Z43avg','Z44avg','Z45avg','Z46avg'},'Location','northeast','Orientation','vertical');
title('CG-Time10-Isp');
xlabel('Time [s]');
ylabel('Specific impulse [m/s]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/CG-T10-I_sp.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/CG-T10-I_sp.png');

P24 = plot (T205.Time_s_, T205.m__kg_s_, T206.Time_s_, T206.m__kg_s_, T43.Time_s_, T43.m__kg_s_, T44.Time_s_, T44.m__kg_s_, T45.Time_s_, T45.m__kg_s_, T46.Time_s_, T46.m__kg_s_);
legend({'Z205avg','Z206avg','Z43avg','Z44avg','Z45avg','Z46avg'},'Location','northeast','Orientation','vertical');
title('CG-Time10-mdot');
xlabel('Time [s]');
ylabel('m* [kg/s]');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/CG-T10-m_dot.fig');
saveas(gcf, 'badanie_analiza_wynikow_MATLAB/CG-T10-m_dot.png');