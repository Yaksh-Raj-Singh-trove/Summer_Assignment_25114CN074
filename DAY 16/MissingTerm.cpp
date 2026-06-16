#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n (size including missing): ";
    cin >> n;

    int arr[n-1];
    cout << "Enter " << n-1 << " elements (1 to n with one missing): ";
    for (int i = 0; i < n-1; i++) cin >> arr[i];

    int totalSum = n * (n + 1) / 2;   // sum of 1..n
    int arrSum = 0;
    for (int i = 0; i < n-1; i++) arrSum += arr[i];

    cout << "Missing number is: " << totalSum - arrSum << endl;
    return 0;
}
