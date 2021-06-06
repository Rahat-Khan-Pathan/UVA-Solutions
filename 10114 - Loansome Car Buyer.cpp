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
    ll month,n;
    double downPayment,totalMoney;
    while(cin>>month>>downPayment>>totalMoney>>n)
    {
        if(month<=0)
            break;
        ll x,i;
        double percant;
        double pay=totalMoney/(double)month;
        double a[1005]={0};
        for(i=0;i<n;i++)
        {
            cin>>x>>percant;
            a[x]=percant;
        }
        double currentMoney=totalMoney;
        totalMoney+=downPayment;
        totalMoney-=(totalMoney*a[0]);
        percant=a[0];
        for(i=1;i<=month;i++)
        {
            if(totalMoney>currentMoney)
            {
                break;
            }
            if(a[i]>0) percant=a[i];
            currentMoney-=pay;
            totalMoney-=(totalMoney*percant);
        }
        i--;
        (i==1)? cout<<i<<" month"<<endl : cout<<i<<" months"<<endl;
    }
    return 0;
}
