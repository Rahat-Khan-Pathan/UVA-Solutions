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
    ll n,m;
    while(cin>>n>>m)
    {
        ll c,i,j,ans=0,x;
        for(i=0;i<n;i++)
        {
            c=1;
            for(j=0;j<m;j++)
            {
                cin>>x;
                if(x==0)
                    c=0;
            }
            if(c)
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
