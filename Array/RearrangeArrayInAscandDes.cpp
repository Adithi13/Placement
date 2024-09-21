#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>arr = {4,2,8,6,15,5,9,20,10};
	int n = arr.size();
    int k =(n + 1) / 2;
    // int k = l-1;
    sort(arr.begin(),arr.begin()+k);
    sort(arr.begin()+k,arr.end(),greater<int>());
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
====================================================================================================
  #include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>arr = {4,2,8,6,15,5,9,20,10};
	int n = arr.size();
	sort(arr.begin(), arr.end());
	for (int i = 0; i < n / 2; i++) {
		cout << arr[i] << " ";
	}
	for (int i = n - 1; i >= n / 2; i--) {
		cout << arr[i] << " ";
	}
    
}
