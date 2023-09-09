
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


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j,t;
    ll n,a,b,c,y;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(b<3)
            cout<<-1<<endl;
        else if(b%2==0 )
            cout<<b/2<<" "<<b/2<<endl;
        else
        {
            if(a==b)
            {
                if(b%2==0)
                    cout<<b/2<<" "<<b/2<<endl;
                else
                {
                    y=0;
                    for(i=2; i*i<=b; i++)
                    {
                        if(b%i==0)
                        {
                            c=b/i;
                            y=1;
                            break;
                        }
                    }
                    if(y==0)
                        cout<<-1<<endl;
                    else
                        cout<<c<<" "<<b-c<<endl;
                }
            }
            else
            {
                b--;
                if(b==2)
                    cout<<-1<<endl;
                else
                {
                    cout<<b/2<<" "<<b/2<<endl;
                }
            }
        }
    }


    return 0;

}

