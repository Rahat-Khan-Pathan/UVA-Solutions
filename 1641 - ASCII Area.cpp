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
        ll i,j,c,ans=0,k=0;
        char x;
        for(i=1;i<=n;i++)
        {
            bool in=false;
            c=0;
            for(j=1;j<=m;j++)
            {
                cin>>x;
                if(x=='/' || x=='\\')
                {
                    k++;
                    in=!in;
                }
                else if(in)
                    ans++;
            }
            ans+=c;
        }
        cout<<ans+(k/2)<<endl;
    }
    return 0;
}
