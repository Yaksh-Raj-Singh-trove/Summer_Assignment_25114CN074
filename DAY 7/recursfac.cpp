#include <iostream>
using namespace std;

int fac(int n,int fact=1)
{

    if (n==0) 
    {
        return fact;
    }

    return fac(n-1,fact*n);
}

int main()
{
    cout<<"enter the number whose factorial has to be calculated: ";

    int N;
    
    cin>> N;
    
    cout<<"the factorial of "<<N<<" is: "<<fac(N);

    return 0;
}