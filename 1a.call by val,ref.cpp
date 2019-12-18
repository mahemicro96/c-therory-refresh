#include<iostream>
using namespace std;
void callval(int x)
{
	x=x*2;
	cout<<x<<endl;
}
void callref(int *x)
{
	
	*x=(*x)*2;
	cout<<*x<<endl;
}
void callRefArr(int *arr,int n)//int arr[]
{
	for(int i=0;i<n;i++)
	arr[i]=arr[i]*2;
	
}
int main()
{
	int a[5]={1,2,3,4,5};
	//array element
	callval(a[0]);//call by value
	cout<<a[0]<<endl;
	callref(&a[1]);//call by reference
	cout<<a[1]<<endl;
	int n=sizeof(a)/sizeof(a[0]);
	//array
	callRefArr(a,n);//call by reference
	for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
	cout<<a[i]<<" ";
	
}
