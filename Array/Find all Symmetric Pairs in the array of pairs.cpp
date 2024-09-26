// Problem Statement: Given an array of pairs, find all the symmetric pairs in the array.

// Examples:

// Example 1:
// Input: (1,2),(2,1),(3,4),(4,5),(5,4)
// Output: (2,1) (5,4)
// Explanation: Since (1,2) and (2,1) are symmetric pairs and (4,5) and (5,4) are symmetric pairs.

// Example 2:
// Input: (1,5),(2,3),(4,2),(5,1),(2,4)
// Output: (2,4) (5,1)
// Explanation: Since (1,5) and (2,4) are symmetric pairs and (5,1) and (4,2) are symmetric pairs.

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n = 5;
	int arr[5][2] = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};
	unordered_map<int, int>mp;
	cout<<"The Symmetric Pairs are: "<<endl;
	for (int i = 0; i < n; i++) {
		int first = arr[i][0];
		int second = arr[i][1];
		
		//if {second,first} existed previously,print them.
		if (mp.find(second) != mp.end() && mp[second] == first) {
			cout << "(" << first << " " << second << ")" << " ";
		}
		//else store them in the map
		else {
			mp[first] = second;
		}
	}
}
