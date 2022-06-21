#include <iostream>

using namespace std;

int wait(int x)
{
    x = 1;
    return x;
}


int signal(int x)
{
    x =0;
    return x;
}


int main()
{
    int rw_mutex=0;
    int reader=0;
    int mutex=0;
    int reader_count=0;

    int choice;

    ret:
    cout<<"PRESS 1 TO WRITE\nPRESS 2 TO READ\nPRESS 3 TO REMOVE WRITER \nPRESS 4 TO REMOVE READERS"<<endl;
    cin>>choice;


    //WRITERS----------------------------------------------------------------------------
    if(choice==1 && reader==0 && rw_mutex==0)
    {
        rw_mutex=wait(rw_mutex);
        mutex=rw_mutex;
        cout<<"Writing"<<endl;


        goto ret;


    }
    else
    {
        cout<<"A reader or writer is doing his job!"<<endl;
    }

    //READERS----------------------------------------------------------------------------
    if(choice==2 && mutex==0)
    {
        mutex=wait(mutex);
        reader_count++;

        if(reader_count==1)
        {
            rw_mutex=wait(rw_mutex);
        }

        cout<<"A reader "<<reader_count<<" is reading!"<<endl;
    
        mutex=signal(mutex);

        goto ret;

     



    }
    else
    {
        cout<<"Writer is doing his job!"<<endl;
    }


   if(choice==3 && mutex==0)
    {

    rw_mutex=signal(rw_mutex);
    mutex=rw_mutex;
    }

    if(choice==4 && mutex==0)
    {

    rw_mutex=signal(rw_mutex);
    mutex=rw_mutex;
    }


}
