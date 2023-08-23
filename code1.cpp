
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
vector<ll>v;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t,i,j;
    double c,d,sum1=0,sum2=0,ans;
    ll n,a,b,mn,mx;
    cin>>n>>a>>b;
    mn=min(a,b);
    mx=max(a,b);
    for(i=0;i<n; i++)
    {
        cin>>a;
        v.pb(a);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(i=0; i<mn; i++)
    {
        sum1+=v[i];
    }
    for(i=mn; i<mn+mx; i++)
    {
        sum2+=v[i];
    }
    c=mn;
    d=mx;
    ans=(sum1/c)+(sum2/d);
    printf("%.8lf",ans);

return 0;

}
