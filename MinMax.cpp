//I pledge my honor that I have abided by the stevens honor system.
#include <iostream>
using namespace std;

int main()
{
    cout << "Pick 10 numbers" << endl;
    int count = 0;
    float total = 0;
    float num;
    float min,max;

    cin >> num;
    total = total + num;
    min = num;
    max = num;
    count++;

    while (count<10)
    {
        cin >> num;
        total = total + num;

        if (num < min)
            min = num;
        
        if (num>max)
            max = num;

        count++;
    }

    cout << "The total is " << total << endl;
    cout << "The min is " << min << endl;
    cout << "The max is " << max << endl;

    cout << "Now, Input as many numbers as you want, but put a -1 to stop." << endl;

    cin >> num;
    total = 0;
    min = 0;
    max = 0;

    if (num != -1)
    {
        total = total + num;
        min = num;
        max = num;
    }

    while (num != -1)
    {
        cin >> num;
        if (num != -1)
        {
            total = total + num;

            if (num < min)
                min = num;
        
            if (num>max)
                max = num;
        }

    }

    cout << "The total is " << total << endl;
    cout << "The min is " << min << endl;
    cout << "The max is " << max << endl;

}