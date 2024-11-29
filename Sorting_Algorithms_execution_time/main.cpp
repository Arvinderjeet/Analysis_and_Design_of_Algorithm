//
// Created by Arvinderjeet singh on 11/7/2024.
//

//todo: Develop a console-based C++ application to visualize and compare sorting algorithms' performance.
// Students will implement sorting algorithms, display sorting steps, and measure execution time to find the fastest algorithm-
//Requirements:
//todo: Sorting Algorithms: Implement Bubble Sort, Selection Sort, Insertion Sort, Merge Sort, and Quick Sort.
//todo: Array Input: Allow user to specify array size and type (random, sorted, reversed).
//todo: Visualization Display the array in the console during sorting, highlighting comparisons and swaps with symbols or brackets.
//todo: Time Measurement: Use std::chrono to track execution time for each algorithm.
//todo: Summary: After sorting, show a table comparing each algorithm's time and highlight the fastest.
//todo: Expected Output:
//todo: Initial array display.
//todo: Execution times and a final comparison of all algorithms.

//todo: Final Comparison Table:
// Algorithm        Time (seconds)
// Bubble Sort      0.0023
// Selection Sort   0.0017
// Insertion Sort   0.0015
// Merge Sort       0.0010
// Quick Sort       0.0009

#include "iostream"

using namespace std;

void create_data() {
    int size;
    cout << "Enter size of array to perform sorting: " << endl;
    cin >> size;
    int main_array[size];
    for (int i = 0; i < size; ++i) {
        main_array[i] = i;
    }

}

int main() {
    create_data();

    return 0;
}