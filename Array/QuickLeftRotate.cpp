// Quickly find multiple left rotations of an array
#include<iostream>
using namespace std;

void preProcess(int arr[], int n, int temp[]){
    for(int i=0;i<n;i++)
        temp[i] = temp[i+n] = arr[i];
}

void leftRotate(int temp[], int k, int n){
    int start = k % n;
    for(int i=start;i<start+n;i++)
        cout << temp[i] << " ";
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp[2*n];
    int k=700;

    preProcess(arr,n,temp);
    leftRotate(temp,k,n);
}