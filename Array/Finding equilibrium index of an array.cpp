#include <iostream>
using namespace std;
int findEquilibriumIdx(int nums[], int n){
    int mid = (n+1)/2;
    int leftSum = 0,rightSum = 0;
    for(int i = 0 ; i < mid;i++){
        leftSum += nums[i];
    }
    for(int j = mid+1 ; j < n;j++){
        rightSum += nums[j];
    }
    if(leftSum==rightSum){
        return mid;
    }
    return -1;
}
int main() {
  int n = 5;
  int arr[] = { 2, 3, -1, 8, 4 };
  int equilibriumidx = findEquilibriumIdx(arr, n);
  cout << equilibriumidx << endl;
  return 0;
}
