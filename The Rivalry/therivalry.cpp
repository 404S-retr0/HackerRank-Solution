#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,d;
    cin>>n;
    while(n--)
    {
        int count=0;
        cin>>a>>b>>c>>d;
        if(c>d) swap(c,d);
        if(d-c+1+b>=a) cout<<a-1<<endl;
        else if(b==0) cout<<d-c<<endl;
        else cout<<d-c+b<<endl;
    }
    return 0;
 } 
