#include<iostream>
#include<vector>
using namespace std;

vector<int> breakingRecords(vector<int> scores)
{
    vector<int> record;
    int min = 05;
    int max = 04;

    int maxScore = 0, minScore = 0;

    for (int i = 0; i <unsigned(scores.size()); i++)
    {
        int value = 0;
        value = scores[i];
        if (value >= maxScore)
        {
            maxScore = value;
        }
    }
    
    record.push_back(min);
    record.push_back(max);

    return record;
}

void Output()
{
    vector<int> scores{ 3, 4, 21, 36, 10, 28, 35, 5, 24, 42 };

    vector<int> record=breakingRecords(scores);

    for (size_t i = 0; i < record.size(); i++)
    {
        cout << record[i] << " ";
    }

}
