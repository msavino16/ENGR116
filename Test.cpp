//I pledge my honor that i have abided by the stevens honor system
#include <iostream>
using namespace std;

int main()
{
    int int1, total = 1;
    cout << "Enter a number that is greater than 0" << endl;
    cin >> int1;
    if (int1 >= 0)
    {
        for (int i = int1; i>0; i--)
        total = total*i;
    }
    else{
        cout << "failure" << endl;
    }
    cout << int1 << "! = " << total; 
}