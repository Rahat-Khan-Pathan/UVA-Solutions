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
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define minus cout<<-1<<endl
using namespace std;
ll ts=1;
int main()
{
    fast;
    ll n;
    while(cin>>n)
    {
        if(n==0)break;
        ll i,x=0,y=0,a;
        for(i=0;i<n;i++)
        {
            cin>>a;
            if(a==0)
                y++;
            else
                x++;
        }
        cout<<"Case "<<ts<<": "<<x-y<<endl;
        ts++;
    }
    return 0;
}

