#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int data[] = {10, 20, 30, 40, 50};
    int n = sizeof(data) / sizeof(data[0]);
    int key = 30;

    int result = linearSearch(data, n, key);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
