#include<iostream>
using namespace std;

int main()
{
 int N;
 cout<<"enter the number to be checked for strong number: ";
 
 cin>>N;
 
 int d=N;
 int e;

 int sum=0;
 int fact=1;

 while (d>0)
 {
    fact=1;
    e=d%10;
    d/=10;
    if (e==0)
    {
        sum+=1;
        continue;
    }
    for(int j=1;j<=e;j++)
    {
        fact=fact*j;
        
    }
    sum+=fact;

 }
if (sum==N)
{
    cout<<"the given number is a strong number ";
}
else
{
    cout<<"the number is not a strong number ";
}
 

return 0;
}
    