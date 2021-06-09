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
    ll n,m;
    while(cin>>n>>m)
    {
        if(n==0 && m==0) break;
        string a,b,ans;
        double money,saveMoney=INT_MAX;
        ll in,save=INT_MIN,cnt,i,j;
        getchar();
        for(i=0;i<n;i++)
        {
            getline(cin,a);
        }
        for(i=0;i<m;i++)
        {
            getline(cin,a);
            cin>>money>>in;
            getchar();
            for(j=0;j<in;j++)
            {
                getline(cin,b);
            }
            if(in>save)
            {
                save=in;
                saveMoney=money;
                ans=a;
            }
            else if(in==save && money<saveMoney)
            {
                saveMoney=money;
                ans=a;
            }
        }
        if(ts>1)
            cout<<endl;
        cout<<"RFP #"<<ts<<endl;
        ts++;
        cout<<ans<<endl;
    }
    return 0;
}
