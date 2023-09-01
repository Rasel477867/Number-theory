
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
ll n,ans,d;
vector<ll>v;
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


ll ex(ll a,ll b)
{
    if(b==0)
        return 1;
    else if(b%2==0)
        return (ex((a*a),b/2));
    else
        return (a*ex((a*a),(b-1)/2));
}
bool cheak(ll num, ll i)
{
    return num&(1<<i);
}
ll gcd1(vector<ll>v1,ll num)
{
    ans=0;
    ll i,a,g;

    for(i=0; i<n; i++)
    {

        if(cheak(num,i))
        {
            a=n-i-1;

            ans+=n-a;

            v1[a]=gcd(a+1,v1[a]);

        }


    }
    g=v1[0];
    for(i=1; i<n; i++)
    {
        g=gcd(g,v1[i]);
    }

    if(g==1)
        return 1;
    else
        return -1;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j,t;
    ll num,a,b;
    cin>>t;
    while(t--)
    {
        v.clear();
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }



        num=ex(2,n);
        for(i=0; i<=num; i++)
        {
            a=gcd1(v,i);

            if(a==1)
                break;

        }
        cout<<ans<<endl;
    }






    return 0;

}


