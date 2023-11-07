//I pledge my honor that I have abided by the Stevens Honor System
#include <iostream>
using namespace std;

main()
{
    cout << "Enter an integer value" << endl;
    int a;
    cin >> a;

    if( a%2 == 0)
    {
        cout << a << " is even" << endl;
    }
    else
    {
        cout << a << " is odd" << endl;
    }
    return 0;
}