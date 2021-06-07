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
    ll n,c=0;
    while(cin>>n)
    {
        string name[n+1],a;
        ll i,money,person,j,even;
        map<string,ll>give,take;
        for(i=0;i<n;i++)
        {
            cin>>name[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>a>>money>>person;
            even=(person==0)? 0 : money/person;
            give[a]+=even*person;
            for(j=0;j<person;j++)
            {
                cin>>a;
                take[a]+=even;
            }
        }
        if(c)
        {
            cout<<endl;
        }
        c++;
        for(i=0;i<n;i++)
        {
            cout<<name[i]<<" "<<take[name[i]]-give[name[i]]<<endl;
        }
    }
    return 0;
}
