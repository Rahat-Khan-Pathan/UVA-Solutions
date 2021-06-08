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
ll divide(ll n)
{
    if(n<10)
        return n;
    ll x=0;
    while(n>0)
    {
        x+=n%10;
        n/=10;
    }
    return divide(x);
}
int main()
{
    string a,b;
    while(getline(cin,a) && getline(cin,b))
    {
        ll s1=0,s2=0,i;
        for(i=0;i<a.size();i++)
        {
            if(isalpha(a[i]))
            {
                s1+=tolower(a[i])-'a'+1;
            }
        }
        for(i=0;i<b.size();i++)
        {
            if(isalpha(b[i]))
            {
                s2+=tolower(b[i])-'a'+1;
            }
        }
        ll x=divide(s2);
        ll y=divide(s1);
        double ans;
        if(x==0 && y==0)
            ans=0.00;
        else
            ans=min(x,y)*100.0/max(x,y);
        cout<<fixed<<setprecision(2)<<ans;
        cout<<" %"<<endl;
    }
    return 0;
}
