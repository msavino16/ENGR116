//I pledge my honor that I have abided by the Stevens Honor System
#include <iostream>
#include <fstream>
using namespace std;

void createContact (string FirstName, string LastName, string Phone, string Email)
{
    ofstream ofStream;
    ofStream.open("Contacts.txt",ios::app);
    ofStream << "First Name: " << FirstName << "\nLast Name: " << LastName << "\nPhone Number: " << Phone << "\nEmail: " << Email << endl;
    ofStream << endl;
    ofStream.close();
}

void DisplayContants()
{
    string line;
    ifstream file;
    file.open("Contacts.txt");
    while (file.good())
    {
        getline(file,line);
        cout << line << endl;
    }
    file.close();
}

void SearchByName (string Name)
{
    string line;
    ifstream file;
    file.open("Contacts.txt");
    while (file.good())
    {
        getline(file,line);
        if(line.find(Name) != string::npos)
        {
            cout << line;
            for (int i = 0; i < 3; i++)
            {
            getline(file,line);
            cout << endl;
            cout << line;
            }
            cout << endl;
            return;
        }
    }
    file.close();
}

int main()
{
    ofstream ofStream;
    ofStream.open("Contacts.txt");
    ofStream.close();
    
    int s = 0;
    cout << "What would you like to do? 1 = Create Contact, 2 = Search Contact By Name, 3 = Show All Contacts, -1 to quit" << endl;
    cin >> s;
    while (s != -1)
    {
        if (s == 1)
        {
            string FN,LN,PN,EM;
            cout << "First Name?" << endl;
            cin >> FN;
            cout << "Last Name?" << endl;
            cin >> LN;
            cout << "Phone Number?" << endl;
            cin >> PN;
            cout << "Email?" << endl;
            cin >> EM;

            createContact(FN,LN,PN,EM);
        }
        else
        {
            if (s == 2)
            {
                string first;
                cout << "First Name?" << endl;
                cin >> first;

                SearchByName(first);

            }
            else
            {
                if (s==3)
                {
                    DisplayContants();
                }
            }
        }
        
        cout << "What would you like to do? 1 = Create Contact, 2 = Search Contact By Name, 3 = Show All Contacts, -1 to quit" << endl;
        cin >> s;
    }
}