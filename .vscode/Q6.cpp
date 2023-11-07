//I pledge my honor that I have abided by the Stevens Honor System
#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout << a << " + " << b << " = " << a+b << endl;
}

void subtract(int a, int b)
{
    cout << a << " - " << b << " = " << a-b << endl;
}

void multiply(int a, int b)
{
    cout << a << " * " << b << " = " << a*b << endl;
}

void divide(int a, int b)
{
    cout << a << " / " << b << " = " << a/b << endl;
}


int main()
{
    int int1, int2;
    cout << "input 2 integer values one after another" << endl;
    cin >> int1 >> int2;
    add(int1,int2);
    subtract(int1,int2);
    multiply(int1,int2);
    divide(int1,int2);

}