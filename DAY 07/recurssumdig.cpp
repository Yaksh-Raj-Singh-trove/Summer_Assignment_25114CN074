#include <iostream>
using namespace std;

int sumdig(int n,int sum=0)
{
if (n==0)
{
    return sum;
}

return sumdig(n/10,sum+n%10);
}        


int main()
{
    cout<<"enter the number whose digits' sum has to be calculated: ";
    int N;
    
    cin>>N;
    
    cout<<"the sum of digits of "<<N<<" is: "<<sumdig(N);

    return 0;

}
