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
    int number;
    cout<<"Enter number: ";
    cin>>number;

    if (palindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}
