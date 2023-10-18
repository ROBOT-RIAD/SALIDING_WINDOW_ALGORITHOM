#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int k;cin>>k;
    int sum=0;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        if(sum==k)
        {
            cout<<i+1<<endl;
        }
        if(sum>k)
        {
            if(m.find(sum-k)!=m.end())
            {
                cout<<i-m[sum-k]<<endl;
            }
        }
        if(m.find(sum)==m.end())
        {
            m[sum]=i;
        }
    }
    for(auto it:m)
    {
        cout<<it.first<<" ";
    }
    cout<<endl;
    for(auto it:m)
    {
        cout<<it.second<<" ";
    }
    return 0;
}