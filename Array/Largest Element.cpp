#include<bits/stdc++.h>
using namespace std;
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
   int max = arr[0];
   for(int i = 1;i<n;i++){
    if(max < arr[i]){
        max = arr[i];
    }
   }
   cout<<"The max element is:"<<" "<<max<<endl;;
   return 0;
}
