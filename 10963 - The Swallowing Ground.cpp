
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
void solve()
{
    ll n,i,a,b;
    cin>>n;
    cin>>a>>b;
    ll df=abs(a-b);
    bool ans=true;
    for(i=1; i<n; i++)
    {
        cin>>a>>b;
        if(abs(a-b)!=df)
        {
            ans=false;
        }
    }
    if(ans)
        yes;
    else
        no;
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
        if(t)
            cout<<endl;
    }
    return 0;
}
