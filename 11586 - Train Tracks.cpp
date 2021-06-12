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
int main()
{
    ll t;
    cin>>t;
    getchar();
    while(t--)
    {
        string a,word;
        ll male=0,female=0,cnt=0;
        getline(cin,a);
        stringstream ss;
        ss<<a;
        while(ss>>word)
        {
            cnt++;
            if(word=="MM")
                male++;
            else if(word=="FF")
                female++;
        }
        if(cnt>1 && male==female)
            cout<<"LOOP"<<endl;
        else
            cout<<"NO LOOP"<<endl;
    }
    return 0;
}
