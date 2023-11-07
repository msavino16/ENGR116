//I pledge my honor that I have abided by the Stevens Honor System
#include <iostream>
using namespace std;

class snackbox
{
    public:
    void chips()
    {
        cout << "Chips have been dispensed" << endl;
    }

    void cookies()
    {
        cout << "Cookies have been dispensed" << endl;
    }

    void coke()
    {
        cout << "Coke have been dispensed" << endl;
    }

    void water()
    {
        cout << "Water have been dispensed" << endl;
    }
};

int main() 
{
    snackbox machine = snackbox();

    cout << "Enter a value for what snack you want, 1 = chips, 2 = cookies, 3 = coke, 4 = water, -1 = quit" << endl;
    int s;
    cin >> s;

    while (s != -1)
    {
        switch(s)
        {
            case 1: 
                machine.chips();
                break;
            case 2: 
                machine.cookies();
                break;
            case 3: 
                machine.coke();
                break;
            case 4: 
                machine.water();
                break;
        }

        cout << "Enter a value for what snack you want, 1 = chips, 2 = cookies, 3 = coke, 4 = water, -1 = quit" << endl;
        cin >> s;
    }
}
