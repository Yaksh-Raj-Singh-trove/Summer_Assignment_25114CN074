#include <iostream>
using namespace std;
#include <cmath>

int main()
{   int N;
    cout<<"enter the number to be checked for armstrong validity: ";

    cin>>N;

    int arm=0;
    int d=N;

    int comp=N;
    int nodig=0;

    while (d>0)
    {   d/=10;
        nodig+=1;
    }
    while (N>0)
    {   arm+=(pow(N%10,nodig));
        
        N/=10;
    }
if (arm==comp)
{
    cout<<"the number is an armstrong number";
}
else
{
    cout<<"the number is not an armstrong number";
}


return 0;
}