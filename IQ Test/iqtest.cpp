#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,odd=0,od=1,even=0,ed=1;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>x;
        if(x%2)
        {
            od=i;
            odd++;
        }
        else
        {
            ed=i;
            even++;
        }
    }
    if(odd<even)cout<<od<<endl;
    else cout<<ed<<endl;
    return 0;
}
