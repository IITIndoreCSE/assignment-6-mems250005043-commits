#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    char arr[n];
    srand(time(0));
    for (int i = 0; i < n; i++) {
        arr[i] = 'a' + rand() % 26;
    }

    cout << "Random letters: [";
    for (int i = 0; i < n; i++) {
        cout << "'" << arr[i] << "'";
        if (i != n - 1) cout << ", ";
    }
    cout << "]" << endl;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                char temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Sorted letters: [";
    for (int i = 0; i < n; i++) {
        cout << "'" << arr[i] << "'";
        if (i != n - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
