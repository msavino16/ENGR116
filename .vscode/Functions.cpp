//I pledge my honor that I have abided by the Stevens Honor System
#include <iostream>
using namespace std;
void printGreeting()
{
    cout << "Have a good day!" << endl;
}

void divideNumbers(float x, float y)
{
    if (y==0)
    {
        cout << "Cannot perform division" << endl;
    }
    else
    {
        cout << x/y << endl;
    }
}

int factorial(int num)
{
    int total = 1;
    if (num < 0)
    {
        return 0;
    }
    else
    {
        for (int i = num; i > 0; i--)
        {
            total = total*i;
        }
        return total;
    }
}

void fibonacci(int N)
{

    if(N<1)
    {
        return;
    }

    int a,b;
    a=0;
    b=1;

    cout << a << endl;

    for (int i=1; i<N; i++)
    {
        cout << b << " ";
        int c = a + b;
        b=a;
        a=c;

    }
}

int main()
{
    printGreeting();
    divideNumbers(5.5,3);
    cout << factorial(5) << endl; 
    fibonacci(10);
}