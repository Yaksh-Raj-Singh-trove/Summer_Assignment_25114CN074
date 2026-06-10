#include<iostream>
using namespace std;

int main()
{
    
    for(int row=1;row<=5;row++)
    {
        for(int space=1;space<=(5-row);space++)
        {
            cout<<" ";
        }
        
        int number=1;
            
            for(number=1;number<=row;number++)
            {
                cout<<number;
            }
            
            for(number=row-1;number>=1;number--)
            {
                cout<<number;
            }
            

            cout<<endl;
        }


return 0;
}

