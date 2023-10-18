#include <cmath>
#include <cstdio>
#include <vector>
#include<string>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    string s1;
    cin>>s1;
    map<char,int>m;
    for(int i=0;i<s1.size();i++)
    {
        m[s1[i]]++;
    }
    int count=m.size();
    int i=0,j=0;
    int ans=0;
    while(j<s.size())
    {
        if(m.find(s[j])!=m.end())
        {
            m[s[j]]--;
            if(m[s[j]]==0)
            {
                count--;
            }
        }
        if(j>=s1.size()-1)
        {
            if(count==0)
            {
                ans++;
            }
            if(m.find(s[i])!=m.end())
            {
                m[s[i]]++;
                if(m[s[i]]==1)
                {
                    count++;
                }
            }
            i++;
        }
        j++;
    }
    cout<<ans<<endl;
    
    return 0;
}