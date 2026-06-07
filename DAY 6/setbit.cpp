#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;

    cout<<"enter a binary number to count for set bits: ";

    cin>>N;

    int d=N;

    int m;

    int count=0;

    while(d>0)
    {
        m=d%10;

        if(m==1)
        {
            count+=1;
        }
        
        d/=10;
    }

    cout<<"Number of set bits: "<<count<<endl;
    return 0;

}