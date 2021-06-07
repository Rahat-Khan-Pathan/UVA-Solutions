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
    ll n;
    while(cin>>n)
    {
        string input[n+1],rujia="Rujia",word;
        ll i,k=0;
        string song[]={"Happy", "birthday", "to", "you"};
        for(i=0;i<n;i++)cin>>input[i];
        A:
        for(i=0;i<16;i++)
        {
            if(i==11)
                word=rujia;
            else
                word=song[i%4];
            cout<<input[k%n]<<": "<<word<<endl;
            k++;
        }
        if(k<n)
            goto A;
    }
    return 0;
}
