#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int initialsum = 0;
    vector<int> arr;  // Declare a vector to store the elements

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;  // Input each element
        arr.push_back(element);  // Push the element into the vector
    }
// 	double sum = 0;
// 	for (int i = 0; i < n; i++) {
// 		sum += (double)arr[i];
// 	}
// 	double average = sum / n;
// 	cout << "The average is "<<average;
    int mid = accumulate(arr.begin(),arr.end(),initialsum);
    int answer = mid / n;
    cout<<"The average is:"<<" "<<answer;
    return 0;
}
