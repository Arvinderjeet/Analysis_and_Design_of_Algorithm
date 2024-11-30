//
// Created by Arvinderjeet singh on 11/29/2024.
//
#include "iostream"
#include "algorithm"

using namespace std;

struct Item {
    int profit, weight;
    Item(int profit, int weight) : profit(profit), weight(weight) {}
};

bool compare(struct Item a,struct Item b) {
    auto r1 = (double) (a.profit / a.weight);
    auto r2 = (double) (b.profit / b.weight);
    return r1 > r2;
}
double fractional_knapsack(int W, struct Item arr[], int N) {
    sort(arr, arr + N, compare);

    double final_value = 0.0;
    for (int i = 0; i < N; ++i){
        if(arr[i].weight <= W){
            final_value += arr[i].profit;
            W -= arr[i].weight;
        }
        else{
            final_value += arr[i].profit * (double)(W / arr[i].weight);
            break;
        }
    }
    return final_value;
}
int main(){

//    int profit[] = {12,32,42,52,13,16,24,52,62,26};
//    int weight[] = {10,20,30,40,50,60,70,80,90,100};

    int N = 10;
    int W = 50;

    Item arr[] = {{12,10},{32,20},{42,30},{52,40},{13,50},{16,60},{24,70},{52,80},{62,90},{26,100}};

    cout<< fractional_knapsack(W, arr, N);

    return 0;
}