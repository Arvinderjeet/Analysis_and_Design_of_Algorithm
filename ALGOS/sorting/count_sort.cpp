//
// Created by Arvinderjeet singh on 10/23/2024.
//
// TODO: quick sort pending


#include "iostream"

using namespace std;

int counter_comparison = 0;
int counter_swap = 0;

void count_sort(int arr[], int n){
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < n; ++i) {
        if(arr[i]>max){
           max = arr[i];
        }

        if(arr[i]<min){
           min = arr[i];
        }
    }
    cout<< min << " " << max <<endl;

    int count[max];
    for (int i = 0; i <= max; ++i) {
        count[i] = 0;
    }

    for (int i = 0; i <= n; ++i) {
        count[arr[i]]++;
    }
    for (int i = 0; i <= max; ++i) {
        cout<<i<<" >> "<<count[i] << "     ";
    }
    int index = 0;
    for (int i = min; i <= max; ++i) {
        if (count[i]>0){
            arr[index] = i;
            index++;
        }
    }
    cout<<endl;
    for (int i = 0; i <= n; ++i) {
        cout<<"["<<arr[i]<<"] ";
    }
}

int main() {
    int arr[10] = {78, 33, 65, 22, 34, 11, 2, 35, 35, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    count_sort(arr,n);
    cout << endl;
    cout << "number of comparisons: " << counter_comparison << endl;
    cout << "number of swaps: " << counter_swap << endl;
    return 0;
}