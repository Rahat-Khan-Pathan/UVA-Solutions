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
    ll t;
    while(cin>>t)
    {
        if(t==0)
            break;
        ll n,m,a,b;
        cin>>n>>m;
        while(t--)
        {
            cin>>a>>b;
            if(a==n || b==m)
                cout<<"divisa"<<endl;
            else if(a>n && b>m)
                cout<<"NE"<<endl;
            else if(a<n && b>m)
                cout<<"NO"<<endl;
            else if(a<n && b<m)
                cout<<"SO"<<endl;
            else
                cout<<"SE"<<endl;
        }
    }
    return 0;
}

