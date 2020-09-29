#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;

int main()
{
    vector <int> num1 = { 1,2 };
    vector <int> num2 = { 3,4 };
    vector <int> num3;
    int i = 0;
    int j = 0;
    while (i < num1.size() || j < num2.size())
    {
        if (i != num1.size() && j != num2.size())
        {
            if (num1[i] < num2[j])
            {
                num3.push_back(num1[i++]);

            }
            else if (num1[i] > num2[j])
            {
                num3.push_back(num2[j++]);
            }
            else
            {
                num3.push_back(num2[j++]);
                num3.push_back(num1[i++]);

            }
        }
        else
            if (i != num1.size() && j == num2.size())
            {
                num3.push_back(num1[i++]);
            }
        else
            if (i == num1.size() && j != num2.size())
            {
                num3.push_back(num2[j++]);
            }
    }
    if (num3.size() % 2 != 0)
        cout << num3[num3.size() / 2];
    else
        cout << double((num3[num3.size() / 2 - 1] + num3[num3.size() / 2])) / 2;


    return 0;
    }