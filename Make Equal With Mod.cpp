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
const ll N=100;
using namespace std;
set<ll>s;
set<ll>::iterator it;
set<ll>s1;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j,t;
    ll n,p,a,b,pre,ans,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        s1.clear();
        s.clear();
         p=-1;
         b=-1;
        for(i=0; i<n; i++)
        {
            cin>>a;

            s.insert(a);
            if(a>2)
                s1.insert(a);
            if(a==0 || a==2)
                b=1;
            if(a==1)
                p=1;
        }
        if(s.size()==1)
            cout<<"YES"<<endl;
        else if(p==1)
            {
                if(b==1)
                    cout<<"NO"<<endl;
                else{
                    y=1;
                    pre=0;
                    for(it=s1.begin(); it!=s1.end(); it++)
                    {
                        a=abs(*it-pre);
                        if(a<=1)
                        {
                           y=0;
                           break;
                        }
                        pre=*it;
                    }
                    if(y==1)
                        cout<<"YES"<<endl;
                    else
                        cout<<"NO"<<endl;
                }
            }
        else
            cout<<"YES"<<endl;

    }



    return 0;
}

