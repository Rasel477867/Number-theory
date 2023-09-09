
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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j,t;
    ll n,a,b,c,y,x,z,sum,ans,g,l;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        x=n/a;
        y=n/b;
        g=gcd(a,b);
        l=(a*b)/g;
        z=n/l;
        x=x-z;
        y=y-z;
        sum=((n*(n+1))/2)-(((n-x)*(n-x+1))/2);
        ans=sum-((y*(y+1))/2);
         cout<<ans<<endl;
    }


    return 0;

}

