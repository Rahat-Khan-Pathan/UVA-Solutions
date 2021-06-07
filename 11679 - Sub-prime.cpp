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
#define pi pair<ll,ll>
#define vpair vector<pair<ll,ll> >
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define minus cout<<-1<<endl
using namespace std;
int main()
{
    fast;
    ll bank,print;
    while(cin>>bank>>print)
    {
        if(bank==0 && print==0) break;
        ll a,b,c,i,reserve[bank+1];;
        for(i=1;i<=bank;i++)
        {
            cin>>a;
            reserve[i]=a;
        }
        for(i=1;i<=print;i++)
        {
            cin>>a>>b>>c;
            reserve[b]+=c;
            reserve[a]-=c;
        }
        bool ans=true;
        for(i=1;i<=bank;i++)
        {
            if(reserve[i]<0)
            {
                ans=false;
                break;
            }
        }
        if(ans)cout<<"S"<<endl;
        else cout<<"N"<<endl;
    }
    return 0;
}
