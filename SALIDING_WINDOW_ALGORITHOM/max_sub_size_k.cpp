#include<bits/stdc++.h>
#define fo(i,s,n) for(i=s;i<n;i++)
#define ffo(i,s,n) for(i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    string s;cin>>s;
    int n=s.size();
    int k;cin>>k;
    int i=0,j=0;
    int fre[26]={0};
    int u=0;
    while(j<n)
    {
        fre[s[j]-'a']++;
        if(fre[s[j]-'a']==1)
        {
            u++;
        }
        while(u>k)
        {
            fre[s[i]-'a']--;
            if(fre[s[i]-'a']==0)
            {
                u--;
            }
        }
        if(u==k)
        {
            cout<<j-i+1<<endl;
        }
        j++;
    }

    return 0;
}