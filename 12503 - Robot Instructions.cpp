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
    ll n,i,ans=0,x;
    cin>>n;
    ll pos[n+1];
    string a;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        if(a=="LEFT")
            ans--,pos[i]=0;
        else if(a=="RIGHT")
            ans++,pos[i]=1;
        else
        {
            cin>>a>>x;;
            if(pos[x]==0)
                ans--,pos[i]=0;
            else
                ans++,pos[i]=1;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
