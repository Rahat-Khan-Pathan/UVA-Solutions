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
void solve()
{
    string a;
    cin>>a;
    ll n=a.size();
    if((n==1 && (a[0]=='1' || a[0]=='4')) || (n==2 && a[0]=='7' && a[1]=='8'))
        cout<<"+"<<endl;
    else if(n>=3 && a[n-2]=='3' && a[n-1]=='5')
        cout<<"-"<<endl;
    else if(n>=3 && a[0]=='9' && a[n-1]=='4')
        cout<<"*"<<endl;
    else
        cout<<"?"<<endl;
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
