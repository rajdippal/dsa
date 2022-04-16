// Rearrange an array in maximum minimum form
// Given a sorted array of positive integers, rearrange the array alternately i.e 
// first element should be maximum value, second minimum value, third second max, 
// fourth second min and so on. 

// Input: arr[] = {1, 2, 3, 4, 5, 6, 7} 
// Output: arr[] = {7, 1, 6, 2, 5, 3, 4}


#include<iostream>
using namespace std;

void rearrange(int arr[], int n){
    int max_idx = n - 1, min_idx = 0;
    int max_elem = arr[n - 1] + 1;
    
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            arr[i] += (arr[max_idx] % max_elem) * max_elem;
            max_idx--;
        }
    
        else {
            arr[i] += (arr[min_idx] % max_elem) * max_elem;
            min_idx++;
        }
    }
    
    for (int i = 0; i < n; i++)
        arr[i] = arr[i] / max_elem;
}

void printArray(int arr[], int n){
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;
    rearrange(arr,n);
    printArray(arr,n);
}