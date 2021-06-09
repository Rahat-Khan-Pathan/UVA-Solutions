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
ll cnt=0;
void solve()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    if(((a<=56 && b<=45 && c<=25) || a+b+c<=125) && d<=7)
        cnt++,cout<<1<<endl;
    else
        cout<<0<<endl;
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
        solve();
    cout<<cnt<<endl;
    return 0;
}
