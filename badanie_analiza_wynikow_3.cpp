#define _CRT_SECURE_NO_WARNINGS
#include <fstream>
#include <iostream>
#include <string>
#include <cstring>

int main()
{
    std::string filename[68] = { "RJ_Dyn_2021_03_02_Z105.dat", "RJ_Dyn_2021_03_02_Z106.dat", "RJ_Dyn_2021_03_02_Z107.dat", "RJ_Dyn_2021_03_02_Z108.dat", "RJ_Dyn_2021_03_02_Z109.dat", "RJ_Dyn_2021_03_02_Z110.dat", "RJ_Dyn_2021_03_02_Z111.dat", "RJ_Dyn_2021_03_02_Z112.dat",
          "RJ_Dyn_2021_03_02_Z113.dat", "RJ_Dyn_2021_03_02_Z114.dat", "RJ_Dyn_2021_03_02_Z115.dat", "RJ_Dyn_2021_03_02_Z116.dat", "RJ_Dyn_2021_03_02_Z117.dat", "RJ_Dyn_2021_03_02_Z118.dat", "RJ_Dyn_2021_03_03_Z119.dat", "RJ_Dyn_2021_03_03_Z120.dat", "RJ_Dyn_2021_03_03_Z121.dat", "RJ_Dyn_2021_03_03_Z122.dat",
          "RJ_Dyn_2021_03_03_Z123.dat", "RJ_Dyn_2021_03_03_Z124.dat", "RJ_Dyn_2021_03_03_Z125.dat", "RJ_Dyn_2021_03_03_Z126.dat", "RJ_Dyn_2021_03_03_Z127.dat", "RJ_Dyn_2021_03_03_Z128.dat", "RJ_Dyn_2021_03_03_Z129.dat", "RJ_Dyn_2021_03_03_Z130.dat", "RJ_Dyn_2021_03_03_Z131.dat", "RJ_Dyn_2021_03_09_Z132.dat",
          "RJ_Dyn_2021_03_09_Z133.dat", "RJ_Dyn_2021_03_09_Z134.dat", "RJ_Dyn_2021_03_09_Z135.dat", "RJ_Dyn_2021_03_09_Z136.dat", "RJ_Dyn_2021_03_09_Z137.dat", "RJ_Dyn_2021_03_09_Z138.dat", "RJ_Dyn_2021_03_09_Z139.dat", "RJ_Dyn_2021_03_09_Z140.dat", "RJ_Dyn_2021_03_09_Z141.dat", "RJ_Dyn_2021_03_09_Z142.dat",
          "RJ_Dyn_2021_03_09_Z143.dat", "RJ_Dyn_2021_03_09_Z144.dat", "RJ_Dyn_2021_03_23_Z145.dat", "RJ_Dyn_2021_03_23_Z146.dat", "RJ_Dyn_2021_03_23_Z147.dat", "RJ_Dyn_2021_03_23_Z148.dat", "RJ_Dyn_2021_03_23_Z149.dat", "RJ_Dyn_2021_03_23_Z150.dat", "RJ_Dyn_2021_03_23_Z151.dat", "RJ_Dyn_2021_03_23_Z152.dat",
          "RJ_Dyn_2021_03_23_Z153.dat", "RJ_Dyn_2021_03_23_Z154.dat", "RJ_Dyn_2021_03_23_Z155.dat", "RJ_Dyn_2021_05_25_Z159.dat", "RJ_Dyn_2021_05_25_Z160.dat", "RJ_Dyn_2021_05_25_Z161.dat", "RJ_Dyn_2021_05_25_Z162.dat", "RJ_Dyn_2021_05_25_Z163.dat", "RJ_Dyn_2021_05_25_Z164.dat", "RJ_Dyn_2021_05_25_Z165.dat", 
          "RJ_Dyn_2021_05_25_Z166.dat", "RJ_Dyn_2021_05_25_Z167.dat", "RJ_Dyn_2021_05_25_Z168.dat", "RJ_Dyn_2021_05_25_Z169.dat", "RJ_Dyn_2021_05_25_Z170.dat", "RJ_Dyn_2021_05_25_Z171.dat", "RJ_Dyn_2021_05_25_Z172.dat", "RJ_Dyn_2021_05_25_Z173.dat", "RJ_Dyn_2021_05_25_Z174.dat", "RJ_Dyn_2021_05_25_Z175.dat" };

    std::string filename1[68] = { "outputZ105.1_without_averaging_data.dat", "outputZ106.1_without_averaging_data.dat", "outputZ107.1_without_averaging_data.dat", "outputZ108.1_without_averaging_data.dat", "outputZ109.1_without_averaging_data.dat", "outputZ110.1_without_averaging_data.dat", "outputZ111.1_without_averaging_data.dat", "outputZ112.1_without_averaging_data.dat",
          "outputZ113.1_without_averaging_data.dat", "outputZ114.1_without_averaging_data.dat", "outputZ115.1_without_averaging_data.dat", "outputZ116.1_without_averaging_data.dat", "outputZ117.1_without_averaging_data.dat", "outputZ118.1_without_averaging_data.dat", "outputZ119.1_without_averaging_data.dat", "outputZ120.1_without_averaging_data.dat", "outputZ121.1_without_averaging_data.dat", "outputZ122.1_without_averaging_data.dat",
          "outputZ123.1_without_averaging_data.dat", "outputZ124.1_without_averaging_data.dat", "outputZ125.1_without_averaging_data.dat", "outputZ126.1_without_averaging_data.dat", "outputZ127.1_without_averaging_data.dat", "outputZ128.1_without_averaging_data.dat", "outputZ129.1_without_averaging_data.dat", "outputZ130.1_without_averaging_data.dat", "outputZ131.1_without_averaging_data.dat", "outputZ132.1_without_averaging_data.dat",
          "outputZ133.1_without_averaging_data.dat", "outputZ134.1_without_averaging_data.dat", "outputZ135.1_without_averaging_data.dat", "outputZ136.1_without_averaging_data.dat", "outputZ137.1_without_averaging_data.dat", "outputZ138.1_without_averaging_data.dat", "outputZ139.1_without_averaging_data.dat", "outputZ140.1_without_averaging_data.dat", "outputZ141.1_without_averaging_data.dat", "outputZ142.1_without_averaging_data.dat",
          "outputZ143.1_without_averaging_data.dat", "outputZ144.1_without_averaging_data.dat", "outputZ145.1_without_averaging_data.dat", "outputZ146.1_without_averaging_data.dat", "outputZ147.1_without_averaging_data.dat", "outputZ148.1_without_averaging_data.dat", "outputZ149.1_without_averaging_data.dat", "outputZ150.1_without_averaging_data.dat", "outputZ151.1_without_averaging_data.dat", "outputZ152.1_without_averaging_data.dat",
          "outputZ153.1_without_averaging_data.dat", "outputZ154.1_without_averaging_data.dat", "outputZ155.1_without_averaging_data.dat", "outputZ159.1_without_averaging_data.dat", "outputZ160.1_without_averaging_data.dat", "outputZ161.1_without_averaging_data.dat", "outputZ162.1_without_averaging_data.dat", "outputZ163.1_without_averaging_data.dat", "outputZ164.1_without_averaging_data.dat", "outputZ165.1_without_averaging_data.dat",
          "outputZ166.1_without_averaging_data.dat", "outputZ167.1_without_averaging_data.dat", "outputZ168.1_without_averaging_data.dat", "outputZ169.1_without_averaging_data.dat", "outputZ170.1_without_averaging_data.dat", "outputZ171.1_without_averaging_data.dat", "outputZ172.1_without_averaging_data.dat", "outputZ173.1_without_averaging_data.dat", "outputZ174.1_without_averaging_data.dat", "outputZ175.1_without_averaging_data.dat" };

    std::string filename2[68] = { "outputZ105.2_with_averaging_data.dat", "outputZ106.2_with_averaging_data.dat", "outputZ107.2_with_averaging_data.dat", "outputZ108.2_with_averaging_data.dat", "outputZ109.2_with_averaging_data.dat", "outputZ110.2_with_averaging_data.dat", "outputZ111.2_with_averaging_data.dat", "outputZ112.2_with_averaging_data.dat",
          "outputZ113.2_with_averaging_data.dat", "outputZ114.2_with_averaging_data.dat", "outputZ115.2_with_averaging_data.dat", "outputZ116.2_with_averaging_data.dat", "outputZ117.2_with_averaging_data.dat", "outputZ118.2_with_averaging_data.dat", "outputZ119.2_with_averaging_data.dat", "outputZ120.2_with_averaging_data.dat", "outputZ121.2_with_averaging_data.dat", "outputZ122.2_with_averaging_data.dat",
          "outputZ123.2_with_averaging_data.dat", "outputZ124.2_with_averaging_data.dat", "outputZ125.2_with_averaging_data.dat", "outputZ126.2_with_averaging_data.dat", "outputZ127.2_with_averaging_data.dat", "outputZ128.2_with_averaging_data.dat", "outputZ129.2_with_averaging_data.dat", "outputZ130.2_with_averaging_data.dat", "outputZ131.2_with_averaging_data.dat", "outputZ132.2_with_averaging_data.dat",
          "outputZ133.2_with_averaging_data.dat", "outputZ134.2_with_averaging_data.dat", "outputZ135.2_with_averaging_data.dat", "outputZ136.2_with_averaging_data.dat", "outputZ137.2_with_averaging_data.dat", "outputZ138.2_with_averaging_data.dat", "outputZ139.2_with_averaging_data.dat", "outputZ140.2_with_averaging_data.dat", "outputZ141.2_with_averaging_data.dat", "outputZ142.2_with_averaging_data.dat",
          "outputZ143.2_with_averaging_data.dat", "outputZ144.2_with_averaging_data.dat", "outputZ145.2_with_averaging_data.dat", "outputZ146.2_with_averaging_data.dat", "outputZ147.2_with_averaging_data.dat", "outputZ148.2_with_averaging_data.dat", "outputZ149.2_with_averaging_data.dat", "outputZ150.2_with_averaging_data.dat", "outputZ151.2_with_averaging_data.dat", "outputZ152.2_with_averaging_data.dat",
          "outputZ153.2_with_averaging_data.dat", "outputZ154.2_with_averaging_data.dat", "outputZ155.2_with_averaging_data.dat", "outputZ159.2_with_averaging_data.dat", "outputZ160.2_with_averaging_data.dat", "outputZ161.2_with_averaging_data.dat", "outputZ162.2_with_averaging_data.dat", "outputZ163.2_with_averaging_data.dat", "outputZ164.2_with_averaging_data.dat", "outputZ165.2_with_averaging_data.dat",
          "outputZ166.2_with_averaging_data.dat", "outputZ167.2_with_averaging_data.dat", "outputZ168.2_with_averaging_data.dat", "outputZ169.2_with_averaging_data.dat", "outputZ170.2_with_averaging_data.dat", "outputZ171.2_with_averaging_data.dat", "outputZ172.2_with_averaging_data.dat", "outputZ173.2_with_averaging_data.dat", "outputZ174.2_with_averaging_data.dat", "outputZ175.2_with_averaging_data.dat" };

    std::string filename3[68] = { "outputZ105.3_times&total_impulse.dat", "outputZ106.3_times&total_impulse.dat", "outputZ107.3_times&total_impulse.dat", "outputZ108.3_times&total_impulse.dat", "outputZ109.3_times&total_impulse.dat", "outputZ110.3_times&total_impulse.dat", "outputZ111.3_times&total_impulse.dat", "outputZ112.3_times&total_impulse.dat",
          "outputZ113.3_times&total_impulse.dat", "outputZ114.3_times&total_impulse.dat", "outputZ115.3_times&total_impulse.dat", "outputZ116.3_times&total_impulse.dat", "outputZ117.3_times&total_impulse.dat", "outputZ118.3_times&total_impulse.dat", "outputZ119.3_times&total_impulse.dat", "outputZ120.3_times&total_impulse.dat", "outputZ121.3_times&total_impulse.dat", "outputZ122.3_times&total_impulse.dat",
          "outputZ123.3_times&total_impulse.dat", "outputZ124.3_times&total_impulse.dat", "outputZ125.3_times&total_impulse.dat", "outputZ126.3_times&total_impulse.dat", "outputZ127.3_times&total_impulse.dat", "outputZ128.3_times&total_impulse.dat", "outputZ129.3_times&total_impulse.dat", "outputZ130.3_times&total_impulse.dat", "outputZ131.3_times&total_impulse.dat", "outputZ132.3_times&total_impulse.dat",
          "outputZ133.3_times&total_impulse.dat", "outputZ134.3_times&total_impulse.dat", "outputZ135.3_times&total_impulse.dat", "outputZ136.3_times&total_impulse.dat", "outputZ137.3_times&total_impulse.dat", "outputZ138.3_times&total_impulse.dat", "outputZ139.3_times&total_impulse.dat", "outputZ140.3_times&total_impulse.dat", "outputZ141.3_times&total_impulse.dat", "outputZ142.3_times&total_impulse.dat",
          "outputZ143.3_times&total_impulse.dat", "outputZ144.3_times&total_impulse.dat", "outputZ145.3_times&total_impulse.dat", "outputZ146.3_times&total_impulse.dat", "outputZ147.3_times&total_impulse.dat", "outputZ148.3_times&total_impulse.dat", "outputZ149.3_times&total_impulse.dat", "outputZ150.3_times&total_impulse.dat", "outputZ151.3_times&total_impulse.dat", "outputZ152.3_times&total_impulse.dat",
          "outputZ153.3_times&total_impulse.dat", "outputZ154.3_times&total_impulse.dat", "outputZ155.3_times&total_impulse.dat", "outputZ159.3_times&total_impulse.dat", "outputZ160.3_times&total_impulse.dat", "outputZ161.3_times&total_impulse.dat", "outputZ162.3_times&total_impulse.dat", "outputZ163.3_times&total_impulse.dat", "outputZ164.3_times&total_impulse.dat", "outputZ165.3_times&total_impulse.dat",
          "outputZ166.3_times&total_impulse.dat", "outputZ167.3_times&total_impulse.dat", "outputZ168.3_times&total_impulse.dat", "outputZ169.3_times&total_impulse.dat", "outputZ170.3_times&total_impulse.dat", "outputZ171.3_times&total_impulse.dat", "outputZ172.3_times&total_impulse.dat", "outputZ173.3_times&total_impulse.dat", "outputZ174.3_times&total_impulse.dat", "outputZ175.3_times&total_impulse.dat" };

    FILE* output4;
    output4 = fopen("output.4_table.dat", "w");
    fprintf(output4, "Name of file time_response_Trig_psch[s] time_response_Trig_Thru[s] time_increase_psch[s] time_decrease_psch[s] time_increase_Thru[s] time_decrease_Thru[s] total_impulse[Ns] psch_max[bar] psch_avg[bar] Thru_max[N] Thru_avg[N] massflow_max[kg/s] massflow_avg[kg/s] Isp_max[Ns/kg] Isp_avg[Ns/kg] T_sch_max[Ns/kg] T_sch_avg[Ns/kg] (p_out-p_in)_avg[bar]\n");

    int file_index[68] = { 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175 };

    int iter;
    for (iter = 0; iter < 68; iter++)
    {
        char name1[70];
        char name2[70];
        char name3[70];

        strcpy(name1, filename1[iter].c_str());
        strcpy(name2, filename2[iter].c_str());
        strcpy(name3, filename3[iter].c_str());

        FILE* output1;
        output1 = fopen(name1, "w");
        FILE* output2;
        output2 = fopen(name2, "w");
        FILE* output3;
        output3 = fopen(name3, "w");


        std::ifstream input;
        input.open(filename[iter]);


        if (!input.good())
            std::cout << "Status of initiating reading in file '" << filename[iter] << "': ERROR\n";
        else
        {
            std::string firstline, nextline;
            getline(input, firstline);

            int counter = 0, i;
            //counting number of data lines
            while (true)
            {
                if (!input.fail())
                {
                    getline(input, nextline);
                    counter++;
                }
                else
                    break;
            }
            counter--; //due to EOF
            std::cout << "Number of data lines in '" << filename[iter] << "': " << counter << "\n";
            input.clear();

            double** X;
            X = (double**)malloc(counter * sizeof(double*));
            for (i = 0; i < counter; i++)
                X[i] = (double*)malloc(15 * sizeof(double));



            double avgmassflow1000 = 0.0, maxmassflow = 0.0, avgrealmassflow = 0.0;
            int massflowcounter = 0;

            std::ifstream input1;
            input1.open(filename[iter]);


            if (!input.good())
                printf("ERROR");
            else
            {
                getline(input1, firstline);
                fprintf(output1, "Time[s] Ps_zw[bar] Dp[bar] Ps_ch_Out[bar] Trigger[Volt] Ts_ch_Out[Celcius] I_Heater[Volt] Thrust[N] m*[kg/s]\n");
                i = 0;
                //reading in data from file and calculating proper values of new quantities
                while (true)
                {
                    // 0 - Time, 1 - Ps_zw, 2 - Dp, 3 - Ps_ch_Out, 4 - Trigger, 5 - Ts_ch_Out, 6 - I_Heater, 7 - Thrust, [8 - Ps_ch_in]; new quantities: 9 - massflow, 10 - I_sp
                    input1 >> X[i][0] >> X[i][1] >> X[i][2] >> X[i][3] >> X[i][4] >> X[i][5] >> X[i][6] >> X[i][7] >> X[i][8];
                    if (input1.fail()) break;
                    /*if (!input1.fail())
                    {
                        double test;
                        test = (2 * X[i][2] * X[i][1] * 1.0e10 / 286.9 / (X[i][5] + 273.15));
                        if (test < 0)
                            X[i][9] = 0.0;
                        else
                            X[i][9] = 2.5731e-6 * pow(X[i][3], 0.0474) * sqrt(test);


                        //if (i < 1000) avgmassflow1000 += X[i][9];
                        //if (X[i][9] > maxmassflow) maxmassflow = X[i][9];
                        //fprintf(output1, "%.4lf %.10lf %.10lf %.10lf %.10lf %.10lf %.10lf %.10lf %.10lf\n", X[i][0], X[i][1], X[i][2], X[i][3], X[i][4], X[i][5], X[i][6], X[i][7], X[i][9]);
                    }
                    else
                        break;*/
                    i++;
                }
                std::cout << "Status of reading in file '" << filename[iter] << "': SUCCESS\n";
            }
            //avgmassflow1000 /= 1000;
            //resolved//loops for normalization massflow around 0.0 and achieving proper values of specific impulse
            /*for (i = 0; i < counter; i++)
            {
                X[i][9] -= avgmassflow1000;
                if (X[i][9] >= 0.05 * maxmassflow)
                {
                    avgrealmassflow += X[i][9];
                    massflowcounter++;
                }
            }
            avgrealmassflow /= massflowcounter;
            //printf ("%lf %lf\n", avgrealmassflow, maxmassflow);
            for (i = 0; i < counter; i++)
            {
                if (X[i][9] > 1.15 * avgrealmassflow) X[i][9] = 1.15 * avgrealmassflow;
                if (X[i][9] < 0.19 * maxmassflow || X[i][7] < 0.0)
                    X[i][10] = 0.0;
                else
                    X[i][10] = X[i][7] / X[i][9];
            }
            */
            //recalculation of dp, calculation pf massflow and I_sp
            int i_firstpeak = 0;
            int i_secondpeak = 0;
            for (i = 0; i < counter; i++)
            {
                if (X[i][2] > 0.041 && i > 500) //first peak
                {
                    X[i][2] = (X[i - 500][2] + X[i + 500][2]) / 2;
                    if (i_firstpeak == 0) i_firstpeak = i;
                }
                if (X[i][2] > 0.041 && i > i_firstpeak + 1000) //second peak - begining declaration deue to values over normal ones and under 0
                {
                    if (i_secondpeak == 0) i_firstpeak = i;
                }
                if (i_secondpeak != 0 && i < i_secondpeak + 600) //second peak - recalculating
                {
                    X[i][2] = (X[i - 600][2] + X[i + 600][2]) / 2;
                }


                double test;
                test = (2 * X[i][2] * X[i][1] * 1.0e10 / 286.9 / (X[i][5] + 273.15));
                if (test < 0)
                    X[i][9] = 0.0;
                else
                    X[i][9] = 2.5731e-6 * pow(X[i][3], 0.0474) * sqrt(test);
                if (X[i][9] > maxmassflow) maxmassflow = X[i][9];
            }
            for (i = 0; i < counter; i++)
            {
                if (X[i][9] < 0.19 * maxmassflow || X[i][7] < 0.0)
                    X[i][10] = 0.0;
                else
                    X[i][10] = X[i][7] / X[i][9];
                fprintf(output1, "%.4lf %.10lf %.10lf %.10lf %.10lf %.10lf %.10lf %.10lf %.10lf\n", X[i][0], X[i][1], X[i][2], X[i][3], X[i][4], X[i][5], X[i][6], X[i][7], X[i][9]);
            }
            //counting average data for n conseciutive readings

            fclose(output1);
            int n = 100, j, k, denominator = 0; // number of values for which mean is calculated; (n-1)/2 values prior are calculated
            fprintf(output2, "Time[s] Ps_zw[bar] Dp[bar] Ps_ch_Out[bar] Trigger[Volt] Ts_ch_Out[Celcius] I_Heater[Volt] Thrust[N] m*[kg/s] I_sp[m/s] dTrigger[Volt/s] dPs_ch_in[bar/s] (p_out-p_in)[bar]\n");

            double** Y;
            Y = (double**)malloc(counter * sizeof(double*));
            for (i = 0; i < counter; i++)
                Y[i] = (double*)malloc(15 * sizeof(double));

            double max_4 = 0.0, max_7 = 0.0, max_3 = 0.0, max_9 = 0.0, max_10 = 0.0, max_5 = 0.0, max_13 = 0.0, min_4 = 1e10, min_7 = 1e10, min_3 = 1e10, min_9 = 1e10, min_10 = 1e10, min_13 = 1e10;

            for (i = 0; i < counter; i++)
            {
                Y[i][0] = X[i][0];
                for (j = 1; j <= 10; j++)
                {
                    if (j != 4)
                    {
                        double value = 0.0;
                        for (k = 0; k < n; k++)
                        {
                            if ((i + k - ((n - 1) / 2)) >= 0 && (i + k - ((n - 1) / 2)) < counter)
                            {
                                value += X[i + k - ((n - 1) / 2)][j];
                                denominator++;
                            }
                        }
                        value /= denominator;
                        denominator = 0;
                        Y[i][j] = value;
                    }
                    else
                    {
                        Y[i][j] = X[i][j];
                    }
                }
                Y[i][13] = Y[i][3] - Y[i][1];

                if (Y[i][4] > max_4) max_4 = Y[i][4]; //Trigger
                if (Y[i][7] > max_7) max_7 = Y[i][7]; //Thrust
                if (Y[i][3] > max_3) max_3 = Y[i][3]; //Ps_ch_out
                if (Y[i][9] > max_9) max_9 = Y[i][9]; //massflow
                if (Y[i][10] > max_10) max_10 = Y[i][10]; //I_sp
                if (Y[i][5] > max_5) max_5 = Y[i][5]; //Ts_ch_out
                if (Y[i][13] > max_13) max_13 = Y[i][13]; //(p_out-p_in)

                if (Y[i][4] < min_4) min_4 = Y[i][4]; //Trigger
                if (Y[i][7] < min_7) min_7 = Y[i][7]; //Thrust
                if (Y[i][3] < min_3) min_3 = Y[i][3]; //Ps_ch_out
                if (Y[i][9] < min_9) min_9 = Y[i][9]; //massflow
                if (Y[i][10] < min_10) min_10 = Y[i][10]; //I_sp
                if (Y[i][13] < min_13) min_13 = Y[i][13]; //(p_out-p_in)

                if (i > 0)
                {
                    Y[i][11] = (Y[i][4] - Y[i - 1][4]) / (Y[i][0] - Y[i - 1][0]);
                    Y[i][12] = (Y[i][3] - Y[i - 1][3]) / (Y[i][0] - Y[i - 1][0]);
                }
                else
                {
                    Y[i][11] = 0;
                    Y[i][12] = 0;
                }

                fprintf(output2, "%.4lf %.10lf %.10lf %.10lf %.10lf %.10lf %.10lf %.10lf %.10lf %.10lf %.10lf %.10lf %.10lf\n", Y[i][0], Y[i][1], Y[i][2], Y[i][3], Y[i][4], Y[i][5], Y[i][6], Y[i][7], Y[i][9], Y[i][10], Y[i][11], Y[i][12], Y[i][13]);
            }
            if (0 > min_7) min_7 = 0.0; //Thrust; for skipping problems with retrograde thust sometimes showing up at the end 

            fclose(output2);
            for (i = 0; i < counter; i++)
                free(X[i]);
            free(X);

            bool conditions_status[12] = { 0,0,0,0,0,0,0,0,0,0,0,0 }; //1-operation executed, 0-operation unexecuted
            double time_response_Trig_psch = 0.0, time_response_Trig_Thru = 0.0, time_increase_psch = 0.0, time_decrease_psch = 0.0, time_increase_Thru = 0.0, time_decrease_Thru = 0.0, total_impulse = 0.0;
            double avg3 = 0.0, avg7 = 0.0, avg9 = 0.0, avg10 = 0.0, avg5 = 0.0, avg13 = 0.0;
            int counter3 = 0, counter7 = 0, counter9 = 0, counter10 = 0, counter5 = 0, counter13 = 0;
            for (i = 1; i < counter; i++)
            {
                if (conditions_status[0] == 0 && Y[i][4] > 0.01 * (max_4 - min_4) + min_4 && Y[i - 1][4] <= 0.05 * (max_4 - min_4) + min_4)
                {
                    time_response_Trig_psch -= Y[i][0];
                    time_response_Trig_Thru -= Y[i][0];
                    conditions_status[0] = 1;
                    //printf("\n0 %lf", Y[i][0]);
                }

                if (/*conditions_status[1] == 0 &&*/ Y[i][7] > 0.05 * (max_7 - min_7) + min_7 && Y[i - 1][7] <= 0.05 * (max_7 - min_7) + min_7 && conditions_status[4] == 0)
                {
                    time_response_Trig_Thru += Y[i][0];
                    conditions_status[1] = 1;
                    //printf("\n1 %lf", Y[i][0]);
                }
                if (conditions_status[2] == 0 && Y[i][3] > 0.05 * (max_3 - min_3) + min_3 && Y[i - 1][3] <= 0.05 * (max_3 - min_3) + min_3 && conditions_status[6] == 0)
                {
                    time_response_Trig_psch += Y[i][0];
                    conditions_status[2] = 1;
                    //printf("\n2 %lf", Y[i][0]);
                }

                if (conditions_status[3] == 0 && Y[i][7] > 0.05 * (max_7 - min_7) + min_7 && Y[i - 1][7] <= 0.05 * (max_7 - min_7) + min_7 && conditions_status[4] == 0)
                {
                    time_increase_Thru -= Y[i][0];
                    conditions_status[3] = 1;
                    //printf("\n3 %lf", Y[i][0]);
                }
                if (conditions_status[4] == 0 && Y[i][7] > 0.9 * (max_7 - min_7) + min_7 && Y[i - 1][7] <= 0.9 * (max_7 - min_7) + min_7)
                {
                    time_increase_Thru += Y[i][0];
                    conditions_status[4] = 1;
                    //printf("\n4 %lf", Y[i][0]);
                }

                if (/*conditions_status[5] == 0 &&*/ Y[i][3] > 0.05 * (max_3 - min_3) + min_3 && Y[i - 1][3] <= 0.05 * (max_3 - min_3) + min_3 && conditions_status[6] == 0)
                {
                    time_increase_psch -= Y[i][0];
                    conditions_status[5] = 1;
                    //printf("\n5 %lf", Y[i][0]);
                }
                if (conditions_status[6] == 0 && Y[i][3] > 0.9 * (max_3 - min_3) + min_3 && Y[i - 1][3] <= 0.9 * (max_3 - min_3) + min_3)
                {
                    time_increase_psch += Y[i][0];
                    conditions_status[6] = 1;
                    //printf("\n6 %lf", Y[i][0]);
                }

                if (conditions_status[7] == 0 && Y[i][7] < 0.05 * (max_7 - min_7) + min_7 && Y[i - 1][7] >= 0.05 * (max_7 - min_7) + min_7 && conditions_status[8] == 1)
                {
                    time_decrease_Thru += Y[i][0];
                    conditions_status[7] = 1;
                    //printf("\n7 %lf", Y[i][0]);
                }
                if (/*conditions_status[8] == 0 &&*/ Y[i][7] < 0.9 * (max_7 - min_7) + min_7 && Y[i - 1][7] >= 0.9 * (max_7 - min_7) + min_7)
                {
                    time_decrease_Thru = -Y[i][0];
                    conditions_status[8] = 1;
                    //printf("\n8 %lf", Y[i][0]);
                }

                if (conditions_status[9] == 0 && Y[i][3] < 0.05 * (max_3 - min_3) + min_3 && Y[i - 1][3] >= 0.05 * (max_3 - min_3) + min_3 && conditions_status[10] == 1)
                {
                    time_decrease_psch += Y[i][0];
                    conditions_status[9] = 1;
                    //printf("\n9 %lf", Y[i][0]);
                }
                if (/*conditions_status[10] == 0 &&*/ Y[i][3] < 0.9 * (max_3 - min_3) + min_3 && Y[i - 1][3] >= 0.9 * (max_3 - min_3) + min_3)
                {
                    time_decrease_psch = -Y[i][0];
                    conditions_status[10] = 1;
                    //printf("\n10 %lf", Y[i][0]);
                }

                if (i > 0) total_impulse += Y[i][7] * (Y[i][0] - Y[i - 1][0]);




                if (Y[i][3] >= 0.05 * (max_3 - min_3) + min_3)
                {
                    avg3 += Y[i][3];
                    counter3++;
                }

                if (Y[i][7] >= 0.05 * (max_7 - min_7) + min_7)
                {
                    avg7 += Y[i][7];
                    counter7++;
                }

                if (Y[i][9] >= 0.05 * (max_9 - min_9) + min_9)
                {
                    avg9 += Y[i][9];
                    counter9++;
                }

                if (Y[i][10] >= 0.05 * (max_10 - min_10) + min_10)
                {
                    avg10 += Y[i][10];
                    counter10++;
                }

                if (Y[i][4] >= 0.01 * (max_4 - min_4) + min_4)
                {
                    avg5 += Y[i][5];
                    counter5++;
                }

                if (Y[i][13] >= 0.05 * (max_13 - min_13) + min_13)
                {
                    avg13 += Y[i][13];
                    counter13++;
                }
            }

            avg3 /= counter3;
            avg7 /= counter7;
            avg9 /= counter9;
            avg10 /= counter10;
            avg5 /= counter5;
            avg13 /= counter13;

            printf("\nTime of response (Trigger-Ps_ch_out):\t%lf s\n", time_response_Trig_psch);
            printf("Time of response (Trigger-Thrust):\t%lf s\n", time_response_Trig_Thru);
            printf("Time of increasing Ps_ch_out:\t%lf s\n", time_increase_psch);
            printf("Time of decreasing Ps_ch_out:\t%lf s\n", time_decrease_psch);
            printf("Time of increasing Thrust:\t%lf s\n", time_increase_Thru);
            printf("Time of decreasing Thrust:\t%lf s\n", time_decrease_Thru);
            printf("Total impulse:\t%lf Ns\n\n\n", total_impulse);

            fprintf(output3, "\nTime of response (Trigger-Ps_ch_out):\t%lf s\n", time_response_Trig_psch);
            fprintf(output3, "Time of response (Trigger-Thrust):\t%lf s\n", time_response_Trig_Thru);
            fprintf(output3, "Time of increasing Ps_ch_out:\t%lf s\n", time_increase_psch);
            fprintf(output3, "Time of decreasing Ps_ch_out:\t%lf s\n", time_decrease_psch);
            fprintf(output3, "Time of increasing Thrust:\t%lf s\n", time_increase_Thru);
            fprintf(output3, "Time of decreasing Thrust:\t%lf s\n", time_decrease_Thru);
            fprintf(output3, "Total impulse:\t%lf Ns\n", total_impulse);

            fprintf(output4, "Z%d %lf %lf %lf %lf %lf %lf %lf ", file_index[iter], time_response_Trig_psch, time_response_Trig_Thru, time_increase_psch, time_decrease_psch, time_increase_Thru, time_decrease_Thru, total_impulse);
            fprintf(output4, "%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n", max_3, avg3, max_7, avg7, max_9, avg9, max_10, avg10, max_5, avg5, avg13);


            for (i = 0; i < counter; i++)
                free(Y[i]);
            free(Y);
            fclose(output3);
            input1.clear();
        }
    }
    fclose(output4);
    return 0;
}