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
    ll n=10,i;
    ll a[n+1],b[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    bool ans=true;
    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            ans=false;
            break;
        }
    }
    if(ans)
    {
        cout<<"Ordered"<<endl;
        return;
    }
    ans=true;
    sort(a,a+n,greater<ll>());
    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            ans=false;
            break;
        }
    }
    if(ans)
        cout<<"Ordered"<<endl;
    else
        cout<<"Unordered"<<endl;
}
int main()
{
    fast;
    ll t;
    cin>>t;
    cout<<"Lumberjacks:"<<endl;
    while(t--)
    {
        solve();
    }
    return 0;
}
