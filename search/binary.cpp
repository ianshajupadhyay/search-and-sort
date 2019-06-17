#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int low,int high,int key)
{
	if(low<=high)
	{
		int mid = (low+high)/2;
		if(arr[mid] == key)
			return mid;
		else if(arr[mid] > key)
			return binarysearch(arr,low,mid-1,key);
		else 
			return binarysearch(arr,mid+1,high,key);
		
	}
return -1;
}
int main()

 
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x = 0; 
    int result = binarysearch(arr, 0, n - 1, x); 
    (result == -1) ? printf("Element is not present in array") 
                   : printf("Element is present at index %d", 
                            result); 
    return 0; 
} 
