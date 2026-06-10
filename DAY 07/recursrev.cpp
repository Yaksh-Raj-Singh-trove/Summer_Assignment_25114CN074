#include<iostream>
using namespace std;

int rev(int n,int revnum=0)
{
    if (n==0) 
    {
        return revnum;
    }

    return rev(n/10,n%10+10*revnum);

}

int main()
{   

      
    cout<<"enter the number which has to be reversed: ";

    int N;
    cin>>N;

    cout<< "The reverse of the number "<<N<<" is "<< rev(N);

    return 0;
}
