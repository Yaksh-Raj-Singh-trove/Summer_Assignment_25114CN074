#include <iostream>
using namespace std;

int main()
{
int N,M;
cout<<"enter the numbers whose lcm is to be calculated: "<<endl;
cout<<"Number 1: "<<endl;
cin>>N;

cout<<"Number 2: "<<endl;
cin>>M;

int i=2;

int lcm=1;

    while (M>1 || N>1)
    {   if (M%i==0 && N%i==0)

        {
            M/=i;
            N/=i;
            lcm*=i;
            
        }

        if (M%i==0 && N%i!=0)
        {
            M/=i;
            lcm*=i;
        }
        if (M%i!=0 && N%i==0)
        {
            N/=i;
            lcm*=i;
        }
        if (M%i!=0 && N%i!=0)
        {i+=1;
        
        }
    }
cout<<"the LCM is: "<<lcm<<endl;

    





return 0;
}
