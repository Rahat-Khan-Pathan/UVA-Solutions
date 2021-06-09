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
    string a;
    while(cin>>a)
    {
        ll n,i,j;
        map<ll,ll>zero,one;
        for(i=0;i<a.size();i++)
        {
            (a[i]=='1')? one[i]=one[i-1]+1 : zero[i]=zero[i-1]+1;
        }
        cin>>n;
        cout<<"Case "<<ts<<":"<<endl;
        ts++;
        for(i=0;i<n;i++)
        {
            ll x,y;
            cin>>x>>y;
            ll sz=y-x+1;
            if(zero[y]-zero[x-1]==sz || one[y]-one[x-1]==sz)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}
