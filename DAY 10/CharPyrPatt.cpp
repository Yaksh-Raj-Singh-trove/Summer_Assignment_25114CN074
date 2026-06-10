#include <iostream>
using namespace std;

int main()
{
    cout<<"enter the number of rows(maximum 26): ";
    
    int N;
    cin>>N;

    for(int row=1;row<=N;row++)
    {   
    
        
        for(int space=1;space<=N-row;space++)
        {
            cout<<" ";
        }
    
        for(int number=65;number<=(65+row-1);number++)
        {
            cout<<(char)number;
        }    

        for(int number=(65+row-2);number>=65;number--)
        {
            cout<<(char)number;
        }

        cout<<endl;
    }

return 0;
}