#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Masukkan batas data: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan " << n << " data:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;

        for (int k = 0; k < n; ++k) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }

    cout << "Hasil akhir:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
