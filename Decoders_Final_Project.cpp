// This program will let a user either convert a currency to another one or calculate recent USD inflation.

//Preprocessor directive
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

//function prototype inflation calculator 
float linConv1(float, float);
float linConv2(float, float);
float linConv3(float, float);
float linConv4(float, float);
float linConv5(float, float);
float linConv6(float, float);
float linConv7(float, float);
float linConv8(float, float);
float linConv9(float, float);
float linConv10(float, float);
float linConv11(float, float);
float linConv12(float, float);
float linConv13(float, float);
float linConv14(float, float);
float linConv15(float, float);
float linConv16(float, float);
void inflation();

//function prototype currency convertor
int getStartingCurrency(int a);
int getFinalCurrency(int a);
float getStartingCurrencyValue(float a);

int main()
{

    // ask for what type of program using cin
    int programType;

    // char for decision loops
    char decisionWholeProgram;
    char decisionInflation;
    char decisionCurrency;

    //input output files
    ofstream dataOut;
    //ifstream dataIn;

    cout << "Enter which conversion you would like to use type 1 for inflation calculator or 2 for currency converter" << endl;
    cin >> programType;


    do
    {
        // Inflation Calculator
        if (programType == 1)
        {
            // Runs inflation calculator on a loop until the user exits.
            do {

                inflation(); /*Runs the inflation function*/

                // Ask user if they would like to run inflation calculator again
                cout << "Would you like to run this program again? Type 'y' for yes and 'n' for no." << endl;
                cin >> decisionInflation;

            } while ((decisionInflation == 'y') || (decisionInflation == 'Y'));
        }


        // Currency Conversion
        else if (programType == 2)
        {
            // Runs currency converter on a loop until the user exits.
            do
            {

                //constants
                //currencies to USD
                const float EURO_TO_USD = 1.06;
                const float POUNDS_TO_USD = 1.28;
                const float AUSTRALIAN_DOLLAR_TO_USD = 0.64;
                const float CANADIAN_DOLLAR_TO_USD = 0.71;
                const float JAPANESE_YEN_TO_USD = 0.0066;

                // USD to currencies
                const float USD_TO_EURO = 0.94;
                const float USD_TO_POUNDS = 0.78;
                const float USD_TO_AUSTRALIAN_DOLLAR = 1.56;
                const float USD_TO_CANADIAN_DOLLAR = 1.42;
                const float USD_TO_JAPANESE_YEN = 151.10;


                //variables
                float startingValue = 0, finalConvertedValue = 0;
                int startingCurrency = 0, finalCurrency = 0;


                //function to get starting currency from the user
                startingCurrency = getStartingCurrency(startingCurrency);

                //function to get final currency from the user
                finalCurrency = getFinalCurrency(finalCurrency);


                //get starting currencies value.
                startingValue = getStartingCurrencyValue(startingValue);


                // nested switch statement uses starting and final currency to convert value of currency
                switch (startingCurrency)
                {
                case 1: // starting currency USD
                {
                    switch (finalCurrency)
                    {
                    case 1: // final currency USD
                    {
                        finalConvertedValue = startingValue;
                        break;
                    }
                    case 2: // final currency EURO
                    {
                        finalConvertedValue = startingValue * USD_TO_EURO;
                        break;
                    }
                    case 3: // final currency AUD
                    {
                        finalConvertedValue = startingValue * USD_TO_AUSTRALIAN_DOLLAR;
                        break;
                    }
                    case 4: // final currency CAD
                    {
                        finalConvertedValue = startingValue * USD_TO_CANADIAN_DOLLAR;
                        break;
                    }
                    case 5: // final currency YEN
                    {
                        finalConvertedValue = startingValue * USD_TO_JAPANESE_YEN;
                        break;
                    }
                    default: // catches errors
                    {
                        cout << "Please re-enter your starting and final currency." << endl;
                        break;
                    }
                    }


                    break;
                }
                case 2: // starting currency EURO
                {
                    switch (finalCurrency)
                    {
                    case 1: // final currency USD
                    {
                        finalConvertedValue = startingValue * EURO_TO_USD;
                        break;
                    }
                    case 2: // final currency EURO
                    {
                        finalConvertedValue = startingValue;
                        break;
                    }
                    case 3: // final currency AUD
                    {
                        finalConvertedValue = startingValue * EURO_TO_USD * USD_TO_AUSTRALIAN_DOLLAR;
                        break;
                    }
                    case 4: // final currency CAD
                    {
                        finalConvertedValue = startingValue * EURO_TO_USD * USD_TO_CANADIAN_DOLLAR;
                        break;
                    }
                    case 5: // final currency YEN
                    {
                        finalConvertedValue = startingValue * EURO_TO_USD * USD_TO_CANADIAN_DOLLAR;
                        break;
                    }
                    default: // catches errors
                    {
                        cout << "Please re-enter your starting and final currency." << endl;
                        break;
                    }
                    }




                    break;
                }
                case 3: // starting currency AUD
                {
                    switch (finalCurrency)
                    {
                    case 1: // final currency USD
                    {
                        finalConvertedValue = startingValue * AUSTRALIAN_DOLLAR_TO_USD;
                        break;
                    }
                    case 2: // final currency EURO
                    {
                        finalConvertedValue = startingValue * AUSTRALIAN_DOLLAR_TO_USD * USD_TO_EURO;
                        break;
                    }
                    case 3: // final currency AUD
                    {
                        finalConvertedValue = startingValue;
                        break;
                    }
                    case 4: // final currency CAD
                    {
                        finalConvertedValue = startingValue * AUSTRALIAN_DOLLAR_TO_USD * USD_TO_CANADIAN_DOLLAR;
                        break;
                    }
                    case 5: // final currency YEN
                    {
                        finalConvertedValue = startingValue * AUSTRALIAN_DOLLAR_TO_USD * USD_TO_JAPANESE_YEN;
                        break;
                    }
                    default: // catches errors
                    {
                        cout << "Please re-enter your starting and final currency." << endl;
                        break;
                    }
                    }




                    break;
                }
                case 4: // starting currency CAD
                {
                    switch (finalCurrency)
                    {
                    case 1: // final currency USD
                    {
                        finalConvertedValue = startingValue * CANADIAN_DOLLAR_TO_USD;
                        break;
                    }
                    case 2: // final currency EURO
                    {
                        finalConvertedValue = startingValue * CANADIAN_DOLLAR_TO_USD * USD_TO_EURO;
                        break;
                    }
                    case 3: // final currency AUD
                    {
                        finalConvertedValue = startingValue * CANADIAN_DOLLAR_TO_USD * USD_TO_AUSTRALIAN_DOLLAR;
                        break;
                    }
                    case 4: // final currency CAD
                    {
                        finalConvertedValue = startingValue;
                        break;
                    }
                    case 5: // final currency YEN
                    {
                        finalConvertedValue = startingValue * CANADIAN_DOLLAR_TO_USD * USD_TO_JAPANESE_YEN;
                        break;
                    }
                    default: // catches errors
                    {
                        cout << "Please re-enter your starting and final currency." << endl;
                        break;
                    }
                    }




                    break;
                }
                case 5: // starting currency YEN
                {
                    switch (finalCurrency)
                    {
                    case 1: // final currency USD
                    {
                        finalConvertedValue = startingValue * JAPANESE_YEN_TO_USD;
                        break;
                    }
                    case 2: // final currency EURO
                    {
                        finalConvertedValue = startingValue * JAPANESE_YEN_TO_USD * USD_TO_EURO;
                        break;
                    }
                    case 3: // final currency AUD
                    {
                        finalConvertedValue = startingValue * JAPANESE_YEN_TO_USD * USD_TO_AUSTRALIAN_DOLLAR;
                        break;
                    }
                    case 4: // final currency CAD
                    {
                        finalConvertedValue = startingValue * JAPANESE_YEN_TO_USD * USD_TO_CANADIAN_DOLLAR;
                        break;
                    }
                    case 5: // final currency YEN
                    {
                        finalConvertedValue = startingValue;
                        break;
                    }
                    default: // catches errors
                    {
                        cout << "Please re-enter your starting and final currency." << endl;
                        break;
                    }
                    }

                    break;
                }



                // Default for main switch case. 
                default:
                    cout << "Invalid data input, please restart.";
                    break;
                }


                // output results to console
                cout << "Your converted currency has been converted from " << startingValue << " to " << finalConvertedValue << endl;

                // output results to text file for long term storage

                dataOut.open("ConversionResults.txt", ios::app);
                dataOut << "Your starting currency " << startingCurrency << " has been converted from " << startingValue << " to " << finalConvertedValue << " worth of currency " << finalCurrency << endl;
                dataOut.close();

                // Asks user to run currency converter again
                cout << "Would you like to run this program again? Type 'y' for yes and 'n' for no." << endl;
                cin >> decisionCurrency;


            } while ((decisionCurrency == 'y') || (decisionCurrency == 'Y'));
        }

        else {
            //Exception code tells the user to enter either 1 or 2.
            cout << "Please enter 1 for the inflation calculator and 2 for the currency converter." << endl;
        }


        // Loop checks if user would like to run another program
        cout << "Would you like to run the entire program again? Type 'y' for yes and 'n' for no." << endl;
        cin >> decisionWholeProgram;


        //Logic code for what program to run or to exit the program
        if ((decisionWholeProgram == 'y') || (decisionWholeProgram == 'Y'))
        {
            cout << "Enter which conversion you would like to use type 1 for inflation calculator or 2 for currency converter" << endl;
            cin >> programType;
        }
        else
        {
            cout << "The program will now close." << endl;
        }
    } while ((decisionWholeProgram == 'y') || (decisionWholeProgram == 'Y'));


    return 0;
}


//Currency Convertor Functions

// get starting currency
int getStartingCurrency(int startingCurrency)
{
    //get the starting and final currency from the user and then get the starting currencies value
    cout << "Please enter the currency you would like to start with please enter one of the following numbers '1' = 'USD', '2' = 'EURO', '3' = 'AUD', '4' = 'CAD', '5' = 'YEN' " << endl;
    cin >> startingCurrency;
    // While loop to validate user input
    while (startingCurrency != 1 && startingCurrency != 2 && startingCurrency != 3 && startingCurrency != 4 && startingCurrency != 5) {
        cout << "Invalid currency selected. Please re-enter your starting currency choice." << endl;
        cout << "Please enter the currency you would like to start with. Enter one of the following numbers:" << endl;
        cout << "'1' = 'USD', '2' = 'EURO', '3' = 'AUD', '4' = 'CAD', '5' = 'YEN'" << endl;
        cin >> startingCurrency;
    }

    return startingCurrency;
}

// get final currency
int getFinalCurrency(int finalCurrency)
{
    cout << "What currency would you like to end with please enter one of the following numbers '1' = 'USD', '2' = 'EURO', '3' = 'AUD', '4' = 'CAD', '5' = 'YEN'" << endl;
    cin >> finalCurrency;
    // While loop to validate user input
    while (finalCurrency != 1 && finalCurrency != 2 && finalCurrency != 3 && finalCurrency != 4 && finalCurrency != 5) {
        cout << "Invalid currency selected. Please re-enter your final currency choice." << endl;
        cout << "Please enter the currency you would like to start with. Enter one of the following numbers:" << endl;
        cout << "'1' = 'USD', '2' = 'EURO', '3' = 'AUD', '4' = 'CAD', '5' = 'YEN'" << endl;
        cin >> finalCurrency;
    }
    
    return finalCurrency;
}

//Get starting currency value
float getStartingCurrencyValue(float startingValue)
{
    //get starting currencies value.
    cout << "Type your starting amount" << endl;
    cin >> startingValue;
    // While loop to validate user input
    while (startingValue < 0) {
        cout << "Invalid starting value input. Please re-enter your starting value." << endl;
        cin >> startingValue;
    }

    return startingValue;
}


//Inflation main function
void inflation()
{
    //input output files
    ofstream dataOut;

    //initialize variables
    int yearStart;  /*Define variable corresponding to starting year*/
    int yearEnd;   /*Define variable corresponding to ending year*/
    float value1;    /*Define variable corresponding to starting (yearStart) value*/
    float value2;    /*Define variable corresponding to transition (2024) value*/
    float value3;   /*Define variable corresponding to ending (endYear) value*/
    float cFactor;  /*Define variable corresponding to the conversion factor*/
    float x;  /*Define variable corresponding to the independent variable in linear equation*/

    //Ask user for input starting/final year and starting currency amount
    cout << "Please enter the year you would like to start with (between the years 1914 and 2024) " << endl;  /*Ask for starting year*/
    cin >> yearStart;  /*Get input for the starting year*/
    cout << "Please enter the year you would like to end with (between the years 1914 and 2024)" << endl; /*Ask for ending year*/
    cin >> yearEnd;   /*Get input for the ending year*/
    cout << "Please enter the dollar amount you would like to convert" << endl; /*Ask for starting value*/
    cin >> value1; /*Get input for the starting value*/
    cout << fixed << setprecision(2);  /*Format output*/


    /*if and if elses for converting from start year value to 2024 value*/
    if (yearStart >= 1914 && yearStart <= 1920)  /*Case that start year value is between 1914 and 1920*/
    {
        value2 = linConv1(yearStart, value1); /*Runs the 1st conversion function*/
    }
    else if (yearStart >= 1921 && yearStart <= 1931) /*Case that start year value is between 1921 and 1931*/
    {
        value2 = linConv2(yearStart, value1); /*Runs the 2nd conversion function*/
    }
    else if (yearStart >= 1932 && yearStart <= 1942) /*Case that start year value is between 1932 and 1942*/
    {
        value2 = linConv3(yearStart, value1); /*Runs the 3rd conversion function*/
    }
    else if (yearStart >= 1943 && yearStart <= 1973) /*Case that start year value is between 1943 and 1973*/
    {
        value2 = linConv4(yearStart, value1); /*Runs the 4th conversion function*/
    }
    else if (yearStart >= 1974 && yearStart <= 1980) /*Case that start year value is between 1974 and 1980*/
    {
        value2 = linConv5(yearStart, value1); /*Runs the 5th conversion function*/
    }
    else if (yearStart >= 1981 && yearStart <= 2015) /*Case that start year value is between 1981 and 2015*/
    {
        value2 = linConv6(yearStart, value1); /*Runs the 6th conversion function*/
    }
    else if (yearStart >= 2016 && yearStart <= 2020) /*Case that start year value is between 2016 and 2020*/
    {
        value2 = linConv7(yearStart, value1); /*Runs the 7th conversion function*/
    }
    else if (yearStart >= 2021 && yearStart <= 2024) /*Case that start year value is between 2021 and 2024*/
    {
        value2 = linConv8(yearStart, value1); /*Runs the 8th conversion function*/
    }
    else /*Case that user input invalid year*/
    {
        cout << "Please enter the starting year between 1914 and 2024." << endl; /*Tell user to input correct year*/
    }


    /*if and if elses for converting from 2024 value to end year value*/
    if (yearEnd >= 1914 && yearEnd <= 1920) /*Case that end year value is between 1914 and 1920*/
    {
        value3 = linConv9(yearEnd, value2); /*Runs the 9th conversion function*/
    }
    else if (yearEnd >= 1921 && yearEnd <= 1931) /*Case that end year value is between 1921 and 1931*/
    {
        value3 = linConv10(yearEnd, value2); /*Runs the 10th conversion function*/
    }
    else if (yearEnd >= 1932 && yearEnd <= 1942) /*Case that end year value is between 1932 and 1942*/
    {
        value3 = linConv11(yearEnd, value2); /*Runs the 11th conversion function*/
    }
    else if (yearEnd >= 1943 && yearEnd <= 1973) /*Case that end year value is between 1943 and 1973*/
    {
        value3 = linConv12(yearEnd, value2); /*Runs the 12th conversion function*/
    }
    else if (yearEnd >= 1974 && yearEnd <= 1980) /*Case that end year value is between 1974 and 1980*/
    {
        value3 = linConv13(yearEnd, value2); /*Runs the 13th conversion function*/
    }
    else if (yearEnd >= 1981 && yearEnd <= 2015) /*Case that end year value is between 1981 and 2015*/
    {
        value3 = linConv14(yearEnd, value2); /*Runs the 14th conversion function*/
    }
    else if (yearEnd >= 2016 && yearEnd <= 2020) /*Case that end year value is between 2016 and 2020*/
    {
        value3 = linConv15(yearEnd, value2); /*Runs the 15th conversion function*/
    }
    else if (yearEnd >= 2021 && yearEnd <= 2024) /*Case that end year value is between 2021 and 2024*/
    {
        value3 = linConv16(yearEnd, value2); /*Runs the 16th conversion function*/
    }
    else /*Case that user input invalid year*/
    {
        cout << "Please enter the final year between 1914 and 2024." << endl; /*Tell user to input correct year*/
    }

    // Output final amount

    cout << "$" << value1 << " in " << yearStart << " would be worth $" << value3 << " in " << yearEnd << endl;

    // Store final amount in a file
    dataOut.open("value.out", ios::app);
    dataOut << "$" << value1 << " in " << yearStart << " would be worth $" << value3 << " in " << yearEnd;
    dataOut.close();
}

// Inflation linear conversion
float linConv1(float x, float value1)
{
    float cFactor;
    cFactor = (5.333) * (x - 1914) + 32;  /*Using linear equation corresponding to years 1914-1920 to get conversion factor*/
    cFactor = cFactor / 1000; /*Scaling conversion factor*/
    return value1 / cFactor; /*Calculating 2024 value based on conversion factor*/
}
float linConv2(float x, float value1)
{
    float cFactor;
    cFactor = (-1.455) * (x - 1914) + 72.735; /*Using linear equation corresponding to years 1921-1931 to get conversion factor*/
    cFactor = cFactor / 1000; /*Scaling conversion factor*/
    return value1 / cFactor; /*Calculating 2024 value based on conversion factor*/
}
float linConv3(float x, float value1)
{
    float cFactor;
    cFactor = 45; /*Using linear equation corresponding to years 1932-1942 to get conversion factor*/
    cFactor = cFactor / 1000; /*Scaling conversion factor*/
    return value1 / cFactor; /*Calculating 2024 value based on conversion factor*/
}
float linConv4(float x, float value1)
{
    float cFactor;
    cFactor = (2.7) * (x - 1914) - 23.6; /*Using linear equation corresponding to years 1943-1973 to get conversion factor*/
    cFactor = cFactor / 1000; /*Scaling conversion factor*/
    return value1 / cFactor; /*Calculating 2024 value based on conversion factor*/
}
float linConv5(float x, float value1)
{
    float cFactor;
    cFactor = (14.532) * (x - 1914) - 715.392; /*Using linear equation corresponding to years 1974-1980 to get conversion factor*/
    cFactor = cFactor / 1000; /*Scaling conversion factor*/
    return value1 / cFactor; /*Calculating 2024 value based on conversion factor*/
}
float linConv6(float x, float value1)
{
    float cFactor;
    cFactor = (14.532) * (x - 1914) - 695.392; /*Using linear equation corresponding to years 1981-2015 to get conversion factor*/
    cFactor = cFactor / 1000; /*Scaling conversion factor*/
    return value1 / cFactor; /*Calculating 2024 value based on conversion factor*/
}
float linConv7(float x, float value1)
{
    float cFactor;
    cFactor = (14.532) * (x - 1914) - 715.392; /*Using linear equation corresponding to years 2016-2020 to get conversion factor*/
    cFactor = cFactor / 1000; /*Scaling conversion factor*/
    return value1 / cFactor; /*Calculating 2024 value based on conversion factor*/
}
float linConv8(float x, float value1)
{
    float cFactor;
    cFactor = (43.75) * (x - 1914) - 3812.5; /*Using linear equation corresponding to years 2021-2024 to get conversion factor*/
    cFactor = cFactor / 1000; /*Scaling conversion factor*/
    return value1 / cFactor; /*Calculating 2024 value based on conversion factor*/
}
float linConv9(float x, float value2)
{
    float cFactor;
    cFactor = (5.333) * (x - 1914) + 32;  /*Using linear equation corresponding to years 1914-1920 to get conversion factor*/
    cFactor = cFactor / 1000; /*Scaling conversion factor*/
    return value2 * cFactor; /*Calculating end year value based on conversion factor*/
}
float linConv10(float x, float value2)
{
    float cFactor;
    cFactor = (-1.455) * (x - 1914) + 72.735; /*Using linear equation corresponding to years 1921-1931 to get conversion factor*/
    cFactor = cFactor / 1000; /*Scaling conversion factor*/
    return value2 * cFactor; /*Calculating end year value based on conversion factor*/
}
float linConv11(float x, float value2)
{
    float cFactor;
    cFactor = 45; /*Using linear equation corresponding to years 1932-1942 to get conversion factor*/
    cFactor = cFactor / 1000; /*Scaling conversion factor*/
    return value2 * cFactor; /*Calculating end year value based on conversion factor*/
}
float linConv12(float x, float value2)
{
    float cFactor;
    cFactor = (2.7) * (x - 1914) - 23.6; /*Using linear equation corresponding to years 1943-1973 to get conversion factor*/
    cFactor = cFactor / 1000; /*Scaling conversion factor*/
    return value2 * cFactor; /*Calculating end year value based on conversion factor*/
}
float linConv13(float x, float value2)
{
    float cFactor;
    cFactor = (14.532) * (x - 1914) - 715.392; /*Using linear equation corresponding to years 1974-1980 to get conversion factor*/
    cFactor = cFactor / 1000; /*Scaling conversion factor*/
    return value2 * cFactor; /*Calculating end year value based on conversion factor*/
}
float linConv14(float x, float value2)
{
    float cFactor;
    cFactor = (14.532) * (x - 1914) - 695.392; /*Using linear equation corresponding to years 1981-2015 to get conversion factor*/
    cFactor = cFactor / 1000; /*Scaling conversion factor*/
    return value2 * cFactor; /*Calculating end year value based on conversion factor*/
}
float linConv15(float x, float value2)
{
    float cFactor;
    cFactor = (14.532) * (x - 1914) - 715.392; /*Using linear equation corresponding to years 2016-2020 to get conversion factor*/
    cFactor = cFactor / 1000; /*Scaling conversion factor*/
    return value2 * cFactor; /*Calculating end year value based on conversion factor*/
}
float linConv16(float x, float value2)
{
    float cFactor;
    cFactor = (43.75) * (x - 1914) - 3812.5; /*Using linear equation corresponding to years 2021-2024 to get conversion factor*/
    cFactor = cFactor / 1000; /*Scaling conversion factor*/
    return value2 * cFactor; /*Calculating end year value based on conversion factor*/
}