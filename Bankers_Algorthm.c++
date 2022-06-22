#include <iostream>
using namespace std;

int main()
{
    int process;
    int alloction[process];
    int Need[process][3];
    int Avalibe[process][3];

    // Enter process
    cout << "Enter No of Process" << endl;
    cin >> process;

    // Entering Alloction
    cout << "------ENTER ALLOCATION------" << endl;
    for (int i = 0; i < process; i++)
    {

        cout << "Enter Alloction At " << i << endl;
        cin >> alloction[i];
    }
    cout << "------ENTER NEED------" << endl;
    // enetring need
    for (int i = 0; i < process; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter Need At " << i << j << endl;
            cin >> Need[i][j];
        }
        cout << "\n"
             << endl;
    }
    // enetring need
    cout << "------ENTER ABALIBILITY------" << endl;
    for (int i = 0; i < process; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter Avalibe At " << i << j << endl;
            cin >> Avalibe[i][j];
        }
        cout << "\n"
             << endl;
    }
}