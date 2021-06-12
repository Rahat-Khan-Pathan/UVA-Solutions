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
int main()
{
    fast;
    ll l;
    while(cin>>l)
    {
        if(l==0) break;
        string a;
        cin>>a;
        ll d=-1,r=-1,ans=INT_MAX,dis=INT_MAX,i;
        for(i=0;i<a.size();i++)
        {
            if(a[i]=='R')
            {
                dis=(d==-1)? INT_MAX : abs(d-i);
                r=i;
            }
            if(a[i]=='D')
            {
                dis=(r==-1)? INT_MAX : abs(r-i);
                d=i;
            }
            if(a[i]=='Z')
            {
                dis=0;
            }
            ans=min(ans,dis);
        }
        cout<<ans<<endl;
    }
    return 0;
}
