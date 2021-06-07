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
    ll n,i;
    cin>>n;
    ll a,m=0,j=0;
    for(i=0;i<n;i++)
    {
        cin>>a;
        m+=(a/30+1)*10;
        j+=(a/60+1)*15;
    }
    if(m>j)
    {
        cout<<"Case "<<ts<<": Juice "<<j<<endl;
    }
    else if(j>m)
    {
        cout<<"Case "<<ts<<": Mile "<<m<<endl;
    }
    else
    {
        cout<<"Case "<<ts<<": Mile Juice "<<m<<endl;
    }
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
