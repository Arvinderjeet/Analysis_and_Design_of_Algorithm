//
// Created by Arvinderjeet singh on 11/29/2024.
//

#include "iostream"
#include "algorithm"

using namespace std;

int main(){
    int files[] = {4, 7, 1, 2, 6};
    int N = sizeof(files) / sizeof(files[0]);
    sort(files, files + N);
    int total_cost = 0;

    for (int i = 0; i < N-1; ++i) {
        int merge_cost = files[i] + files[i+1];
        total_cost += merge_cost;
        files[i+1] = merge_cost;
        sort(files, files + N);
    }

    cout<<"minimum cost to merge all files = "<<total_cost;
    return 0;
}