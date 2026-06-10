#include <iostream>
using namespace std;

void fib(int n, int a, int b)
{   
    if(b>n)
    {
        return;
    }
    
    cout<<b<<endl;
    
    return fib(n,b,a+b);
 
}

int main()
{
    cout<<"enter the upper end of the fibonacci series: ";
    
    int N;
    
    cin>>N;
    
    
    cout<<"the fibonacci series is: ";
    cout<<1;
    fib(N,0,1);

    return 0;
}