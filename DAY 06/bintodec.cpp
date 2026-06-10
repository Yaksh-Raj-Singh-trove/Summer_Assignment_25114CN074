#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;
    
    cout<<"enter a decimal number(only digits before decimal): ";
    
    
    cin>>N;

    int d=N;
    int dec=0;

    int m;

    int pwr=0;

    while(d>0)
    {
        m=d%10;
        
        dec+=m*pow(2,pwr);

        d/=10;
        pwr+=1;

    }

    cout<<"the decimal conversion of binary"<<N<<"is: "<<dec;
    return 0;
}