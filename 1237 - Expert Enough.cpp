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
class car
{
public:
    string name;
    ll low,high;
};
void solve()
{
    ll n,low,high,i,j,c;
    string name,ans;
    cin>>n;
    car data[n+1];
    for(i=0;i<n;i++)
    {
        cin>>name>>low>>high;
        data[i].name=name;
        data[i].low=low;
        data[i].high=high;
    }
    ll q,x;
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>x;
        c=0;
        for(j=0;j<n;j++)
        {
            name=data[j].name;
            high=data[j].high;
            low=data[j].low;
            if(x<=high && x>=low)
            {
                ans=name;
                c++;
            }
        }
        if(c==1)
            cout<<ans<<endl;
        else
            cout<<"UNDETERMINED"<<endl;
    }
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
        if(t)
            cout<<endl;
    }
    return 0;
}
