
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define pb push_back
#define pf push_front
const ll mod=1e9+7;
using namespace std;
long long int gcd(long long int a,long long int b)
{
    long long int c;
    while(a%b!=0)
    {
        c=b;
        b=a%b;
        a=c;
    }
    return b;
}
vector<ll>v;
vector<ll>ans;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j,t;
    ll n,a,b,c,g;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
    }
    c=0;
    for(i=0; i<n-1; i++)
    {
        g=gcd(v[i],v[i+1]);
        if(g==1)
            ans.pb(v[i]);
        else{
            ans.pb(v[i]);
            ans.pb(1);
            c++;
        }
    }
    ans.pb(v[n-1]);
    cout<<c<<endl;
    for(i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";

    return 0;

}

