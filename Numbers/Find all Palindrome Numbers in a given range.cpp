#include <bits/stdc++.h>
using namespace std;

bool palindrome(int n){
    int revNum = 0,dup = n;
    while(n>0){
        int last_digit = n % 10;
        revNum = (revNum * 10) + last_digit;
        n = n / 10;
    }
    if(dup == revNum){
        return true;
    }else{
        return false;
    }
}
int main() {
    int min, max;
    
    // Input range
    cout << "Enter the minimum value: ";
    cin >> min;
    cout << "Enter the maximum value: ";
    cin >> max;
    
    cout << "Palindrome numbers between " << min << " and " << max << " are: ";
    
    // Iterate through the range and print palindrome numbers
    for (int i = min; i <= max; i++) {
        if (palindrome(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}
