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
void solve()
{
    ll n;
    cin>>n;
    ll l=0,r=n,mid,ans;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(mid<=sqrt(n)*2 && (mid*(mid+1))/2<=n)
        {
            ans=mid;
            l=mid+1;
        }
        else
            r=mid-1;
    }
    cout<<ans<<endl;
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
