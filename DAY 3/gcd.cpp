#include <iostream>
using namespace std;

int main()
{   cout<< "enter numbers whose gcd are to  be caluclated: "<<endl;
    cout<<"Number 1: ";
    int N;
    cin>>N;

    cout<<"Number 2: ";
    int M;
    cin>>M;

    int gcd;

    if(N>M)
    {   for(int i=1;i<=M;i++)
        {if (N%i==0 && M%i==0)
            {
                gcd=i;
            }
        }
    }
    else
    {
        for(int i=1;i<=N;i++)
        {
            if(N%i==0 && M%i==0)
            {
                gcd=i;
            }
        }
    }

cout<<"the gcd of "<<M <<" and "<<N<<" is "<<gcd;

return 0;
}