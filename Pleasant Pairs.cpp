#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#define ll long long int
#define pb push_back
#include<bits/stdc++.h>
using namespace std;
vector<pair<ll,ll> >v;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j,t;
    ll n,a,b,c,ans,a1,b1;
    cin>>t;
    while(t--)
    {
        v.clear();
        ans=0;
        cin>>n;
        ll num=n*2-1;
        for(i=1; i<=n; i++)
        {
            cin>>a;
            v.pb({a,i});
        }
        sort(v.begin(),v.end());

        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++)
            {
                a=v[i].first;
                b=v[j].first;

                if(a*b>num)
                    break;
                else{
                    a1=v[i].second;
                    b1=v[j].second;
                    if(a1+b1==a*b)
                          ans++;
                }
            }
        }
        cout<<ans<<endl;
    }




    return 0;

}


