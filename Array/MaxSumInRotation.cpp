//Maximum sum of i*arr[i] among all rotations of a given array
#include<iostream>
using namespace std;

int findMax(int arr[], int n){
    int arr_sum=0;
    for(int i=0;i<n;i++)
        arr_sum += arr[i];

    int curr_sum = 0;
    for(int i=0;i<n;i++)
        curr_sum += i*arr[i];
    
    int res = curr_sum;
    for(int i=1;i<n;i++){
        int next_sum = curr_sum - (arr_sum - arr[i-1]) + arr[i-1] * (n-1);
        curr_sum = next_sum;
        res = max(res, curr_sum);
    }
    return res;
}

int main(){
    // int arr[] = {8,3,1,2};
    // int n = sizeof(arr) / sizeof(arr[0]);
    int n;
    cout << "Enter size of array:-";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout << "Enter:-";
        cin >> arr[i];
    }
    cout << findMax(arr,n);
    return 0;
}