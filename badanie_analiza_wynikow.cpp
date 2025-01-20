#define _CRT_SECURE_NO_WARNINGS
#include <fstream>
#include <iostream>
#include <string>
#include <cstring>

int main()
{
    std::string filename[46] = { "RJ_Dyn_2020_10_09_Z2.dat", "RJ_Dyn_2020_10_09_Z3.dat", "RJ_Dyn_2020_10_09_Z4.dat", "RJ_Dyn_2020_10_09_Z5.dat", "RJ_Dyn_2020_10_09_Z6.dat", "RJ_Dyn_2020_10_09_Z7.dat", "RJ_Dyn_2020_10_09_Z8.dat", "RJ_Dyn_2020_10_09_Z9.dat", "RJ_Dyn_2020_10_09_Z10.dat", "RJ_Dyn_2020_10_09_Z11.dat",
          "RJ_Dyn_2020_10_09_Z12.dat", "RJ_Dyn_2020_10_09_Z13.dat", "RJ_Dyn_2020_10_09_Z14.dat", "RJ_Dyn_2020_10_09_Z15.dat", "RJ_Dyn_2020_10_09_Z16.dat", "RJ_Dyn_2020_10_09_Z17.dat", "RJ_Dyn_2020_10_09_Z18.dat", "RJ_Dyn_2020_10_09_Z19.dat", "RJ_Dyn_2020_10_09_Z20.dat", "RJ_Dyn_2020_10_09_Z21.dat",
          "RJ_Dyn_2020_10_09_Z22.dat", "RJ_Dyn_2020_10_09_Z23.dat", "RJ_Dyn_2020_10_09_Z24.dat", "RJ_Dyn_2020_10_09_Z25.dat", "RJ_Dyn_2020_10_09_Z26.dat", "RJ_Dyn_2020_10_09_Z27.dat", "RJ_Dyn_2020_10_09_Z28.dat", "RJ_Dyn_2020_10_09_Z29.dat", "RJ_Dyn_2020_10_09_Z30.dat", "RJ_Dyn_2020_10_09_Z31.dat",
          "RJ_Dyn_2020_10_09_Z32.dat", "RJ_Dyn_2020_10_09_Z33.dat", "RJ_Dyn_2020_10_09_Z34.dat", "RJ_Dyn_2020_10_09_Z35.dat", "RJ_Dyn_2020_10_09_Z36.dat", "RJ_Dyn_2020_10_09_Z37.dat", "RJ_Dyn_2020_10_09_Z38.dat", "RJ_Dyn_2020_10_09_Z39.dat", "RJ_Dyn_2020_10_09_Z40.dat", "RJ_Dyn_2020_10_09_Z41.dat",
          "RJ_Dyn_2020_10_09_Z42.dat", "RJ_Dyn_2020_10_09_Z43.dat", "RJ_Dyn_2020_10_09_Z44.dat", "RJ_Dyn_2020_10_09_Z45.dat", "RJ_Dyn_2020_10_09_Z46.dat" };

    std::string filename1[46] = { "outputZ2.1_without_averaging_data.dat", "outputZ3.1_without_averaging_data.dat", "outputZ4.1_without_averaging_data.dat", "outputZ5.1_without_averaging_data.dat", "outputZ6.1_without_averaging_data.dat", "outputZ7.1_without_averaging_data.dat", "outputZ8.1_without_averaging_data.dat", "outputZ9.1_without_averaging_data.dat", "outputZ10.1_without_averaging_data.dat", "outputZ11.1_without_averaging_data.dat",
        "outputZ12.1_without_averaging_data.dat", "outputZ13.1_without_averaging_data.dat", "outputZ14.1_without_averaging_data.dat", "outputZ15.1_without_averaging_data.dat", "outputZ16.1_without_averaging_data.dat", "outputZ17.1_without_averaging_data.dat", "outputZ18.1_without_averaging_data.dat", "outputZ19.1_without_averaging_data.dat", "outputZ20.1_without_averaging_data.dat", "outputZ21.1_without_averaging_data.dat",
        "outputZ22.1_without_averaging_data.dat", "outputZ23.1_without_averaging_data.dat", "outputZ24.1_without_averaging_data.dat", "outputZ25.1_without_averaging_data.dat", "outputZ26.1_without_averaging_data.dat", "outputZ27.1_without_averaging_data.dat", "outputZ28.1_without_averaging_data.dat", "outputZ29.1_without_averaging_data.dat", "outputZ30.1_without_averaging_data.dat", "outputZ31.1_without_averaging_data.dat",
        "outputZ32.1_without_averaging_data.dat", "outputZ33.1_without_averaging_data.dat", "outputZ34.1_without_averaging_data.dat", "outputZ35.1_without_averaging_data.dat", "outputZ36.1_without_averaging_data.dat", "outputZ37.1_without_averaging_data.dat", "outputZ38.1_without_averaging_data.dat", "outputZ39.1_without_averaging_data.dat", "outputZ40.1_without_averaging_data.dat", "outputZ41.1_without_averaging_data.dat",
        "outputZ42.1_without_averaging_data.dat", "outputZ43.1_without_averaging_data.dat", "outputZ44.1_without_averaging_data.dat", "outputZ45.1_without_averaging_data.dat", "outputZ46.1_without_averaging_data.dat" };

    std::string filename2[46] = { "outputZ2.2_with_averaging_data.dat", "outputZ3.2_with_averaging_data.dat", "outputZ4.2_with_averaging_data.dat", "outputZ5.2_with_averaging_data.dat", "outputZ6.2_with_averaging_data.dat", "outputZ7.2_with_averaging_data.dat", "outputZ8.2_with_averaging_data.dat", "outputZ9.2_with_averaging_data.dat", "outputZ10.2_with_averaging_data.dat", "outputZ11.2_with_averaging_data.dat",
        "outputZ12.2_with_averaging_data.dat", "outputZ13.2_with_averaging_data.dat", "outputZ14.2_with_averaging_data.dat", "outputZ15.2_with_averaging_data.dat", "outputZ16.2_with_averaging_data.dat", "outputZ17.2_with_averaging_data.dat", "outputZ18.2_with_averaging_data.dat", "outputZ19.2_with_averaging_data.dat", "outputZ20.2_with_averaging_data.dat", "outputZ21.2_with_averaging_data.dat",
        "outputZ22.2_with_averaging_data.dat", "outputZ23.2_with_averaging_data.dat", "outputZ24.2_with_averaging_data.dat", "outputZ25.2_with_averaging_data.dat", "outputZ26.2_with_averaging_data.dat", "outputZ27.2_with_averaging_data.dat", "outputZ28.2_with_averaging_data.dat", "outputZ29.2_with_averaging_data.dat", "outputZ30.2_with_averaging_data.dat", "outputZ31.2_with_averaging_data.dat",
        "outputZ32.2_with_averaging_data.dat", "outputZ33.2_with_averaging_data.dat", "outputZ34.2_with_averaging_data.dat", "outputZ35.2_with_averaging_data.dat", "outputZ36.2_with_averaging_data.dat", "outputZ37.2_with_averaging_data.dat", "outputZ38.2_with_averaging_data.dat", "outputZ39.2_with_averaging_data.dat", "outputZ40.2_with_averaging_data.dat", "outputZ41.2_with_averaging_data.dat",
        "outputZ42.2_with_averaging_data.dat", "outputZ43.2_with_averaging_data.dat", "outputZ44.2_with_averaging_data.dat", "outputZ45.2_with_averaging_data.dat", "outputZ46.2_with_averaging_data.dat" };

    std::string filename3[46] = { "outputZ2.3_times&total_impulse.dat", "outputZ3.3_times&total_impulse.dat", "outputZ4.3_times&total_impulse.dat", "outputZ5.3_times&total_impulse.dat", "outputZ6.3_times&total_impulse.dat", "outputZ7.3_times&total_impulse.dat", "outputZ8.3_times&total_impulse.dat", "outputZ9.3_times&total_impulse.dat", "outputZ10.3_times&total_impulse.dat", "outputZ11.3_times&total_impulse.dat",
        "outputZ12.3_times&total_impulse.dat", "outputZ13.3_times&total_impulse.dat", "outputZ14.3_times&total_impulse.dat", "outputZ15.3_times&total_impulse.dat", "outputZ16.3_times&total_impulse.dat", "outputZ17.3_times&total_impulse.dat", "outputZ18.3_times&total_impulse.dat", "outputZ19.3_times&total_impulse.dat", "outputZ20.3_times&total_impulse.dat", "outputZ21.3_times&total_impulse.dat",
        "outputZ22.3_times&total_impulse.dat", "outputZ23.3_times&total_impulse.dat", "outputZ24.3_times&total_impulse.dat", "outputZ25.3_times&total_impulse.dat", "outputZ26.3_times&total_impulse.dat", "outputZ27.3_times&total_impulse.dat", "outputZ28.3_times&total_impulse.dat", "outputZ29.3_times&total_impulse.dat", "outputZ30.3_times&total_impulse.dat", "outputZ31.3_times&total_impulse.dat",
        "outputZ32.3_times&total_impulse.dat", "outputZ33.3_times&total_impulse.dat", "outputZ34.3_times&total_impulse.dat", "outputZ35.3_times&total_impulse.dat", "outputZ36.3_times&total_impulse.dat", "outputZ37.3_times&total_impulse.dat", "outputZ38.3_times&total_impulse.dat", "outputZ39.3_times&total_impulse.dat", "outputZ40.3_times&total_impulse.dat", "outputZ41.3_times&total_impulse.dat",
        "outputZ42.3_times&total_impulse.dat", "outputZ43.3_times&total_impulse.dat", "outputZ44.3_times&total_impulse.dat", "outputZ45.3_times&total_impulse.dat", "outputZ46.3_times&total_impulse.dat" };
    FILE* output4;
    output4 = fopen("output.4_table.dat", "w");
    fprintf(output4, "Name_of_file time_response_Trig_psch[s] time_response_Trig_Thru[s] time_increase_psch[s] time_decrease_psch[s] time_increase_Thru[s] time_decrease_Thru[s] total_impulse[Ns] psch_max[bar] psch_avg[bar] Thru_max[N] Thru_avg[N] massflow_max[kg/s] massflow_avg[kg/s] Isp_max[Ns/kg] Isp_avg[Ns/kg] T_sch_max[Ns/kg] T_sch_avg[Ns/kg] (p_out-p_in)_avg[bar]\n");

    int file_index[46] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21,
        22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46};

int iter;
for (iter = 0; iter < 45; iter++)
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
        for (i = 0;i < counter;i++)
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
                input1 >> X[i][0] >> X[i][1] >> X[i][2] >> X[i][3] >> X[i][4] >> X[i][5] >> X[i][6] >> X[i][7];
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
        for (i = 0;i < counter;i++)
            Y[i] = (double*)malloc(15 * sizeof(double));

        double max_4 = 0.0, max_7 = 0.0, max_3 = 0.0, max_9 = 0.0, max_10 = 0.0, max_5 = 0.0, max_13 = 0.0, min_4 = 1e10, min_7 = 1e10, min_3 = 1e10, min_9 = 1e10, min_10 = 1e10, min_13 = 1e10;

        for (i = 0;i < counter;i++)
        {
            Y[i][0] = X[i][0];
            for (j = 1;j <= 10;j++)
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

        fclose(output2);
        for (i = 0;i < counter;i++)
            free(X[i]);
        free(X);

        bool conditions_status[12] = { 0,0,0,0,0,0,0,0,0,0,0,0 }; //1-operation executed, 0-operation unexecuted
        double time_response_Trig_psch = 0.0, time_response_Trig_Thru = 0.0, time_increase_psch = 0.0, time_decrease_psch = 0.0, time_increase_Thru = 0.0, time_decrease_Thru = 0.0, total_impulse = 0.0;
        double avg3 = 0.0, avg7 = 0.0, avg9 = 0.0, avg10 = 0.0, avg5 = 0.0, avg13 = 0.0;
        int counter3 = 0, counter7 = 0, counter9 = 0, counter10= 0, counter5 = 0, counter13 = 0;
        for (i = 1;i < counter;i++)
        {
            if (conditions_status[0] == 0 && Y[i][4] > 0.01 * (max_4 - min_4) + min_4 && Y[i - 1][4] < 0.05 * (max_4 - min_4) + min_4)
            {
                time_response_Trig_psch -= Y[i][0];
                time_response_Trig_Thru -= Y[i][0];
                conditions_status[0] = 1;
            }

            if (conditions_status[1] == 0 && Y[i][7] > 0.05 * (max_7 - min_7) + min_7 && Y[i - 1][7] < 0.05 * (max_7 - min_7) + min_7)
            {
                time_response_Trig_Thru += Y[i][0];
                conditions_status[1] = 1;
            }
            if (conditions_status[2] == 0 && Y[i][3] > 0.05 * (max_3 - min_3) + min_3 && Y[i - 1][3] < 0.05 * (max_3 - min_3) + min_3)
            {
                time_response_Trig_psch += Y[i][0];
                conditions_status[2] = 1;
            }

            if (conditions_status[3] == 0 && Y[i][7] > 0.05 * (max_7 - min_7) + min_7 && Y[i - 1][7] < 0.05 * (max_7 - min_7) + min_7)
            {
                time_increase_Thru -= Y[i][0];
                conditions_status[3] = 1;
            }
            if (conditions_status[4] == 0 && Y[i][7] > 0.9 * (max_7 - min_7) + min_7 && Y[i - 1][7] < 0.9 * (max_7 - min_7) + min_7)
            {
                time_increase_Thru += Y[i][0];
                conditions_status[4] = 1;
            }

            if (conditions_status[5] == 0 && Y[i][3] > 0.05 * (max_3 - min_3) + min_3 && Y[i - 1][8] < 0.05 * (max_3 - min_3) + min_3)
            {
                time_increase_psch -= Y[i][0];
                conditions_status[5] = 1;
            }
            if (conditions_status[6] == 0 && Y[i][3] > 0.9 * (max_3 - min_3) + min_3 && Y[i - 1][8] < 0.9 * (max_3 - min_3) + min_3)
            {
                time_increase_psch += Y[i][0];
                conditions_status[6] = 1;
            }

            if (conditions_status[7] == 0 && Y[i][7] < 0.05 * (max_7 - min_7) + min_7 && Y[i - 1][7] > 0.05 * (max_7 - min_7) + min_7)
            {
                time_decrease_Thru += Y[i][0];
                conditions_status[7] = 1;
            }
            if (/*conditions_status[8] == 0 &&*/ Y[i][7] < 0.9 * (max_7 - min_7) + min_7 && Y[i - 1][7] > 0.9 * (max_7 - min_7) + min_7)
            {
                time_decrease_Thru = -Y[i][0];
                conditions_status[8] = 1;
            }

            if (conditions_status[9] == 0 && Y[i][3] < 0.05 * (max_3 - min_3) + min_3 && Y[i - 1][3] > 0.05 * (max_3 - min_3) + min_3)
            {
                time_decrease_psch += Y[i][0];
                conditions_status[9] = 1;
            }
            if (/*conditions_status[10] == 0 &&*/ Y[i][3] < 0.9 * (max_3 - min_3) + min_3 && Y[i - 1][3] > 0.9 * (max_3 - min_3) + min_3)
            {
                time_decrease_psch = -Y[i][0];
                conditions_status[10] = 1;
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
        

        for (i = 0;i < counter;i++)
            free(Y[i]);
        free(Y);
        fclose(output3);
        input1.clear();
    }
}
fclose(output4);
return 0;
}