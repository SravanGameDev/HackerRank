#include"ThirtyDaysOfCode.h"
#include<iostream>
using namespace std;

/* Task
    Write a Person class with an instance variable, age, and a constructor that takes an integer, initialAge, as a parameter. 
    The constructor must assign initialAge to age after confirming the argument passed as initialAge is not negative;
    if a negative argument is passed as initialAge, the constructor should set age to 0 and 
    print Age is not valid, setting age to 0.. In addition, you must write the following instance methods:

    1. yearPasses() should increase the age instance variable by 1.
    2. amIOld() should perform the following conditional actions:
      -If age<13, print You are young..
      -If age >= 13 and age < 18, print You are a teenager..
      -Otherwise, print You are old..
    To help you learn by example and complete this challenge, much of the code is provided for you, 
    but you'll be writing everything in the future. The code that creates each instance of your Person class is in the main method.
    Don't worry if you don't understand it all quite yet!

*/

namespace ThirtyDaysOfCode
{
    class Person
    {
     public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge)
    {
        // Add some more code to run some checks on initialAge
        if (initialAge < 0)
        {
            age = 0;
            cout << "Age is not valid, setting age to 0." << endl;
        }
        else
        {
            age = initialAge;
        }
    }

    void Person::amIOld()
    {
        // Do some computations in here and print out the correct statement to the console 
        if (age < 13)
            cout << "You are young.";
        else if (age >= 13 && age < 18)
            cout << "You are a teenager.";
        else
            cout << "You are old.";

        cout << endl;
    }

    void Person::yearPasses()
    {
        // Increment the age of the person in here
        age++;
    }

    void OutputClassVsInstance() {
        int t;
        int age;
        cin >> t;
        for (int i = 0; i < t; i++) {
            cin >> age;
            Person p(age);
            p.amIOld();
            for (int j = 0; j < 3; j++) {
                p.yearPasses();
            }
            p.amIOld();

            cout << '\n';
        }
    }

}