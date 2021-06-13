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
void solve()
{
    string a;
    cin>>a;
    stack<ll>s;
    ll i,ans=0,dif,past;
    for(i=0;i<a.size();i++)
    {
        if(a[i]=='\\')
            s.push(i);
        if(a[i]=='/' && s.size()>0)
        {
            past=s.top();
            s.pop();
            dif=i-past-1;
            ans+=dif+1;
        }
    }
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

