#include <iostream>
#include"ThirtyDaysOfCode.h"
using namespace std;

namespace ThirtyDaysOfCode
{
    void Operators(double meal_cost, int tip_percent, int tax_percent)
    {
        double total_cost;
        double tip;
        double tax;

        tip = (tip_percent*meal_cost) / 100;
        cout << "Tip: " << tip << endl;

        tax =(tax_percent * meal_cost) / 100;
        cout << "Tax: " << tax << endl;

        total_cost = meal_cost + tip + tax;

        cout << round(total_cost)<<endl;
    }

    void OutputOperators()
    {
        /* Test cases */
        Operators(10.25, 17, 5);
        Operators(12.00, 20, 8);
    }
}