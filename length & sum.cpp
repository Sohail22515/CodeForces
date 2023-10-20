#include <algorithm>
#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <ios>
#include<set>

//#include<bits/stdc++.h>
#define loo(n) for(int i=0;i<n;++i)
#define loop(i,a,n) for(int i=a;i<n;++i)
#define all(v) v.begin() , v.end()
#define maxx(v) *max_element(v.begin(),v.end())
#define minn(v) *min_element(v.begin(),v.end())
#define ll long long 
#define in(x) int x; cin>>x;
#define pb push_back
#define nl "\n"
#define vi vector<int>


using namespace std;


int sum_of_digit(int n, int val)
{
    if (n < 10) {
        val = val + n;
        return val;
    }
    return sum_of_digit(n / 10, (n % 10) + val);
}

int main(){
    in(l);
    in(s);
    vector<int>v;
    ll int irange=pow(10,l-1);
    ll int mrange=pow(10,l);
    cout<<irange<<" "<<mrange;
    for(ll int i=irange;i<mrange;++i){
        ll int result = sum_of_digit(i, 0);
        if(result==s){v.pb(i);}

    }
    if(v.empty()){
        cout<<-1<<" "<<-1<<nl;
    }
    else{
    cout<<minn(v)<<" "<<maxx(v);
    }
    
    return 0;
}
	
