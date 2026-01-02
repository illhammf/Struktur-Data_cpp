#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int arr[], int n){
    for (int i = 0; i < n - 1; ++i){
        int minIndex = i; int temp;
        for (int j = i + 1; j < n; ++j){
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        if (minIndex != i) {
            //swap(arr[i], arr[minIndex]);
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
        for (int i = 0; i < n; ++i){
            cout << arr[i] << " ";
        }cout<<endl;
    }
}

int main(){
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    cout <<"========================"<<endl;
    cout <<"Sorted Array: \n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;
}

