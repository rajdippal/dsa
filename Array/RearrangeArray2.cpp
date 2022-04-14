#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0;i<n;i++)
        cout << arr[i] << " "; 
}

void reArrange(int arr[], int n){
    int evenPos = n / 2;
    int oddPos = n - evenPos;

    int temp[n];
    for(int i=0;i<n;i++)
        temp[i] = arr[i];
    sort(temp, temp+n);

    int j = oddPos-1;
    for(int i=0;i<n;i=i+2){
        arr[i] = temp[j];
        j--;
    }
    j = oddPos;
    for(int i=1;i<n;i=i+2){
        arr[i] = temp[j];
        j++;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    reArrange(arr,n);
    printArray(arr,n);
}