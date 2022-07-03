#include <iostream>
using namespace std;

// int Process_need(int *BT, int total_BT)
// {
//     for (int j = 0; j < total_BT; j++)
//     {
//         if (BT[j] != 0)
//         {
//             return j;
//             break;
//         }
//     }
// }

int main()
{
    int process;
    int BT[process];
    int Process_need_to_execute;
    int total_BT = 0;
    int quantum;
    int count = 1;

    cout << "enter no of process: " << endl;
    cin >> process;

    cout << endl;

    cout << "enter no of quantum: " << endl;
    cin >> quantum;
    cout << endl;

    for (int i = 0; i < process; i++)
    {
        cout << "Enter Burst time for process: " << i << endl;
        cin >> BT[i];
        total_BT = total_BT + BT[i];
    }
    int Garntt_chart[total_BT];

    // Process_need_to_execute = Process_need(BT, total_BT);

    for (int j = 0; j < process; j++)
    {

        for (int l = 0; l < j % process; l++)
        {
            if (BT[l] != 0)
            {

                BT[l] = BT[l] - quantum;

                if(BT[l]==0)
                {

                Garntt_chart[count] = l;
                count++;
                }
            }

          
        }
    }



    for (int i = 0; i < process; i++)
    {
        cout << "P " << Garntt_chart[i] << "--";
    }
}