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
ll ts=1;
void solve()
{
    ll n,cnt=0,ans=-1,i;
    cin>>n;
    char c;
    for(i=0;i<n;i++)
    {
        cin>>c;
        if(c=='W')
        {
            cnt=0;
        }
        else
        {
            cnt++;
        }
        if(cnt==3 && ans==-1)
        {
            ans=i+1;
        }
    }
    (ans==-1)? cout<<"Case "<<ts<<": Yay! Mighty Rafa persists!"<<endl : cout<<"Case "<<ts<<": "<<ans<<endl;
    ts++;
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