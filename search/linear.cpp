#include<bits/stdc++.h>
using namespace std;

int linearsearch(int arr[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i] == key)
			return i;
	}		
	return -1;
}

int main()
{
	int arr[10] = {1,3,112,1,212,12,21};
	int x = linearsearch(arr,7,3);
	if(x  == -1)
		cout<<"Element not found";
	else
		cout<<"Element at "<<x+1<<" position";
}
