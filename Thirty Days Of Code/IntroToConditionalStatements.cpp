#include<iostream>
#include"ThirtyDaysOfCode.h"
using namespace std;

namespace ThirtyDaysOfCode
{
    /* Task
        Given an integer, , perform the following conditional actions:
        If n is odd, print Weird
        If n is even and in the inclusive range of  to 2 ,5 print Not Weird
        If n is even and in the inclusive range of  to 6, 20 print Weird
        If n is even and greater than 20, print Not Weird
        Complete the stub code provided in your editor to print whether or not  is weird.
    */

	void IntroToConditionalStatements(int number)
	{
        if (number % 2 == 1)
        {
            cout << "Weird"<<endl;
        }
        else if (number % 2 == 0 && number >= 2 && number <= 5)
        {
            cout << "Not Weird"<<endl;
        }
        else if (number % 2 == 0 && number >= 6 && number <= 20)
        {
            cout << "Weird"<<endl;
        }
        else
        {
            cout << "Not Weird"<<endl;
        }

	}

    void OutputIntroToConditionalStatements()
    {
        /* Test cases */
        IntroToConditionalStatements(3);
        IntroToConditionalStatements(4);
        IntroToConditionalStatements(8);
        IntroToConditionalStatements(80);
    }
}