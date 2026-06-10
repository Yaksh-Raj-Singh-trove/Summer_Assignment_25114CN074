#include <iostream>
using namespace std;

int main()
{
    int N;
    cout<<"enter the number whose factors have to be taken out: ";

    cin>>N;

    cout<<"the factors of "<<N<<" are: "<<endl;

    for(int i=1;i<=N;i++)
    {
        if (N%i==0)
        {   
            cout<<i<<endl;
        }
    }
return 0;
}