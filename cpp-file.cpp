#include <iostream>
using namespace std;

void printArrays(int array1[], int array2[], int arraySize);
void output(int array1[], int array2[], int arraySize, int newArray[]);
void sortDescending(int arr[], int size);

int main() {

    //variables
    const int arraySize = 10;
    int array1[arraySize];
    int array2[arraySize];
    int newArray[arraySize * 2];

    // Getting the user's input
    printArrays(array1, array2, arraySize);

    // Combine the arrays into newArray
    output(array1, array2, arraySize, newArray);

    // Sort the new array in descending order
    sortDescending(newArray, arraySize * 2);

    // Print the sorted array
    cout << "\n\nArray in descending order: ";
    for (int i = 0; i < arraySize * 2; i++) {
        cout << newArray[i];
        if (i < arraySize * 2 - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}

// Function to get the user's input
void printArrays(int array1[], int array2[], int arraySize) {
    cout << "Enter the numbers for array 1:" << endl;
    for (int i = 0; i < arraySize; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> array1[i];
    }
    cout << "Enter the numbers for array 2:" << endl;
    for (int i = 0; i < arraySize; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> array2[i];
    }
}

// Function to combine the user's input into a single array
void output(int array1[], int array2[], int arraySize, int newArray[]) {
    for (int i = 0; i < arraySize; i++) {
        newArray[i] = array1[i]; 
        newArray[i + arraySize] = array2[i]; 
    }
}

// Function to sort an array in descending order
void sortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Swap elements if the current element is less than the next
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
