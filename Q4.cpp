#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter number to search: ";
    cin >> key;

    bool found = false;
    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = true;
            pos = i;
            break;
        }
    }

    if (found)
        cout << "Found at position: " << pos << endl;
    else
        cout << "Not found" << endl;

    return 0;
}
