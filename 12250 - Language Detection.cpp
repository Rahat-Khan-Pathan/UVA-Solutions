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
int main()
{
    fast;
    string t;
    while(cin>>t)
    {
        if(t=="#")
            break;
        if(t=="HELLO")
            cout<<"Case "<<ts<<": ENGLISH"<<endl;
        else if(t=="HOLA")
            cout<<"Case "<<ts<<": SPANISH"<<endl;
        else if(t=="HALLO")
            cout<<"Case "<<ts<<": GERMAN"<<endl;
        else if(t=="BONJOUR")
            cout<<"Case "<<ts<<": FRENCH"<<endl;
        else if(t=="CIAO")
            cout<<"Case "<<ts<<": ITALIAN"<<endl;
        else if(t=="ZDRAVSTVUJTE")
            cout<<"Case "<<ts<<": RUSSIAN"<<endl;
        else
            cout<<"Case "<<ts<<": UNKNOWN"<<endl;
        ts++;
    }
    return 0;
}
