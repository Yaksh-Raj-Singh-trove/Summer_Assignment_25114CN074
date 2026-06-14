#include <iostream>
using namespace std;

void linearsearch(int arr[],int target,int n) {
    for(int i=0;i<=(n-1);i++)
    {
        if(arr[i]==target)
        {
            cout<<"The target has been found, its index value is: "<<i;
            break;
        }
        
        if(arr[i]!=target && i==(n-1))
        {
           cout<<"Target not found "<<" -1";
        }
        
        else
        {
            continue;
        }

    }

    
}
int main()
{
    int n;
    cout<<"Enter size of the array: ";

    cin>>n;

    cout<<"Enter "<<n<<" Elements: ";
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int target;
    cout<<"Enter Target: ";
    cin>>target;

linearsearch(arr,target,n);

return 0;
}