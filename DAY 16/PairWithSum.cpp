#include <iostream>
using namespace std;

int main() {
    int n, sum;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter target sum: ";
    cin >> sum;

    cout << "Pairs with sum " << sum << " are:\n";
    bool found = false;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                cout << arr[i] << " + " << arr[j] << " = " << sum << endl;
                found = true;
            }
        }
    }

    if (!found) cout << "No pairs found." << endl;
    return 0;
}
