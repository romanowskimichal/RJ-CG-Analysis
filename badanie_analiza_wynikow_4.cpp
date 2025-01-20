#define _CRT_SECURE_NO_WARNINGS
#include <fstream>
#include <iostream>
#include <string>
#include <cstring>

int main()
{
    std::string filename[15] = { "RJ_Dyn_2022_09_13_Z201.dat", "RJ_Dyn_2022_09_13_Z202.dat", "RJ_Dyn_2022_09_13_Z203.dat", "RJ_Dyn_2022_09_13_Z204.dat",  "RJ_Dyn_2022_09_13_Z205.dat", "RJ_Dyn_2022_09_13_Z206.dat",  "RJ_Dyn_2022_09_13_Z207.dat", "RJ_Dyn_2022_09_13_Z208.dat",
          "RJ_Dyn_2022_09_13_Z210.dat", "RJ_Dyn_2022_09_13_Z211.dat", "RJ_Dyn_2022_09_13_Z212.dat", "RJ_Dyn_2022_09_13_Z213.dat", "RJ_Dyn_2022_09_13_Z214.dat", "RJ_Dyn_2022_09_13_Z215.dat", "RJ_Dyn_2022_09_13_Z216.dat" };

    std::string filename1[15] = { "outputZ201.1_without_averaging_data.dat", "outputZ202.1_without_averaging_data.dat", "outputZ203.1_without_averaging_data.dat", "outputZ204.1_without_averaging_data.dat", "outputZ205.1_without_averaging_data.dat", "outputZ206.1_without_averaging_data.dat", "outputZ207.1_without_averaging_data.dat", "outputZ208.1_without_averaging_data.dat",
          "outputZ210.1_without_averaging_data.dat", "outputZ211.1_without_averaging_data.dat", "outputZ212.1_without_averaging_data.dat", "outputZ213.1_without_averaging_data.dat", "outputZ214.1_without_averaging_data.dat", "outputZ215.1_without_averaging_data.dat", "outputZ216.1_without_averaging_data.dat" };

    std::string filename2[15] = { "outputZ201.2_with_averaging_data.dat", "outputZ202.2_with_averaging_data.dat", "outputZ203.2_with_averaging_data.dat", "outputZ204.2_with_averaging_data.dat", "outputZ205.2_with_averaging_data.dat", "outputZ206.2_with_averaging_data.dat", "outputZ207.2_with_averaging_data.dat", "outputZ208.2_with_averaging_data.dat",
          "outputZ210.2_with_averaging_data.dat", "outputZ211.2_with_averaging_data.dat", "outputZ212.2_with_averaging_data.dat", "outputZ213.2_with_averaging_data.dat", "outputZ214.2_with_averaging_data.dat", "outputZ215.2_with_averaging_data.dat", "outputZ216.2_with_averaging_data.dat" };
    
    std::string filename3[15] = { "outputZ201.3_times&total_impulse.dat", "outputZ202.3_times&total_impulse.dat", "outputZ203.3_times&total_impulse.dat", "outputZ204.3_times&total_impulse.dat", "outputZ205.3_times&total_impulse.dat", "outputZ206.3_times&total_impulse.dat", "outputZ207.3_times&total_impulse.dat", "outputZ208.3_times&total_impulse.dat",
          "outputZ210.3_times&total_impulse.dat", "outputZ211.3_times&total_impulse.dat", "outputZ212.3_times&total_impulse.dat", "outputZ213.3_times&total_impulse.dat", "outputZ214.3_times&total_impulse.dat", "outputZ215.3_times&total_impulse.dat", "outputZ216.3_times&total_impulse.dat" };
    
    FILE* output4;
    output4 = fopen("output.4_table.dat", "w");
    fprintf(output4, "Name_of_file time_response_Trig_psch[s] time_response_Trig_Thru[s] time_increase_psch[s] time_decrease_psch[s] time_increase_Thru[s] time_decrease_Thru[s] total_impulse[Ns] total_mass[kg] psch_max[bar] psch_avg[bar] Thru_max[N] Thru_avg[N] massflow_max[kg/s] massflow_avg[kg/s] Isp_max[Ns/kg] Isp_avg[Ns/kg] T_sch_max[C] T_sch_avg[C] (p_out-p_in)_avg[bar] time_5%%Isp time_75%%Isp time_90%%Isp time_95%%Isp time_99%%Isp time_100%%Isp\n");

    int file_index[15] = { 201, 202, 203, 204, 205, 206, 207, 208, 210, 211, 212, 213, 214, 215, 216 };

    int iter;
    for (iter = 0; iter < 15; iter++)
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
            i = 0;
            double deltaDp = 0.0, temp_0 = 0.0;
            while (X[i][0] <= 0.1)
            {
                deltaDp += X[i][2];
                temp_0 += X[i][5];
                i++;
            }
            deltaDp = deltaDp / i;
            temp_0 = temp_0 / i;
            i = 0;
            for (i = 0; i < counter; i++)
                X[i][2] = X[i][2] - deltaDp;
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
            bool conditions_status_2[6] = { 0,0,0,0,0,0}; //1-operation executed, 0-operation unexecuted
            double time_response_Trig_psch = 0.0, time_response_Trig_Thru = 0.0, time_increase_psch = 0.0, time_decrease_psch = 0.0, time_increase_Thru = 0.0, time_decrease_Thru = 0.0, total_impulse = 0.0, total_mass = 0.0;
            double avg3 = 0.0, avg7 = 0.0, avg9 = 0.0, avg10 = 0.0, avg5 = 0.0, avg13 = 0.0;
            int counter3 = 0, counter7 = 0, counter9 = 0, counter10 = 0, counter5 = 0, counter13 = 0;
            double t5 = 0.0, t75 = 0.0, t90 = 0.0, t95 = 0.0, t99 = 0.0, t100 = 0.0;
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

                if (Y[i][9] >= 0.15 * (max_9 - min_9) + min_9)
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


                if (conditions_status_2[0] == 0 && Y[i][10] >= 0.05 * (max_10 - min_10) + min_10)
                {
                    t5 = Y[i][0];
                    conditions_status_2[0] = 1;
                }

                if (conditions_status_2[1] == 0 && Y[i][10] >= 0.75 * (max_10 - min_10) + min_10)
                {
                    t75 = Y[i][0];
                    conditions_status_2[1] = 1;
                }

                if (conditions_status_2[2] == 0 && Y[i][10] >= 0.90 * (max_10 - min_10) + min_10)
                {
                    t90 = Y[i][0];
                    conditions_status_2[2] = 1;
                }

                if (conditions_status_2[3] == 0 && Y[i][10] >= 0.95 * (max_10 - min_10) + min_10)
                {
                    t95 = Y[i][0];
                    conditions_status_2[3] = 1;
                }

                if (conditions_status_2[4] == 0 && Y[i][10] >= 0.99 * (max_10 - min_10) + min_10)
                {
                    t99 = Y[i][0];
                    conditions_status_2[4] = 1;
                }

                if (conditions_status_2[5] == 0 && Y[i][10] >= 1.00 * (max_10 - min_10) + min_10)
                {
                    t100 = Y[i][0];
                    conditions_status_2[5] = 1;
                }
            }
            total_mass = avg9 * (Y[1][0] - Y[0][0]);
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
            printf("Total impulse:\t%lf Ns\n", total_impulse);
            printf("Total mass of fuel:\t%lf kg\n", total_mass);
            printf("Initial temperature:\t%lf C\n", temp_0);
            printf("Times of reaching percents of maximal specific impulse:\n5%%Isp\t75%%Isp\t90%%Isp\t95%%Isp\t99%%Isp\t100%%Isp\n");
            printf("%.4lf\t%.4lf\t%.4lf\t%.4lf\t%.4lf\t%.4lf\n\n\n", t5, t75, t90, t95, t99, t100);

            fprintf(output3, "\nTime of response (Trigger-Ps_ch_out):\t%lf s\n", time_response_Trig_psch);
            fprintf(output3, "Time of response (Trigger-Thrust):\t%lf s\n", time_response_Trig_Thru);
            fprintf(output3, "Time of increasing Ps_ch_out:\t%lf s\n", time_increase_psch);
            fprintf(output3, "Time of decreasing Ps_ch_out:\t%lf s\n", time_decrease_psch);
            fprintf(output3, "Time of increasing Thrust:\t%lf s\n", time_increase_Thru);
            fprintf(output3, "Time of decreasing Thrust:\t%lf s\n", time_decrease_Thru);
            fprintf(output3, "Total impulse:\t%lf Ns\n", total_impulse);
            fprintf(output3, "Total mass of fuel:\t%lf kg\n", total_mass);
            fprintf(output3, "Initial temperature:\t%lf C\n", temp_0);
            fprintf(output3, "Times of reaching percents of maximal specific impulse:\n5%%Isp\t75%%Isp\t90%%Isp\t95%%Isp\t99%%Isp\t100%%Isp\n");
            fprintf(output3, "%.4lf\t%.4lf\t%.4lf\t%.4lf\t%.4lf\t%.4lf\n\n\n", t5, t75, t90, t95, t99, t100);

            fprintf(output4, "Z%d %lf %lf %lf %lf %lf %lf %lf %lf ", file_index[iter], time_response_Trig_psch, time_response_Trig_Thru, time_increase_psch, time_decrease_psch, time_increase_Thru, time_decrease_Thru, total_impulse, total_mass);
            fprintf(output4, "%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf ", max_3, avg3, max_7, avg7, max_9, avg9, max_10, avg10, max_5, avg5, avg13);
            fprintf(output4, "%.4lf %.4lf %.4lf %.4lf %.4lf %.4lf\n", t5, t75, t90, t95, t99, t100);

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