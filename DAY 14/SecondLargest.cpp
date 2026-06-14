#include<iostream>
#include<algorithm>
using namespace std;

int secondlargest(int array[],int N){
    
    sort(array,array+N,greater<int>());

    return(array,N);

}


int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    
    int arr[n];

    cout<<"Enter "<<n<<" Elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


secondlargest(arr,n);

cout<<"The Second largest element of the given array is: "<<arr[1];
return 0;
}