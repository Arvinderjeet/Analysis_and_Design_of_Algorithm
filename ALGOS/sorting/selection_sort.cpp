//
// Created by Arvinderjeet singh on 10/9/2024.
//
#include "iostream"
using namespace std;

int counter_comparison = 0;
int counter_swap = 0;

void selection_sort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int min_index = i;
        for(int j = i+1; j < n; j++){
            counter_comparison++;
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        counter_swap++;
        cout<<"comparing "<<arr[i]<<" and "<<arr[min_index]<<endl;
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
        for(int k = 0; k < n; k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }

}
int main(){
    int arr[10] = {78,33,65,922,34,111,2,76,35,65};
//    int arr[10] = {1,1,1,1,1,1,1,1,1,1};
    int n = 10;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selection_sort(arr,n);
    cout<<"final sorted array: "<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"number of comparisons: "<<counter_comparison<<endl;
    cout<<"number of swaps: "<<counter_swap<<endl;
    return 0;
}