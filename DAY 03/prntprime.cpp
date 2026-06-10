#include <iostream>
using namespace std;

int main() 
{

    int N;
    cout<< "enter the number to which prime numbers are to be printed: ";

    cin>>N;
    
    bool isprime=true;
    for(int i=2;i<N;i++)
        {
            for(int j=1;j<i;j++)
                {
                   if(i%j==0 && i!=j && j!=1)
                   {
                     isprime==false;
                     break;

                   }
                   if (isprime==true && j==i-1)
                   {
                    cout<<i<<endl;
                   }
                }
        }        
return 0;
}