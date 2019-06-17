#include<bits/stdc++.h>
using namespace std;

int swap(int *xp,int *xy)
{
	int temp = *xp;
	*xp = *xy;
	*xy = temp;
}
void BubbleSort(int arr[],int n)
{
	
	for(int i=0;i<n;i++)
	{
		int flag=0;
		for(int j=0;j<n-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
				flag=1;			
			}
		}
		if(flag==0)
		{
			break;			
		}

	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"  ";
	}
}

int main(void)
{
	int arr[10] = {1,7,0,7,4,6,2,5,6};
	BubbleSort(arr,9);
}
