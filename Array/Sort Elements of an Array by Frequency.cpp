#include<bits/stdc++.h>
using namespace std;

// Custom comparator to sort based on frequency first and then by value
bool customSort(pair<int, int>& a, pair<int, int>& b) {
    // If frequencies are the same, sort by element value in ascending order
    if (a.second == b.second)
        return a.first < b.first;
    // Sort by frequency in descending order
    return a.second > b.second;
}

void sortByFrequency(int arr[], int n) {
    // Step 1: Count the frequency using a hash table (unordered_map)
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;  // Increment the frequency of each element
    }

    // Step 2: Store the elements and their frequencies in a vector of pairs
    vector<pair<int, int>> freqArr;
    for (auto& it : freq) {
        freqArr.push_back(it);  // Push (element, frequency) pairs
    }

    // Step 3: Sort the vector based on custom conditions
    sort(freqArr.begin(), freqArr.end(), customSort);

    // Step 4: Print the elements based on their frequency
    for (auto& it : freqArr) {
        for (int i = 0; i < it.second; i++) {
            cout << it.first << " ";  // Print each element 'frequency' number of times
        }
    }
    cout << endl;
}

int main() {
    // Example 1
    int arr1[] = {1, 2, 3, 2, 4, 3, 1, 2};
    int N1 = sizeof(arr1) / sizeof(arr1[0]);
    sortByFrequency(arr1, N1);

    // Example 2
    int arr2[] = {-199, 6, 7, -199, 3, 5};
    int N2 = sizeof(arr2) / sizeof(arr2[0]);
    sortByFrequency(arr2, N2);

    return 0;
}
