#include<iostream>
using namespace std;

void reverseArray(int arr[], int start, int end){
    int temp;
    while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int n){
    for(int i=0;i<n;i++)
        cout << arr[i] << " "; 
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr,0,n-1);
    printArray(arr,n);
}