// Rearrange an array such that ‘arr[j]’ becomes ‘i’ if ‘arr[i]’ is ‘j’ 
#include<iostream>
using namespace std;

void reArrange(int arr[], int n){
    int temp[n];
    for(int i=0;i<n;i++)
        temp[arr[i]] = i;

    for(int i=0;i<n;i++)
        cout << temp[i] << " ";
}

int main(){
    int arr[] = {1,3,0,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    reArrange(arr,n);
}