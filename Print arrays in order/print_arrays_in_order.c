#include<stdio.h> 
void sort(int arr1[], int n) 
{ 
   int i, j,temp; 
   for (i = 0; i < n-1; i++)
    {   
       for (j = 0; j < n-i-1; j++)
       {
           if (arr1[j] > arr1[j+1])
           {
               temp = arr1[j]; 
               arr1[j] = arr1[j+1]; 
               arr1[j+1] = temp;
           }
       }
    }   
    return ;
} 
void rearrangeArray(int arr1[], int n) 
{   
    sort(arr1, n); 
    int tempArr[n];  
    int ArrIndex = 0;
    for (int i = 0, j = n-1; i <= n / 2 || j > n / 2; i++, j--) 
    { 
        tempArr[ArrIndex] = arr1[i]; 
        ArrIndex++; 
        tempArr[ArrIndex] = arr1[j]; 
        ArrIndex++; 
    } 
    for (int i = 0; i < n; i++) 
        {arr1[i] = tempArr[i];}
} 
int main() 
{ 
    int l;
    scanf("%d",&l);
    int arr1[l];  
    for(int i = 0; i < l; i++)
    {
        scanf("%d  ",&arr1[i]);
    }
    int n = sizeof(arr1) / sizeof(arr1[0]);  
    rearrangeArray(arr1, n); 
    for (int i = 0; i < n; i++) 
        printf("%d ",arr1[i]); 
    return 0; 
}
