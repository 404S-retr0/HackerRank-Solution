#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
        vector<string>find_permutation(string S)
        {
            // Code here there
            sort(S.begin(),S.end());
            vector<string>v;
            do{
                v.push_back(S);
            }while(next_permutation(S.begin(),S.end()));
            return v;
        }
};
int main(){
    
    
        string S;
        cin >> S;
        Solution ob;
        vector<string> ans = ob.find_permutation(S);
        for(auto i: ans)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    
    return 0;
}
