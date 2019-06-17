#include<iostream>
using namespace std;

void swap(int *xp,int *xy)
{
	int temp = *xp;
	*xp = *xy;
	*xy = temp;
}
void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";

}
void SelectionSort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int mini = i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j] < arr[mini])
			{
				mini = j;
			}
		}	
		swap(&arr[mini],&arr[i]);
	}
	print(arr,n);
}

int main()
{
	int arr[10]= {1,5,2,5,3,2,8,5,0};
	SelectionSort(arr,9);
	return 0;
}
