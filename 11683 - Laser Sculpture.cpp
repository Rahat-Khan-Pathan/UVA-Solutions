/*
||-----------------------------------||
||        Rahat Khan Pathan          ||
||      BGC Trust University         ||
||       Department of CSE           ||
||-----------------------------------||
*/
#include<bits/stdc++.h>
#define ll long long int
#define pub push_back
#define PI 3.14159265359
#define vll vector<ll>
#define All(X) (X).begin(),(X).end()
#define Unique(X) (X).erase(unique(All(X)),(X).end()))
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
#define pi pair<ll,ll>
#define vpair vector<pair<ll,ll> >
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define minus cout<<-1<<endl
using namespace std;
int main()
{
    fast;
    ll n,m;
    while(cin>>n>>m)
    {
        vll v;
        if(n==0 && m==0)
            break;
        ll i,a,ans=0;
        for(i=0;i<m;i++)
        {
            cin>>a;
            v.pub(a);
        }
        v.insert(v.begin(),n);
        for(i=1;i<v.size();i++)
        {
            if(v[i]<v[i-1])
            {
                ans+=v[i-1]-v[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

