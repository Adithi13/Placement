#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> arr;

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        arr.push_back(element);
    }
    unordered_map<int, int>count;
    for (int i = 0; i < n; i++){
        count[arr[i]]++;
    }
    for (auto x : count) {
        cout << x.first << " appears " << x.second << " times" << endl;
    }
    return 0;
}
