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
void solve()
{
    string a;
    cin>>a;
    if(a.size()==5)
        cout<<3<<endl;
    else
    {
        if((a[0]=='o' && a[1]=='n') || (a[0]=='o' && a[2]=='e') || (a[1]=='n' && a[2]=='e'))
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }
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

