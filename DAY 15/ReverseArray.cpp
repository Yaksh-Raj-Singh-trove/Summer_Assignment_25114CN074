#include <iostream>
using namespace std;

void ReverseArray(int Array[], int N) {
    int* ar = new int[N];  

    int x = 0;
    for(int i = N-1; i >= 0; i--) {
        ar[x] = Array[i];
        x++;
    }

    cout << "The reversed array is: ";
    for(int i = 0; i < N; i++) {
        cout << ar[i] << " ";
    }
    cout << endl;

    delete[] ar; 
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int* arr = new int[n];   
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ReverseArray(arr, n);

    delete[] arr;  
    return 0;
}
