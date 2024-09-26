#include <bits/stdc++.h>
using namespace std;

class removeDuplicate {
public:
    void duplicate(int arr[], int n) {
        set<int> seen;  // To store unique elements
        vector<int> result;  // To store elements in original order
        
        for (int i = 0; i < n; i++) {
            if (seen.find(arr[i]) == seen.end()) {  // If the element is not in the set
                result.push_back(arr[i]);  // Add to result vector
                seen.insert(arr[i]);  // Mark the element as seen
            }
        }

        // Print the result
        cout << "{";
        for (int i = 0; i < result.size(); i++) {
            cout << result[i];
            if (i != result.size() - 1) cout << ",";  // Print commas between elements
        }
        cout << "}" << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];  // Declare an array to store the elements
    
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Take user input for array elements
    }

    removeDuplicate d1;
    d1.duplicate(arr, n);  // Call the method to remove duplicates and print the result

    return 0;
}
