
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
int main()
{
    fast;
    ll t,sum=0;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        ll x;
        if(a=="report")
            cout<<sum<<endl;
        else
        {
            cin>>x;
            sum+=x;
        }
    }
    return 0;
}
