#include<iostream>
using namespace std;

int main()
{
    int N;
    
    cout<<"enter the number of rows you want the pyramid to have: ";
    cin>>N;
    int l=1;
    
    for(int j=N-1;j>=0;j--)       /*for the number of rows*/
    {    
        for(int i=1;i<=j;i++)       /*for the number of gaps in each row*/
        {   
            cout<<" ";

        }

        for(int k=1;k<=l;k++)       /*for the number of stars in each row*/
        {
            cout<<"*";
        }
        
        cout<<endl;
        l+=2;
    }
    
return 0;
}