// Find the Rotation Count in Rotated Sorted array
// Input: arr[] = {15, 18, 2, 3, 6, 12}
// Output: 2
// Explanation: Initial array must be {2, 3, 6, 12, 15, 18}. 
// We get the given array after rotating the initial array twice.
#include<iostream>
using namespace std;

int findMin(int arr[],int low,int high){
    if(high < low)
        return 0;
    if(high == low)
        return low;

    int mid = low + (high-low)/2;
    if(mid < high && arr[mid+1] < arr[mid])
        return mid+1;
    if(mid > low && arr[mid-1] > arr[mid])
        return mid;

    if(arr[high] > arr[mid])
        return findMin(arr,low,mid-1);
    else
        return findMin(arr,mid+1,high);
}

int main(){
    int arr[] = {2,3,4,5,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findMin(arr,0,n-1);
}
