#include<iostream>
using namespace std;

int main()
{
int sum=0;

for(int i=1;i<=2;i++)
{
    for(int j=1;j<=5;j++)                 /*j to print 5 stars, will work for last line of 5 stars too00*/
    {
        cout<<"*";                        
        sum++;
        if(i<2)

        {
            if (sum==5)                   /*the sum ensures that the stars in a line end and then seperate logic for the three stars starts*/
        {   
            cout<<endl;                   /*this causes the first two stars to be printed in next line*/
            
            for(int k=1;k<=3;k++)         /*running loop for the two star system continuously*/

            {
                cout<<"*"<<"   "<<'*';
                cout<<endl;                /*endl to move to next line after two stars*/

            }
        }
        }
    }

}
return 0;
}