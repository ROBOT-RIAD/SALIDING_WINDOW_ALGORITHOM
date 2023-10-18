#include<bits/stdc++.h>
#define fo(i,s,n) for(i=s;i<n;i++)
#define ffo(i,s,n) for(i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int n;cin>>n;
    vector<int>v(n);
    int i;
    fo(i,0,n)cin>>v[i];
    int s;cin>>s;
    map<int ,int >m;
    int sum=0;
    fo(i,0,n)
    {
        sum+=v[i];
        if(sum==s)
        {
            cout<<i+1<<endl;
        }
        if(sum>s)
        {
            if(m.find(sum-s)!=m.end())
            {
                cout<<i-m[sum-s]<<endl;
            }
        }
        if(m.find(sum)==m.end())
        {
            m[sum]=i;
        }
    }
    return 0;
}