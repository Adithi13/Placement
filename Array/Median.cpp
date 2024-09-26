#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements:";
    for(int i = 0;i < n ; i++){
        cin>>arr[i];
    }//for
    
    //sort the array
    // sort(arr.begin(),arr.end());// for vector ;
    // for array
    sort(arr,arr+n);
    // Calculate the median
    double median;
    if (n % 2 == 0) {
        median = (arr[n/2 - 1] + arr[n/2]) / 2.0;  // For even-sized array
    } else {
        median = arr[n/2];  // For odd-sized array
    }
    cout<<"The median is:"<<" "<<median;
    return 0;
}
