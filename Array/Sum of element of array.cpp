#include<bits/stdc++.h>
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
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	cout <<"The sum of the elements of the array is "<<" "<< sum;
}


==============================================================================
#include<bits/stdc++.h>
using namespace std;
int main() {

	int n = 5;
	int arr[] = {1, 2, 3, 4, 5};
	int initialSum = 0;
	cout <<"The sum of the elements of the array is ";
	cout<<accumulate(arr, arr + n, initialSum);

}
