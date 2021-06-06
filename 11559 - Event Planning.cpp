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
int main()
{
    fast;
    ll n,budget,hotel,week;
    while(cin>>n>>budget>>hotel>>week)
    {
        ll ans=budget+1,i,j,money,a;
        for(i=0;i<hotel;i++)
        {
            cin>>money;
            for(j=0;j<week;j++)
            {
                cin>>a;
                if(a>=n)
                    ans=min(ans,n*money);
            }
        }
        if(ans>budget)
            cout<<"stay home"<<endl;
        else
            cout<<ans<<endl;
    }
    return 0;
}
