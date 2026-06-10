#include <iostream>
using namespace std;

int main()
{
    cout<<"print the term whose factor has to be seen(larger than 3): "<<endl;

    int N;
    cin>>N;

    int lrgfac;

    bool isprime=true;

    for(int  i=2;i<=(N/2);i++)
    {
        if (N%i==0)
        {
            for(int j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    isprime=false;
                    break;
                }
                
                else
                {
                    isprime=true;
                }
            }
            
            if(isprime==true)
            {
                lrgfac=i;
            }
        }
    }
cout<<"the larget prime factor of "<<N<<"is: "<<lrgfac;
return 0;
}

