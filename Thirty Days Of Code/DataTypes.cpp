#include <iostream>
#include <iomanip>
#include <limits>
#include"ThirtyDaysOfCode.h"
using namespace std;

namespace ThirtyDaysOfCode
{
    void DataTypes()
    {
        int i = 4;
        double d = 4.0;
        string s = "HackerRank ";

        // Declare second integer, double, and String variables.
        int sum;
        double n;
        string sentence;

        // Read and save an integer, double, and String to your variables.
        // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
        cin >> sum;
        cin >> n;
        cin >> sentence;
        //getline(cin >> ws, sentence);

        // Print the sum of both integer variables on a new line.
        cout << i + sum << endl;

        // Print the sum of the double variables on a new line.
        cout << fixed << setprecision(1) << d + n << endl;

        // Concatenate and print the String variables on a new line
        // The 's' variable above should be printed first.
        cout << s + sentence;
    }

    void OutputDataTypes()
    {

    }

    
}