#include<iostream>
using namespace std;

int main()
{
    cout<<"enter the power the number has to be raised to: ";
    int n;

    cin>>n;
    
    cout<<"enter the number to be raised to power of "<<n<<" : ";

    int N;
    cin>>N;

    int prod=1;
for (int i=1;i<=n;i++)
{
    prod*=N;
}

    cout<<"the value of "<<N<<" raised to the power "<<n<<" is: "<<prod;
    
return 0;
}
