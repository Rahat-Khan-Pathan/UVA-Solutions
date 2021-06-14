
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
    ll cards[]={1,10,100,1000,10000};
    while(cin>>n>>m)
    {
        ll a,b,i,j,now,ans=0,s,x,save=0;
        for(i=0;i<m;i++)
        {
            cin>>b>>a;
            s=0;
            for(j=1;j<n;j++)
            {
                cin>>x;
                s+=x;
            }
            if(s+a<=b)
                save+=a;
            now=0;
            for(j=0;j<5;j++)
            {
                if(cards[j]+s<=b)
                    now=cards[j];
            }
            ans+=now;
        }
        cout<<ans-save<<endl;
    }
    return 0;
}
