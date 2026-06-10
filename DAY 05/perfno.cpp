#include <iostream>
using namespace std;

int main()
{
int sum=0;
cout<<"enter the number to be checked for perfect number: ";

int N;
cin>>N;

for(int i=1;i<N;i++)
{
    if (N%i==0)
    {
        sum+=i;
    }

}
if (sum==N)
{
    cout<<"the number is a perfect number";
}
else
{
    cout<<"the number is not a perfect number";
}
return 0;
}
