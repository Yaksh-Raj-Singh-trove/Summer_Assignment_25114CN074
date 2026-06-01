#include <iostream>
using namespace std;
#include <cmath>

int main()
{   int lst;
    cout<<"enter the maximum number to  check for armstrong validity: ";

    cin>>lst;

    int arm;
    int d;
    int e;

    int nodig;

    cout<<"the armstrong numbers are: "<<endl;

    for(int i=1;i<=lst;i++)
    {d=i;
    e=d;
    nodig=0;
    arm=0;
    while (d>0)
    {   d/=10;
        nodig+=1;
    }
    while (e>0)
    {   arm+=(pow(e%10,nodig));
        
        e/=10;
    }
    if (arm==i)
    {
    cout<<arm<<endl;
    }
    else
    {
        continue;
    }

}
return 0;
}