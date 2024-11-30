//
// Created by Arvinderjeet singh on 10/22/2024.
//
// TODO: merge sort after this

#include "iostream"

using namespace std;

int counter_comparison = 0;
int counter_swap = 0;

int partition(int A[], int l, int h)
{
    int pivot= A[l];
    int i=l,j=h;

    while(i<j)
    {
        do
        {
            i++;
        }
        while(A[i]<=pivot&&i<h);

        do
        {
            j--;
        }
        while(A[j]>pivot);

        if(i<j)
        {
            swap(A[i], A[j]);
        }
    }

    swap(A[l],A[j]);
    return j;
}

void quick_sort(int A[], int l, int h)
{
    if(l<h)
    {
        int j = partition(A,l,h);

        quick_sort(A,l,j);
        quick_sort(A,j+1,h);
    }
}

int main() {
    int arr[10] = {78, 33, 65, 922, 34, 111, 2, 76, 35, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    quick_sort(arr,0,10);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;
    cout << "number of comparisons: " << counter_comparison << endl;
    cout << "number of swaps: " << counter_swap << endl;
    return 0;
}




