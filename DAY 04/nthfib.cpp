#include <iostream>
using namespace std;

int main()
{
    int i=3;
    cout<<"enter the order of the fibonacci serie's last term you want to print: ";

    int  N;

    cin>>N;
    int a=1;
    int b=1;

    int c;
    
    if (N>0 && N<3)
    {
        cout<<"the nth term's value is: "<<1;
        exit(0);
    }
    else
    
    {
    while (i<=N)
    {
        
        c=a+b;
        a=b;
        b=c;
        
        i+=1;





    }
}
cout<<"the "<<"nth"<< " term is: "<<c;
return 0;
}