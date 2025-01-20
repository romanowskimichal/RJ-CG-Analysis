#define _CRT_SECURE_NO_WARNINGS
#include <fstream>
#include <iostream>
#include <string>
#include <cstring>

int main()
{
    std::string filename[46] = { "RJ_Dyn_2021_01_15_Z47.dat", "RJ_Dyn_2021_01_15_Z48.dat", "RJ_Dyn_2021_01_15_Z49.dat", "RJ_Dyn_2021_01_26_Z66.dat", "RJ_Dyn_2021_01_26_Z67.dat", "RJ_Dyn_2021_01_26_Z68.dat", "RJ_Dyn_2021_01_26_Z69.dat", "RJ_Dyn_2021_01_26_Z72.dat",
          "RJ_Dyn_2021_01_26_Z73.dat", "RJ_Dyn_2021_01_26_Z74.dat", "RJ_Dyn_2021_01_26_Z76.dat", "RJ_Dyn_2021_01_26_Z77.dat", "RJ_Dyn_2021_01_26_Z78.dat", "RJ_Dyn_2021_01_26_Z79.dat", "RJ_Dyn_2021_01_26_Z80.dat", "RJ_Dyn_2021_01_26_Z81.dat", "RJ_Dyn_2021_01_26_Z82.dat",
          "RJ_Dyn_2021_01_26_Z83.dat", "RJ_Dyn_2021_01_26_Z84.dat", "RJ_Dyn_2021_01_26_Z85.dat", "RJ_Dyn_2021_01_26_Z86.dat", "RJ_Dyn_2021_01_26_Z87.dat", "RJ_Dyn_2021_01_26_Z88.dat", "RJ_Dyn_2021_01_26_Z89.dat", "RJ_Dyn_2021_01_26_Z90.dat", "RJ_Dyn_2021_01_26_Z91.dat", "RJ_Dyn_2021_01_26_Z92.dat",
          "RJ_Dyn_2021_01_26_Z93.dat", "RJ_Dyn_2021_01_29_Z94.dat", "RJ_Dyn_2021_01_29_Z95.dat", "RJ_Dyn_2021_01_29_Z96.dat", "RJ_Dyn_2021_01_29_Z97.dat", "RJ_Dyn_2021_01_29_Z98.dat", "RJ_Dyn_2021_01_29_Z99.dat", "RJ_Dyn_2021_01_29_Z100.dat", "RJ_Dyn_2021_01_29_Z101.dat", "RJ_Dyn_2021_01_29_Z102.dat",
          "RJ_Dyn_2021_01_29_Z103.dat", "RJ_Dyn_2021_01_29_Z104.dat" };

    std::string filename1[46] = { "outputZ47.1_without_averaging_data.dat", "outputZ48.1_without_averaging_data.dat", "outputZ49.1_without_averaging_data.dat", "outputZ66.1_without_averaging_data.dat", "outputZ67.1_without_averaging_data.dat", "outputZ68.1_without_averaging_data.dat", "outputZ69.1_without_averaging_data.dat", "outputZ72.1_without_averaging_data.dat",
          "outputZ73.1_without_averaging_data.dat", "outputZ74.1_without_averaging_data.dat", "outputZ76.1_without_averaging_data.dat", "outputZ77.1_without_averaging_data.dat", "outputZ78.1_without_averaging_data.dat", "outputZ79.1_without_averaging_data.dat", "outputZ80.1_without_averaging_data.dat", "outputZ81.1_without_averaging_data.dat", "outputZ82.1_without_averaging_data.dat",
          "outputZ83.1_without_averaging_data.dat", "outputZ84.1_without_averaging_data.dat", "outputZ85.1_without_averaging_data.dat", "outputZ86.1_without_averaging_data.dat", "outputZ87.1_without_averaging_data.dat", "outputZ88.1_without_averaging_data.dat", "outputZ89.1_without_averaging_data.dat", "outputZ90.1_without_averaging_data.dat", "outputZ91.1_without_averaging_data.dat", "outputZ92.1_without_averaging_data.dat",
          "outputZ93.1_without_averaging_data.dat", "outputZ94.1_without_averaging_data.dat", "outputZ95.1_without_averaging_data.dat", "outputZ96.1_without_averaging_data.dat", "outputZ97.1_without_averaging_data.dat", "outputZ98.1_without_averaging_data.dat", "outputZ99.1_without_averaging_data.dat", "outputZ100.1_without_averaging_data.dat", "outputZ101.1_without_averaging_data.dat", "outputZ102.1_without_averaging_data.dat",
          "outputZ103.1_without_averaging_data.dat", "outputZ104.1_without_averaging_data.dat" };

    std::string filename2[46] = { "outputZ47.2_with_averaging_data.dat", "outputZ48.2_with_averaging_data.dat", "outputZ49.2_with_averaging_data.dat", "outputZ66.2_with_averaging_data.dat", "outputZ67.2_with_averaging_data.dat", "outputZ68.2_with_averaging_data.dat", "outputZ69.2_with_averaging_data.dat", "outputZ72.2_with_averaging_data.dat",
      "outputZ73.2_with_averaging_data.dat", "outputZ74.2_with_averaging_data.dat", "outputZ76.2_with_averaging_data.dat", "outputZ77.2_with_averaging_data.dat", "outputZ78.2_with_averaging_data.dat", "outputZ79.2_with_averaging_data.dat", "outputZ80.2_with_averaging_data.dat", "outputZ81.2_with_averaging_data.dat", "outputZ82.2_with_averaging_data.dat",
      "outputZ83.2_with_averaging_data.dat", "outputZ84.2_with_averaging_data.dat", "outputZ85.2_with_averaging_data.dat", "outputZ86.2_with_averaging_data.dat", "outputZ87.2_with_averaging_data.dat", "outputZ88.2_with_averaging_data.dat", "outputZ89.2_with_averaging_data.dat", "outputZ90.2_with_averaging_data.dat", "outputZ91.2_with_averaging_data.dat", "outputZ92.2_with_averaging_data.dat",
      "outputZ93.2_with_averaging_data.dat", "outputZ94.2_with_averaging_data.dat", "outputZ95.2_with_averaging_data.dat", "outputZ96.2_with_averaging_data.dat", "outputZ97.2_with_averaging_data.dat", "outputZ98.2_with_averaging_data.dat", "outputZ99.2_with_averaging_data.dat", "outputZ100.2_with_averaging_data.dat", "outputZ101.2_with_averaging_data.dat", "outputZ102.2_with_averaging_data.dat",
      "outputZ103.2_with_averaging_data.dat", "outputZ104.2_with_averaging_data.dat" };

    std::string filename3[46] = { "outputZ47.3_times&total_impulse.dat", "outputZ48.3_times&total_impulse.dat", "outputZ49.3_times&total_impulse.dat", "outputZ66.3_times&total_impulse.dat", "outputZ67.3_times&total_impulse.dat", "outputZ68.3_times&total_impulse.dat", "outputZ69.3_times&total_impulse.dat", "outputZ72.3_times&total_impulse.dat",
      "outputZ73.3_times&total_impulse.dat", "outputZ74.3_times&total_impulse.dat", "outputZ76.3_times&total_impulse.dat", "outputZ77.3_times&total_impulse.dat", "outputZ78.3_times&total_impulse.dat", "outputZ79.3_times&total_impulse.dat", "outputZ80.3_times&total_impulse.dat", "outputZ81.3_times&total_impulse.dat", "outputZ82.3_times&total_impulse.dat",
      "outputZ83.3_times&total_impulse.dat", "outputZ84.3_times&total_impulse.dat", "outputZ85.3_times&total_impulse.dat", "outputZ86.3_times&total_impulse.dat", "outputZ87.3_times&total_impulse.dat", "outputZ88.3_times&total_impulse.dat", "outputZ89.3_times&total_impulse.dat", "outputZ90.3_times&total_impulse.dat", "outputZ91.3_times&total_impulse.dat", "outputZ92.3_times&total_impulse.dat",
      "outputZ93.3_times&total_impulse.dat", "outputZ94.3_times&total_impulse.dat", "outputZ95.3_times&total_impulse.dat", "outputZ96.3_times&total_impulse.dat", "outputZ97.3_times&total_impulse.dat", "outputZ98.3_times&total_impulse.dat", "outputZ99.3_times&total_impulse.dat", "outputZ100.3_times&total_impulse.dat", "outputZ101.3_times&total_impulse.dat", "outputZ102.3_times&total_impulse.dat",
      "outputZ103.3_times&total_impulse.dat", "outputZ104.3_times&total_impulse.dat" };

    FILE* output4;
    output4 = fopen("output.4_table.dat", "w");
    fprintf(output4, "Name_of_file time_response_Trig_psch[s] time_response_Trig_Thru[s] time_increase_psch[s] time_decrease_psch[s] time_increase_Thru[s] time_decrease_Thru[s] total_impulse[Ns] psch_max[bar] psch_avg[bar] Thru_max[N] Thru_avg[N] massflow_max[kg/s] massflow_avg[kg/s] Isp_max[Ns/kg] Isp_avg[Ns/kg] T_sch_max[Ns/kg] T_sch_avg[Ns/kg] (p_out-p_in)_avg[bar]\n");
    
    int file_index[46] = { 47, 48, 49, 66, 67, 68, 69, 72, 73, 74, 76, 77, 78, 79, 80, 81, 
        82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104};

    int iter;
    for (iter = 0; iter < 39; iter++)
    {
        char name1[40];
        char name2[40];
        char name3[40];

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
                //reading in data from file and calculating proper valueus of new quantities
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
            //resolved //loops for normalization massflow around 0.0 and achieving proper values of specific impulse
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