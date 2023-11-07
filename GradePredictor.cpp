//I pledge my honor that i have abided by the stevens honor system
#include <iostream>
using namespace std;

int main()
{
    float avghw = 0, avgtst = 0, avgexm = 0, weighthw, weighttst, weightexm, hwcount, tstcount, exmcount, gradein;

    //Code for avg homework
    cout << "What is the weight of your hw in percent?" << endl;

    cin >> weighthw;
    weighthw = weighthw/100;

    cout << "How many homeworks do you have?" << endl;
    cin >> hwcount;

    cout << "Please type the grades in, clicking enter between each one." << endl;

    for (int i = 1; i <= hwcount; i++)
    {
        cout << "Grade " << i << endl;
        cin >> gradein;
        avghw +=gradein;
    }

    avghw = avghw/hwcount;

    //code for avg test
    cout << "What is the weight of your midterms in percent?" << endl;

    cin >> weighttst;
    weighttst = weighttst/100;

    cout << "How many midterms do you have?" << endl;
    cin >> tstcount;

    cout << "Please type the grades in, clicking enter between each one." << endl;

    for (int i = 1; i <= tstcount; i++)
    {
        cout << "Grade " << i << endl;
        cin >> gradein;
        avgtst +=gradein;
    }

    avgtst = avgtst/tstcount;

    //code for avg exams

    cout << "What is the weight of your final in percent?" << endl;

    cin >> weightexm;
    weightexm = weightexm/100;

    cout << "How many finals do you have?" << endl;
    cin >> exmcount;

    cout << "Please type the grades in, clicking enter between each one." << endl;

    for (int i = 1; i <= exmcount; i++)
    {
        cout << "Grade " << i << endl;
        cin >> gradein;
        avgexm +=gradein;
    }

    avgexm = avgexm/exmcount;

    float finalgrade;

    finalgrade = avghw*weighthw + avgtst*weighttst + avgexm*weightexm;

    string letter;

    if (finalgrade >= 90)
    {
        letter = "A";
    }
    else{
        if (finalgrade>=80)
        {
            letter = "B";
        }
        else{
            if (finalgrade >= 70)
            {
                letter = "C";
            }
            else{
                letter = "D";
            }
        }
    }

    cout << "Your final grade is " << finalgrade << " (" << letter << ")"<< endl;
    
}