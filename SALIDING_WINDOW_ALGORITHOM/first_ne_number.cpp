#include <cmath>
#include <cstdio>
#include <vector>
#include<string>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k;cin>>n>>k;
    vector<int >v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int i=0,j=0;
    queue<int>q;
    while(j<n)
    {
        if(v[j]<0)q.push(v[j]);
        if(j>=k-1)
        {
            if(q.size())
            cout<<q.front()<<" ";
            else
            cout<<0<<" ";
            if(v[i]<0)
            {
                q.pop();
            }
            i++;
        }
        j++;
    }
    return 0;
}