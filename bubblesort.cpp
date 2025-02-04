#include <iostream>
#include <vector>
using namespace std;

// Function to perform Bubble Sort on a vector
void bubbleSort(vector<int> &v) {
    int n = v.size();
    // Outer loop for the number of passes
    for (int i = 0; i < n - 1; i++) {
        // Inner loop for comparing adjacent elements
        for (int j = 0; j < n - 1 - i; j++) {
            // Swap if the current element is greater than the next element
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
            }
        }
    }
    return;
}

int main() {
    int n;
    cout << "Enter the array size: ";
    cin >> n;  // Taking input for array size
    
    vector<int> v(n); // Declaring a vector of size n
    
    // Taking input for array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    // Calling bubbleSort function to sort the array
    bubbleSort(v);
    
    // Printing the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    
    return 0; // Indicating successful execution
}

