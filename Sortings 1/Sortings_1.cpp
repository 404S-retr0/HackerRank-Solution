#include <iostream>
#define MAX_SIZE 20
using namespace std;
 
int main()
{
    int arr[MAX_SIZE]; 
    int i,n,p,j=0,total=0;
    cin>>n;
    cin>>p;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n; i++)
    {
        if((arr[i] < 0) && j<=p)
        {
        total+=(-1*arr[i]);
        j++;
        }
    }
    cout<<total;
    return 0;
}
