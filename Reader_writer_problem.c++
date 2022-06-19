#include <iostream>

using namespace std;

// void wait(int rw_mutex)
// {
//     rw_mutex = 1;
//     return;
// }

int main()
{
    int rw_mutex=0;
    int reader=0;
    int mutex=0;

    int choice;

    cout<<"PRESS 1 TO WRITE\nPRESS 2 TO READ"<<endl;
    cin>>choice;

    if(choice==1 && reader==0)
    {
        // wait(rw_mutex);
        cout<<rw_mutex;


    }





}
