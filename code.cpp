
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


//ll ex(ll a,ll b,ll mod)
//{
//    if(b==0)
//        return 1;
//    else if(b%2==0)
//        return (ex((a*a)%mod,b/2,mod));
//    else
//        return (a*ex((a*a)%mod,(b-1)/2,mod))%mod;
//}
//long long int gcd(long long int a,long long int b)
//{
//    long long int c;
//    while(a%b!=0)
//    {
//        c=b;
//        b=a%b;
//        a=c;
//    }
//    return b;
//}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll j,i,t;
    ll n,a,b,num,y,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        num=n+m;
        a=n-m;
        if(a!=1)
            cout<<"NO"<<endl;
        else{
        y=0;
        for(i=2; i*i<=num; i++)
        {
            if(num%i==0)
            {
                y=1;
                break;
            }
        }
        if(y==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
