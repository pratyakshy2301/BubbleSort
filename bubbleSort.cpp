#include<iostream>
using namespace std;

void bubbleSort(int *arr, int n) {
    //BASE case
    if(n == 1 || n ==0) {
        return ;
    }

    // 1st CASE
    for(int i=0; i<n-1; i++) {
        if(arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
        }
    }

    return bubbleSort(arr, n-1);
}

int main() {
    int arr[] = {2,5,1,6,9};
    int n = 5;

    bubbleSort(arr, n-1);

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}