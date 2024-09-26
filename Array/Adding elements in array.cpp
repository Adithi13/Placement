// Adding Element in an Array

// Problem Statement: Given an array of N integers, write a program to add an array element at the beginning, end, and at a specific position.

// Example:
// Input: N = 5, array[] = {1,2,3,4,5}
// insertbeginning(6)
// insertending(7)
// insertatpos(8,4)
// Output: 6,1,2,8,3,4,5,7
// Explanation: 6 is added at the beginning and 7 is added at the end and 8 is added at position 4

// ===============================INSERT AT BEGGINING==================================
#include <bits/stdc++.h>
using namespace std;
void insertatbegin(int* arr,int n,int value)
{
    for(int i=n-1;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=value;
}
int main()
{
    int n=8;
    int arr[9]={10,9,14,8,20,48,16,9};
    int value=40;
    cout<<"Before inserting the value at beginning:"<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertatbegin(arr,n,value);
    cout<<"After inserting the value at beginning:"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
// ====================================================================================================================

// ===============================INSERT AT END========================================
#include <bits/stdc++.h>
using namespace std;
void insertatEnd(int *arr, int n, int value)
{
    arr[n] = value;
}

int main()
{
    int n=8;
    int arr[9]={10,9,14,8,20,48,16,9};
    int value=40;
    cout<<"Before inserting the value at beginning:"<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertatEnd(arr,n,value);
    cout<<"After inserting the value at beginning:"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
// ====================================================================================

// ===============================INSERT AT GIVEN POSITION==================================
#include <bits/stdc++.h>
using namespace std;
void insertatposition(int *arr, int n, int value, int pos)
{
    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
}

int main()
{
    int n=8;
    int pos = 5;
    int arr[9]={10,9,14,8,20,48,16,9};
    int value=40;
    cout<<"Before inserting the value at beginning:"<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertatposition(arr,n,value,pos);
    cout<<"After inserting the value at beginning:"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
// =========================================================================================



// IF INPUT IS VECTORRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR
#include <iostream>
#include <vector>  // To use dynamic arrays
using namespace std;

// Function to insert element at the beginning
void insertBeginning(vector<int>& arr, int element) {
    arr.insert(arr.begin(), element);  // Inserts element at the start (index 0)
}

// Function to insert element at the end
void insertEnd(vector<int>& arr, int element) {
    arr.push_back(element);  // Adds element to the end of the array
}

// Function to insert element at a specific position
void insertAtPosition(vector<int>& arr, int element, int position) {
    if (position < 1 || position > arr.size() + 1) {
        cout << "Invalid position!" << endl;
        return;
    }
    arr.insert(arr.begin() + (position - 1), element);  // Inserts element at given position (1-based index)
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr;  // Using vector for dynamic array operations
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        arr.push_back(element);  // Store the elements in the vector
    }

    // Insert an element at the beginning
    int elementAtBeginning;
    cout << "Enter the element to insert at the beginning: ";
    cin >> elementAtBeginning;
    insertBeginning(arr, elementAtBeginning);

    // Insert an element at the end
    int elementAtEnd;
    cout << "Enter the element to insert at the end: ";
    cin >> elementAtEnd;
    insertEnd(arr, elementAtEnd);

    // Insert an element at a specific position
    int elementAtPos, position;
    cout << "Enter the element to insert at a specific position: ";
    cin >> elementAtPos;
    cout << "Enter the position (1-based index): ";
    cin >> position;
    insertAtPosition(arr, elementAtPos, position);

    // Display the final array
    cout << "Modified array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if (i != arr.size() - 1) {
            cout << ",";  // Print commas between elements
        }
    }
    cout << endl;

    return 0;
}

