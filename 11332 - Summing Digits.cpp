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
#define yes cout<<"yes"<<endl
#define no cout<<"no"<<endl
#define minus cout<<-1<<endl
using namespace std;
ll solve(ll n)
{
    if(n<10)
        return n;
    ll ans=0;
    while(n>0)
    {
        ans+=n%10;
        n/=10;
    }
    return solve(ans);
}
int main()
{
    fast;
    ll n;
    while(cin>>n)
    {
        if(n==0)
            break;
        cout<<solve(n)<<endl;
    }
    return 0;
}
