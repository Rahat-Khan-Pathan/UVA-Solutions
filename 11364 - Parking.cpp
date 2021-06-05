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
#define mp make_pair
#define vpair vector<pair<ll,ll>>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define minus cout<<-1<<endl
using namespace std;
void solve()
{
    ll n,i;
    cin>>n;
    ll a[n+1];
    for(i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    ll ans=0;
    for(i=1;i<n;i++)
    {
        ans+=(a[i]-a[i-1]);
    }
    ans+=a[n-1]-a[0];
    cout<<ans<<endl;
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
