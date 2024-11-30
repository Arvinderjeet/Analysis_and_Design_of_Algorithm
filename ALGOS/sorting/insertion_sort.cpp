//
// Created by Arvinderjeet singh on 10/10/2024.
//

#include "iostream"

using namespace std;

int counter_comparison = 0;
int counter_swap = 0;

void insertion_sort(int arr[], int n){
    for(int i = 0; i <= n-1; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
            counter_comparison++;
            counter_swap++;
        }
        for (int k = 0; k < n; ++k) {
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
}

// void insertion_sort(int arr[], int n){
//    for(int i = 1; i < n; i++){
//        int key = arr[i];
//        int j = i - 1;
//        while(j >= 0 && arr[j] > key){
//            arr[j + 1] = arr[j];
//            j--;
//            counter_comparison++;
//            counter_swap++;
//        }
//        cout<<"checking :"<<arr[j]<<" "<<key<<endl;
//        for (int k = 0; k < n; ++k) {
//            cout<<arr[k]<<" ";
//        }
//        cout<<endl;
//        arr[j + 1] = key;
//    }
//}
int main() {
    int arr[10] = {78, 78, 33, 65, 922, 34, 111, 2, 76, 35};
    int n = 10;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    insertion_sort(arr, n);
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "number of comparisons: " << counter_comparison << endl;
    cout << "number of swaps: " << counter_swap << endl;
    return 0;

}