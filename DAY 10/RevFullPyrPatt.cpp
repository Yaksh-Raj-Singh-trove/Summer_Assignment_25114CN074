#include <iostream>
using namespace std;

int main()
{
    int N;
    cout<<"enter number of rows you want to have for the reverse pyramid: ";

    cin>>N;

    for(int row=0;row<N;row++)
    
    {   
        for(int space=0;space<row;space++)
        {
            cout<<" ";
        }

        for(int star=1;star<=(2*N-1)-(row*2);star++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

return 0;
}