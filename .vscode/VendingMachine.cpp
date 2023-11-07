//I pledge my honor that I have abided by the Stevens Honor System
#include <iostream>
using namespace std;

class vendingMachine
{
    public:
    
    int cokePrice = 2;
    int waterPrice = 1;
    int spritePrice = 2;
    int pepsiPrice = 2;
    int coke;
    int water;
    int sprite;
    int pepsi;

        vendingMachine(int c, int w, int s, int p)
        {
            coke = c;
            water = w;
            sprite = s;
            pepsi = p;
        }

        vendingMachine()
        {
            coke = 5;
            water = 5;
            sprite = 5;
            pepsi = 5;
        }

        int change(string item, int bill)
        {
            float change;
            if (item == "water")
            {
                change = bill - 1;
            }
            else
            {
                change = bill - 2;
            }
            return change;
        }

        void buy(string item)
        {
            if (item == "coke")
            {
                coke--;
            }
            else if (item == "water")
            {
                water--;
            }
            else if (item == "sprite")
            {
                sprite--;
            }
            else if (item == "pepsi")
            {
                pepsi--;
            }
        }

        void admin(string item)
        {
            if (item == "coke")
            {
                coke=5;
            }
            else if (item == "water")
            {
                water=5;
            }
            else if (item == "sprite")
            {
                sprite=5;
            }
            else if (item == "pepsi")
            {
                pepsi=5;
            }
        }

        int getWater()
        {
            return water;
        }

        int getCoke()
        {
            return coke;
        }

        int getSprite()
        {
            return sprite;
        }

        int getPepsi()
        {
            return pepsi;
        }
};

int main()
{
    cout << "Welcome to the vending machine! What would you like? 1 = Water, 2 for Coke, 3 for Pepsi, 4 for Sprite, -1 to quit." << endl;
    int input;
    cin >> input;
    float bill;
    vendingMachine VM = vendingMachine();
    while (input != -1)
    {
        if (input == 1)
        {
            if(VM.getWater() == 0)
            {
                cout << "There is no more water" << endl;
            }
            else
            {
                cout << "Enter a bill amount" << endl;                                                                                        
                cin >> bill;
                if(bill >=1)
                {
                    cout << "Sucess!" << endl;
                    cout << "Your change is $" << VM.change("water", bill) << endl;
                    VM.buy("water");
                }
                else
                {
                    cout << "Not enough funds" << endl;
                }    
            }
        }
        else if (input == 2)
        {
            if(VM.getCoke() == 0)
            {
                cout << "There is no more coke" << endl;
            }
            else
            {
                cout << "Enter a bill amount" << endl;                                                                                        
                cin >> bill;
                if(bill >=2)
                {   
                    cout << "Sucess!" << endl;
                    cout << "Your change is $" << VM.change("coke", bill) << endl;
                    VM.buy("coke");
                }
                else
                {
                    cout << "Not enough funds" << endl;
                }
            }
        }
        else if (input == 3)
        {
            if(VM.getPepsi() == 0)
            {
                cout << "There is no more pepsi" << endl;
            }
            else
            {
                cout << "Enter a bill amount" << endl;                                                                                        
                cin >> bill;
                if(bill >=2)
                {   
                    cout << "Sucess!" << endl;
                    cout << "Your change is $" << VM.change("pepsi", bill) << endl;
                    VM.buy("pepsi");
                }
                else
                {
                    cout << "Not enough funds" << endl;
                }
            }
        }
        else if (input == 4)
        {
            if(VM.getSprite() == 0)
            {
                cout << "There is no more Sprite" << endl;
            }
            else
            {
                cout << "Enter a bill amount" << endl;                                                                                        
                cin >> bill;
                if(bill >=2)
                {
                    cout << "Sucess!" << endl;
                    cout << "Your change is $" << VM.change("sprite", bill) << endl;
                    VM.buy("sprite");
                }
                else
                {
                    cout << "Not enough funds" << endl;
                }
            }
        }
    cout << "What would you like? 1 = Water, 2 for Coke, 3 for Pepsi, 4 for Sprite, -1 to quit." << endl;
    cin >> input;
    }

}