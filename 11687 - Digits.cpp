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
ll digit(ll n)
{
    if(n<10)
        return 1;
    ll x=0;
    while(n>0)
    {
        x++;
        n/=10;
    }
    return x;
}
int main()
{
    fast;
    string a;
    ll ar[105];
    while(cin>>a)
    {
        if(a=="END") break;
        stringstream s;
        s<<a;
        ll x,i;
        s>>x;
        ar[0]=x;
        for(i=1; ;i++)
        {
            ar[i]=digit(ar[i-1]);
            if(ar[i]==ar[i-1])
                break;
        }
        cout<<i<<endl;
    }
    return 0;
}
