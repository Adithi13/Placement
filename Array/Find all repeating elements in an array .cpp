#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> arr;  // Declare a vector to store the elements

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;  // Input each element
        arr.push_back(element);  // Push the element into the vector
    }

    unordered_map<int, int> count;
    
    // Count the frequency of each element
    for (auto i : arr) {
        count[i]++;
    }

    cout << "The repeated elements of the array are: ";

    // Print elements that appear more than once
    for (auto i : count) {
        if (i.second > 1) {  // Access the frequency using i.second
            cout << i.first << " ";  // Print the element using i.first
        }
    }

    cout << endl;
    return 0;
}
// here the output is 4,2,1 insted of 1,2,4
// ==========================================================================================================
