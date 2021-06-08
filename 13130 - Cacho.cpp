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
ll ts=1;
int main()
{
    fast;
    ll n=5,x;
    cin>>x;
    while(x--)
    {
        ll i=0,a[n+1],c=0;
        for(i=0;i<n;i++)cin>>a[i];
        for(i=1;i<n;i++)
        {
            if(a[i]!=a[i-1]+1)
            {
                c=1;
                break;
            }
        }
        (c==0)? cout<<"Y"<<endl : cout<<"N"<<endl;
    }
    return 0;
}
