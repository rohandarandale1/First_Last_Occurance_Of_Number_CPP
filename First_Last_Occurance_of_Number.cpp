//Program to find the first & last occurance of an number.
#include<iostream>
using namespace std;

int findFirstandLastOccurance(int arr[], int n, char ch, int *f, int *l)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==ch)
		{
			*f=i+1;
			break;
		}
	}
	for(int i=n-1;i>=0;i--)
	{
		if(arr[i]==ch)
		{
			*l=i+1;
			break;
		}
	}
}

int main()
{
	int arr[10], n;
	cout<<"Enter the size of the array: "<<endl;
	cin>>n;
	cout<<"enter any number: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	//cin>>num;
	int ch;
	cout<<"Enter the number whose first & last occurance you want to find: "<<endl;
	cin>>ch;
	int first=-1;
	int last=-1;
	findFirstandLastOccurance(arr, n, ch, &first, &last);
	cout<<"The first occurance of the number "<<ch<<" is: "<<first<<" & the last occurance is: "<<last<<endl;
	return 0;
}
