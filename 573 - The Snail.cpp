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
#define pi pair<ll,ll>
#define vpair vector<pair<ll,ll> >
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define minus cout<<-1<<endl
using namespace std;
int main()
{
    double height,up,down,decrease;
    while(cin>>height>>up>>down>>decrease)
    {
        if(height==0)
            break;
        decrease=(up*decrease)/100;
        ll ans=0,c=0;
        double total=0;
        while(1)
        {
            ans++;
            total+=up;
            if(up)up-=decrease;
            if(total>height)
                break;
            total-=down;
            if(total<0)
            {
                c=-1;
                break;
            }
        }
        (c==-1)? cout<<"failure on day "<<ans<<endl : cout<<"success on day "<<ans<<endl;
    }
    return 0;
}
