#include<bits/stdc++.h>
using namespace std;

int nonrecbinary(int arr[],int l,int r,int key)
{
	while(l<=r)
	{
		int mid = (l+r)/2;
		if(arr[mid] == key)
			return mid;
		else if(arr[mid] < key)
			l = mid+1;
		else	
			r = mid-1;
			
		
	}
	return -1;
}
int main()
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x = 2; 
    int result =nonrecbinary(arr, 0, n - 1, x); 
    (result == -1) ? printf("Element is not present in array") 
                   : printf("Element is present at index %d", 
                            result); 
    return 0; 
} 
