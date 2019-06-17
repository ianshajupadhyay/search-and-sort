#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int a[],int n)
{
	for(int i=1;i<n;i++)
	{
		int value = a[i];
		int hole = i;
		while(hole > 0 && a[hole-1] > value)
		{
			a[hole] = a[hole-1];
			hole = hole-1;
		}
		a[hole] = value;
	}
	

}

int main(void)
{
	int arr[10] = {1,7,0,7,4,6,2,5,6};
	InsertionSort(arr,9);
for(int i=0;i<9;i++)
	{
		cout<<arr[i]<<"  ";
	}
}
