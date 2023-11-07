//I pledge my honor that I have abided by the Stevens Honor System
#include <iostream>
using namespace std;
int factorial(int a)
{
    int total = 1;
    for (int i = a; i>0; i--) 
    total = total*i; 
    return total;
}
int main() 
{ 
    int int1; 
    cout << "Enter a number that is greater than 0" << endl; 
    cin >> int1; 
    if (int1 >= 0) 
    { 
        cout << factorial(int1) << endl;
    } 
    else
    { 
        cout << "failure" << endl;
    }
}
