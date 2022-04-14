#include <iostream>
using namespace std;

void fixArray(int arr[], int n)
{
    int i,t;
	for (i = 0; i < n;)
	{
		if (arr[i] >= 0 && arr[i] != i){
            int ele = arr[arr[i]];
            arr[arr[i]] = arr[i];
            arr[i] = ele;
        }	
		else
			i++;
	}
}

int main()
{
	int arr[] = { -1, -1, 6, 1, 9, 3, 2, -1, 4, -1 };
	int n = sizeof(arr) / sizeof(arr[0]);
    int i;
	fixArray(arr, n);

	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}