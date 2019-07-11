#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&A,int l,int mid,int r)
{
	int n1=mid-l+1;
	int n2=r-mid;
	int i,j,k;
	vector<int>temp1(n1);
	vector<int>temp2(n2);
	for(i=0;i<n1;i++)
	{
		temp1[i]=A[l+i];
	}
	for(i=0;i<n2;i++)
	{
		temp2[i]=A[i+mid];
	}
	
	i=0;
	j=0;
	while (i<n1&&j<n2)
	{
		if(temp1[i]<=temp2[j])
		{
			A[k]=temp1[i];
			i++;
		}
		else
		{
			A[k]=temp2[j];
			j++;
		}
		k++;

		while(i<n1)
		{
			A[k]=temp1[i];
			i++;
			k++;
		}
		while(j<n2)
		{
			A[k]=temp2[j];
			j++;
			k++;
		}
	

	}
	
}
void mergeSort(vector<int>&A,int l,int r)
{
	int mid;
	while(l<r)
	{

		mid=l+(r-l)/2;
		mergeSort(A,mid+1,r);
		mergeSort(A,l,mid-1);
		merge(A,l,mid,r);
	}
 
}
int main() 
{ 
      
  	int n=A.size()
  	for(int n=)
    mergeSort(A, 0, n-1); 

    return 0; 
} 