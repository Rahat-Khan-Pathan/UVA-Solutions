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
double price(ll a,ll b,ll c,ll d,ll k,ll p)
{
    double ans=p*(sin(a*k+b)+cos(c*k+d)+2);
    return ans;
}
int main()
{
    fast;
    ll p,a,b,c,d,n;
    while(cin>>p>>a>>b>>c>>d>>n)
    {
        ll i=1;
        double mx=INT_MIN,mn=INT_MAX,ans=0;
        for(i=1;i<=n;i++)
        {
            double prc=price(a,b,c,d,i,p);
            mx=max(mx,prc);
            ans=max(ans,mx-prc);
        }
        cout<<fixed<<setprecision(9)<<ans<<endl;
    }
    return 0;
}
