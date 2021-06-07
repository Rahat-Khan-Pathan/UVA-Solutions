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
#define pi 3.14159265359
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
ll ts=1;
void solve()
{
    vector<string>v[105];
    ll i,n=10,x,mx=0;
    string a;
    for(i=0;i<n;i++)
    {
        cin>>a>>x;
        mx=max(mx,x);
        v[x].pub(a);
    }
    cout<<"Case #"<<ts<<":"<<endl;
    for(i=0;i<v[mx].size();i++)
        cout<<v[mx][i]<<endl;
    ts++;
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
