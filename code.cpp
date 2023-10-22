#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
#include<bits/stdc++.h>
#define endl '\n'
#define ll  long long int
#define pb push_back


using namespace __gnu_pbds;
using namespace std;
deque<ll>v;
set<ll>s;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j,t;
    ll n,a,ans,y,ans1,b,num;
    cin>>n>>a>>b;
    y=1;
    for(i=0; ; i++)
    {
        num=n-b*i;
        if(num<0)
        {
            y=0;
            break;
        }
        if(num%a==0)
        {
            ans=num/a;
            ans1=i;
            break;
        }
    }
    if(y==0)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        cout<<ans<<" "<<ans1<<endl;
    }



    return 0;
}


