
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
int main()
{
    fast;
    ll n,m,c;
    while(cin>>n>>m>>c)
    {
        if(n==0 && m==0 && c==0) break;
        ll a[n+1],x,ans=0,i,check=0;
        for(i=1;i<=n;i++) cin>>a[i];
        for(i=1;i<=m;i++)
        {
            cin>>x;
            check+=a[x];
            ans=max(ans,check);
            a[x]=-a[x];
        }
        cout<<"Sequence "<<ts<<endl;
        ts++;
        if(ans>c)
        {
            cout<<"Fuse was blown."<<endl;
        }
        else
        {
            cout<<"Fuse was not blown."<<endl<<"Maximal power consumption was "<<ans<<" amperes."<<endl;
        }
        cout<<endl;
    }
    return 0;
}

