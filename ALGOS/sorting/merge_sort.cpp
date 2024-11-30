//
// Created by Arvinderjeet singh on 10/18/2024.
//

#include "iostream"
#include "vector"

using namespace std;

int counter_comparison = 0;
int counter_swap = 0;

void merge_after_sort(int arr[], int low, int high, int mid) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low; i<= high; ++i){
        arr[i] = temp[i-low];
    }
}

void merge_sort(int arr[], int low, int high) {
    if (low == high) return;
    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge_after_sort(arr, low, high, mid);
}

int main() {
    int arr[10] = {78, 33, 65, 922, 34, 111, 2, 76, 35, 0};
    int n = 10;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    merge_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "number of comparisons: " << counter_comparison << endl;
    cout << "number of swaps: " << counter_swap << endl;
    return 0;
}