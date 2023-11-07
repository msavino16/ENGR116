//I pledge my honor that i have abided by the stevens honor system
#include <iostream>
using namespace std;

int main()
{
    cout << "Fill in 3x3 matrix A, type in values like your reading a book" << endl;

    int A[3][3];
    int B[3][3];

    //Entering/Printing values for A

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "Matrix A =" << endl;

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Fill in 3x3 matrix B, type in values like your reading a book" << endl;

    //Entering/Printing values for B

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cin >> B[i][j];
        }
    }

    cout << "Matrix B =" << endl;

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    int C[3][3];

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Matrix C = A+B =" << endl;

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    int D[3][3];

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            D[i][j] = A[i][j] - B[i][j];
        }
    }

    cout << "Matrix D = A-B =" << endl;

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout << D[i][j] << " ";
        }
        cout << endl;
    }
}