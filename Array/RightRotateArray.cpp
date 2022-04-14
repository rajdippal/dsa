#include<iostream>
using namespace std;

void preProcess(int arr[], int n, int temp[]){
    for(int i=0;i<n;i++)
        temp[i] = temp[i+n] = arr[i];
}

void rightRotate(int temp[], int k, int n){
    int start = (n-k) % n;
    for(int i=start;i<start+n;i++)
        cout << temp[i] << " ";
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp[2*n];
    int k=5;

    preProcess(arr,n,temp);
    rightRotate(temp,k,n);
}