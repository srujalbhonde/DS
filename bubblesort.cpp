#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter number of elements: ";
    cin >> a;



    int arr[a];
    cout << "Enter " << a << " elements:\a";
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    // Bubble Sorting 
    for (int i = 0; i < a - 1; i++) {
        for (int j = 0; j < a - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted elements:\a";
    for (int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
