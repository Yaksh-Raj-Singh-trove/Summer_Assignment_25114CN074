#include <iostream>
using namespace std;

int main()
{
    int a=1;
    int b=1;
    int c=2;

    cout<<"enter the upper range of the fibonacci series: ";
    
    int i;
    cin>>i;

    cout<<"the fibonacci series is as follows: "<<endl;
    cout<<a<<endl;
    cout<<b<<endl;

    
while (c<=i)
{   a=b;
    cout<<c<<endl;
    b=c;
    c=a+b;
        
}
return 0;
}

/* this program can only work 
upto 32 bit integer limit of 2,147,483,647 */