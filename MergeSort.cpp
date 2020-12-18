//Merge Sort
#include<iostream>
using namespace std;
void merging(int a[],int beg,int mid,int end);
void MergeSort(int a[],int beg,int end);
int main()
{
	int n;
	cout<<"enter n   ";
	cin>>n;
	int *a=new int[n];
	cout<<"insertelements to it in upsroted form  "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	MergeSort(a,0,n-1);
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"     ";
	}
}

void MergeSort(int a[],int beg,int end)
{
	if(beg<end)
	{
	int mid=(beg+end)/2;
	MergeSort(a,beg,mid);
	MergeSort(a,mid+1,end);
	
	merging(a,beg,mid,end);
}}



void merging(int a[],int beg,int mid,int end)
{
	int n1=mid-beg+1;
	int n2=end -mid;
	int L[n1];
	int R[n2];
	
	for(int i=0;i<n1;i++)
	{
		L[i]=a[beg+i];
	}
	
	for(int i=0;i<n2;i++)
	{
		R[i]=a[mid+1+i];
	}
	
	int na=beg,nl=0,nr=0;
	while(nl<n1 && nr<n2)
	{
		if(L[nl]<R[nr])
		{
			a[na]=L[nl];
			nl++;
		}
		else
		{
			a[na]=R[nr];
			nr++;
		}
		
		na++;
	}
	
	while(nl<n1)
	{
		a[na]=L[nl];
		nl++;
		na++;
	}
	
	
	while(nr<n2)
	{
		a[na]=R[nr];
		nr++;
		na++;
	}
}
