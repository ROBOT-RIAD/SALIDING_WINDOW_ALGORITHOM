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
    long int sum=0;
    long int mx=INT_MIN;
    while(j<n)
    {
        sum+=v[j];
        if(j>=k-1)
        {
            mx=max(mx,sum);
            sum-=v[i];
            i++;
        }
        j++;
    }
    cout<<mx<<endl;
    return 0;
}