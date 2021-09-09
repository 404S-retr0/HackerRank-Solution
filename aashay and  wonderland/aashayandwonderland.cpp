#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int smallestNumber (string num, int k)
{
    if(num.length()<=k)
        return 0;
    unordered_map<char,int> pos;
    for(int i=0;i<num.length();i++)
   { pos[num[i]]=i;}
 
    string temp=num;
    sort(num.begin(),num.end());
    string ans=num.substr(0,num.length()-k);
    vector<int> v;
    for(int i=0;i<ans.length();i++)
    v.push_back(pos[ans[i]]);
 
    sort(v.begin(),v.end());
    string ret;
    for(int i=0;i<v.size();i++)
    {ret+=temp[v[i]];}
    int final=stoi(ret);
 
    return final;
}
int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    int ans;
    cout<<smallestNumber(s,k)%(int)(pow(10,9)+7);
    return 0;
}
