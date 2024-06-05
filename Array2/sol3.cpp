#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    ofstream dataFile("insertion_sort_data.txt");
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int *arr = new int[n];

    // Best Case: Already Sorted
    for (int i = 0; i < n; ++i) {
        arr[i] = i;
    }
    clock_t startTime = clock();
    insertionSort(arr, n);
    clock_t endTime = clock();
    dataFile << n << " " << (double)(endTime - startTime) / CLOCKS_PER_SEC << " Best Case\n";

    // Average Case: Random Order
    for (int i = 0; i < n; ++i) {
        arr[i] = rand();
    }
    startTime = clock();
    insertionSort(arr, n);
    endTime = clock();
    dataFile << n << " " << (double)(endTime - startTime) / CLOCKS_PER_SEC << " Average Case\n";

    // Worst Case: Reverse Sorted
    for (int i = 0; i < n; ++i) {
        arr[i] = n - i;
    }
    startTime = clock();
    insertionSort(arr, n);
    endTime = clock();
    dataFile << n << " " << (double)(endTime - startTime) / CLOCKS_PER_SEC << " Worst Case\n";

    dataFile.close();
    
    cout << "Data generated and saved to 'insertion_sort_data.txt'." << endl;

    delete[] arr;

    return 0;
}