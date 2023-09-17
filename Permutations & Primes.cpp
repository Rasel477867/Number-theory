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

typedef tree<long long int, null_type, less_equal<long long int>, rb_tree_tag,
        tree_order_statistics_node_update>
        ordered_multiset;
ordered_multiset s;
//ordered_multiset :: iterator it;

const ll N=1e7;
 bool sive[N];
 vector<ll>prime;
 deque<ll>v;
 deque<ll>p;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j;
    for(i=0; i<N; i++)
    {
        sive[i]=true;
    }
    sive[0]=false;
    sive[1]=false;
    for(i=2; i*i<=N; i++)
    {
        if(sive[i])
        {
            for(j=i*i; j<N; j+=i)
            {
                sive[j]=false;
            }
        }
    }
    for(i=0; i<N; i++)
    {
       if(sive[i]==true)
           prime.pb(i);
    }
    ll t,a,b,c,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        v.clear();
        if(n==1)
            cout<<1<<endl;
        else{
            v.pb(1);
            p.clear();
            c=1;
            for(i=2; i<=n; i++)
            {
                if(sive[i]==true)
                {
                    p.pb(i);

                }
                else{
                    if(c%2==1)
                    {
                        v.pb(i);
                        c++;
                    }
                    else{
                        c++;
                        v.push_front(i);
                    }
                }
            }
         for(i=0; i<p.size(); i++)
         {
             if(c%2==0)
             {
                 v.push_front(p[i]);
                 c++;
             }
             else{
                v.pb(p[i]);
                c++;
             }

         }
         for(i=0; i<n; i++)
            cout<<v[i]<<" ";
         cout<<endl;
        }


    }
   return 0;
}


