//I pledge my honor that I have abided by the Stevens Honor System
#include <iostream>
using namespace std;

class ATM
{
    public:

    //varibles for accounts
    float bal;
    int pin;

    //default constructor
    ATM()
    {
        bal = 1000;
        pin = 0000;
    }

    //Constuctor used to initialize accounts
    ATM(float b, int p)
    {
        bal = b;
        pin = p;
    }

    //Take out a morgage
    void morgage()
    {
        cout << "A morgage is 600k, are you sure? 1 for yes, 2 for 2" << endl;
        int r;
        cin >> r;
        if (r == 1)
        {
            bal = bal + 600000;
        }
    }

    void rob()
    {
        int r;
        if (bal < 500)
        {
            cout << "Not enough funds for robbery" << endl;
            return;
        }

        cout << "Are you sure? 1 for yes, 2 for no." << endl;
        cin >> r;
        if (r == 1)

        {
            //pick a number 1-100 and if > 95, robbery is sucessful.
            if ((rand() % 100 + 1)>95)
            {
                float random = (rand() % 100 + 1)*1000;
                bal = bal + random;
                cout << "Sucessful robbery! You got $" << random << endl;
                return;
            }
            else
            {
                cout << "The cops got you! You lost $500" << endl;
                bal = bal - 500;
                return;
            }
        }
    }

    //deposit money
    void deposit()
    {
        int s;
        cout << "1 for cash (less than $100), 2 for check" << endl;
        cin >> s;

        float amount;
        cout << "How much would you like to deposit?" << endl;
        cin >> amount;

        if (s == 1)
        {
            if (amount>100 || amount <=0)
            {
                cout << "Invalid amount" << endl;
                return;
            }
            else
            {
                bal = bal + amount;
                cout << "Success!" << endl;;
            }
        }
        if (s == 2)
        {
            if (amount <=0)
            {
                cout << "Invalid Amount" << endl;
                return;
            }
            else
            {
                bal = bal + amount;
                cout << "Success!" << endl;
            }
        }
        else
        {
            cout << "Invalid input" << endl;
            return;
        }
    }

    // Withdraw Money
    void withdraw()
    {
        int amount;

        cout << "Your balance is $" << bal << "\nHow much would you like to withdraw? (Has to be a multiple of 20)" << endl;
        cin >> amount;

        if (amount > bal)
        {
            cout << "You dont have enough funds" << endl;
            return;
        }
        else if(amount % 20 == 0)
        {
            bal = bal - amount;
            cout << "Sucess! Your new balance is $" << bal << endl;
            return;   
        }
        else
        {
            cout << "Invalid amount" << endl;
            return;
        }
    }

    // Set balance of account
    void setBal(float b)
    {
        bal = b;
    }

    // Set Pin of account
    void setPin(int p)
    {
        pin = p;
    }

    //Close account
    void close()
    {
        bal = 0;
        pin = 0;

        cout << "The account is closed" << endl;
    }

    void checkBal()
    {
        cout << "Your balance is $" << bal << endl;
    }

    int getPin()
    {
        return pin;
    }

};

int main()
{
    //Initilize Bank list that is unique to each pins 0000-9999
    ATM bank[10000];

    cout << "Please enter a pin for a new account" << endl;
    int p;
    cin >> p;

    cout << "Please enter a initial deposit amount" << endl;
    float b;
    cin >> b;

    ATM initial = ATM(b,p);

    cout << "Congratulations on making a new account and welcome to the Bank!" << endl;
    bank[p] = initial;

    cout << "Welcome to the bank! Please enter what you would like to do." << endl;
    cout << "1 = Make new bank account, 2 = Check Balance, 3 = Deposit, 4 = Withdraw, 6 = Take out a morgage, 7 = Rob the Bank, -1 = Stop" << endl;

    int in;
    cin >> in;

    // Start while loop for main menu
    while(in != -1)
    {

        if (in == 1)
        {
            cout << "Please enter a pin for a new account" << endl;
            cin >> p;
            cout << "Please enter a initial deposit amount" << endl;
            cin >> b;
            bank[p] = ATM(p,b);
        }
        else 
        if (in == 2)
        {
            cout << "Please enter a pin" << endl;
            cin >> p;
            bank[p].checkBal();
        }
        else 
        if(in == 3)
        {
            cout << "Please enter a pin" << endl;
            cin >> p;
            bank[p].deposit();
        }
        else 
        if(in == 4)
        {
            cout << "Please enter a pin" << endl;
            cin >> p;
            bank[p].withdraw();
        }
        else 
        if(in == 5)
        {
            cout << "Please enter a pin" << endl;
            cin >> p;
            bank[p].close();
        }
        else 
        if(in == 6)
        {
            cout << "Please enter a pin" << endl;
            cin >> p;
            bank[p].morgage();
        }
        else 
        if(in == 7)
        {
            cout << "Please enter a pin" << endl;
            cin >> p;
            bank[p].rob();
        }

        cout << "What would you like to do? 1 = Make new bank account, 2 = Check Balance, 3 = Deposit, 4 = Withdraw, 5 = Close an account, 6 = Take out a morgage, 7 = Rob the bank, -1 = Stop" << endl;
        cin >> in;

    }

}