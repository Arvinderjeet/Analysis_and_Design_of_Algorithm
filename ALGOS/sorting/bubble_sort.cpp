//
// Created by Arvinderjeet singh on 10/9/2024.
//
#include "iostream"
using namespace std;

int counter_comparison = 0;
int counter_swap = 0;

void bubble_sort(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            counter_comparison++;
            if (arr[j] > arr[j+1]){
                counter_swap++;
                cout<<endl<<"swaping : "<<arr[j]<<" and "<<arr[j+1]<<endl;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                for (int k = 0; k < n; k++){
                    cout << arr[k] << " ";
                }
                cout<<endl;
            }
        }
    }
}
int main(){
    int arr[10] = {78,33,65,922,34,111,2,76,35,65};
    int n = 10;
    bubble_sort(arr,n);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
    cout<<"number of comparisons: "<<counter_comparison<<endl;
    cout<<"number of swaps: "<<counter_swap<<endl;
    return 0;
}
