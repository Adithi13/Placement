#include<bits/stdc++.h>
using namespace std;
int small(vector<int>&arr){
    sort(arr.begin(),arr.end());
    return arr[0];
}
int main(){
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
   cout<<"The smallest element of the array is:"<<small(arr)<<endl;
   return 0;
}
