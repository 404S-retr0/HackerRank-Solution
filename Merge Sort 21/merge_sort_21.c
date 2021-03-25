#include<stdio.h>
void mergesort(int a[],int i,int j);
void merge(int a[],int i1,int j1,int i2,int j2);
int Find_median(int array[] , int n)
{
    int median=0;
    // if number of elements are even
    if(n%2 == 0)
        median = (array[(n-1)/2] + array[n/2])/2.0;
    // if number of elements are odd
    else
        median = array[n/2];
    return median;
}
int main()
{
	int a[30],n,i,median=0;
	//Enter no of elements
	scanf("%d",&n);
	//Enter array elements
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	mergesort(a,0,n-1);
	median = Find_median(a, n);
    printf("%d\n",median);
	return 0;
}
void mergesort(int a[],int i,int j)
{
	int mid;
	if(i<j)
	{
		mid=(i+j)/2;
		mergesort(a,i,mid);		//left recursion
		mergesort(a,mid+1,j);	//right recursion
		merge(a,i,mid,mid+1,j);	//merging of two sorted sub-arrays
	}
}
void merge(int a[],int i1,int j1,int i2,int j2)
{
	int temp[50];//array used for merging
	int i,j,k;
	i=i1;//beginning of the first list
	j=i2;//beginning of the second list
	k=0;
	while(i<=j1 && j<=j2)//while elements in both lists
	{
		if(a[i]<a[j])
			temp[k++]=a[i++];
		else
			temp[k++]=a[j++];
	}
	while(i<=j1)//copy remaining elements of the first list
		temp[k++]=a[i++];
	while(j<=j2)//copy remaining elements of the second list
		temp[k++]=a[j++];
	for(i=i1,j=0;i<=j2;i++,j++)//Transfer elements from temp[] back to a[]
		a[i]=temp[j];
}
