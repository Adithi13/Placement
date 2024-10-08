#include <bits/stdc++.h>
using namespace std;

bool isSubset(vector<int>& arr1, vector<int>& arr2) {
    // Step 1: Insert all elements of arr2[] into an unordered_set for fast lookup
    unordered_set<int> elementsInArr2(arr2.begin(), arr2.end());

    // Step 2: Check if every element of arr1[] is present in arr2[]
    for (int i = 0; i < arr1.size(); i++) {
        if (elementsInArr2.find(arr1[i]) == elementsInArr2.end()) {
            // If any element is not found, return false
            return false;
        }
    }

    // If all elements of arr1[] are found in arr2[], return true
    return true;
}

int main() {
    // Input arrays
    vector<int> arr1 = {1, 2, 3};
    vector<int> arr2 = {1, 2, 3, 4, 5};

    // Check if arr1 is a subset of arr2
    if (isSubset(arr1, arr2)) {
        cout << "arr1[] is a subset of arr2[]" << endl;
    } else {
        cout << "arr1[] is not a subset of arr2[]" << endl;
    }

    return 0;
}
======================================================================================================================
#include <iostream>
using namespace std;

bool isSubset(int arr1[], int m, int arr2[], int n){
    if(m>n) return false;
    for(int i=0; i<m; i++){
	    bool present=false;
	    for(int j=0; j<n;j++){
	        if(arr2[j]==arr1[i]){
	            present = true;
	            break;
	        }
	    }
	    if(present==false) return false;
	}
	return true;
}


int main() {
	// your code goes here
	int arr1[]={1,3,4,5,2};
	int arr2[]={2,4,3,1,7,5,15};
	
	int m= sizeof(arr1)/sizeof(arr1[0]);
	int n= sizeof(arr2)/sizeof(arr2[0]);
	
	bool ans= isSubset(arr1,m,arr2,n);
	
	if(ans==true)
	    cout<<"arr1[] is a subset of arr2[]";
	else cout<<"arr1[] is not a subset of arr2[]";
	
	return 0;
}
=======================================================================================================================
#include <bits/stdc++.h>
using namespace std;

bool bSearch(int elem, int arr[], int n){
    int start=0;
    int end= n-1;
    while(start<=end){
        int mid= (start+end)/2;
        if(arr[mid]==elem)
            return true;
        else if(arr[mid]<elem)
            start = mid+1;
        else end= mid-1;
    }
    return false;
}

bool isSubset(int arr1[], int m, int arr2[], int n){
    
    sort(arr2,arr2+n); // library function to sort the array
    
    if(m>n) return false;
    for(int i=0; i<m; i++){
        
	    bool present= bSearch(arr1[i],arr2,n);
	    if(present==false) return false;
	}
	return true;
}


int main() {
	// your code goes here
	int arr1[]={1,3,4,5,2};
	int arr2[]={2,4,3,1,7,5,15};
	
	int m= sizeof(arr1)/sizeof(arr1[0]);
	int n= sizeof(arr2)/sizeof(arr2[0]);
	
	bool ans= isSubset(arr1,m,arr2,n);
	
	if(ans==true)
	    cout<<"arr1[] is a subset of arr2[]";
	else cout<<"arr1[] is not a subset of arr2[]";
	
	return 0;
}
