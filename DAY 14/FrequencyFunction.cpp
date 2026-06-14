#include <iostream>
using namespace std;

void Frequency(int arr[],int frequency,int n,int number){
    for(int i=0;i<n;i++)
    {
        if(arr[i]==number)
        {
            frequency++;
        }

    }

    cout<<"The Frequency of the number "<<number<<" is: "<<frequency;
    
}

int main()
{
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int N;
    cout<<"Enter the number to be checked for frequency: ";
    cin>>N;


    int freq=0;
    Frequency(arr,freq,n,N);

return 0;
}