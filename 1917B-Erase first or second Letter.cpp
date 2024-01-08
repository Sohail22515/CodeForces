#include<iostream>
#include<vector>
#include<cmath>
#include<wchar.h>
#include <cstdio> 
#include<algorithm>
#include<string>
#include<set>
#include<map>
#include <utility>
#include <cstring>
#include <iomanip>
//#include<bits/stdc++.h>
 
  #define loo(n)         for(int i=0;i<n;++i)
  #define loop(i,a,n)    for(int i=a;i<n;++i)
  #define lloo(n)        for(ll int i=0;i<n;++i)
  #define lloop(i,a,n)   for(ll int i=a;i<n;++i)
  #define all(v)         v.begin() , v.end()
  #define maxx(v)        *max_element(v.begin(),v.end())
  #define minn(v)        *min_element(v.begin(),v.end())
  #define ll             long long 
  #define in(x)          int x; cin>>x;
  #define pb             push_back
  #define nl             "\n"
  #define vi             vector<int>
  #define fast           ios::sync_with_stdio(false);cin.tie(NULL);
 
  using namespace std;

  void solve(){
    in(n);
    string s; cin>>s;
    set<char>st;
    int sum=0;
    for(int i=0;i<n;i++){
     st.insert(s[i]);
     sum+=st.size();
    }
    
    cout<<sum<<nl;
  }

  signed main(){
    fast;
    in(t);
    while(t--){
      solve();
    }
    return 0;
  }
