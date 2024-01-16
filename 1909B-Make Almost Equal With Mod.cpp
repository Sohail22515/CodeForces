
// TRY IT ONE MORE TIME !!


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
//#include<bits/stdc++.h>
 
  #define loo(n)         for(int i=0;i<n;++i)
  #define loop(i,a,n)    for(int i=a;i<n;++i)
  #define lloo(n)        for(ll int i=0;i<n;++i)
  #define lloop(i,a,n)   for(ll int i=a;i<n;++i)
  #define all(v)         v.begin() , v.end()
  #define maxx(v)        *max_element(v.begin(),v.end())
  #define minn(v)        *min_element(v.begin(),v.end())
  #define ll             long long 
  #define in(x)           int x; cin>>x;
  #define pb             push_back
  #define nl             "\n"
  #define vi             vector<int>
  #define fast           ios::sync_with_stdio(false);cin.tie(NULL);
 
 
  using namespace std;

  void solve(){
    in(n);
    ll int arr[n];
    lloo(n){cin>>arr[i];}
    ll int ans=2;
    while(1){
      set<ll int>se;
      lloo(n){
        se.insert(arr[i]&1);
        arr[i]=(arr[i]>>1);
      }
      if(se.size()==2){cout<<ans<<nl; return;}
      
      ans*=2;
    }
  }

  int main(){
  fast
    in(t);
    while(t--){
      solve();
    }

  return 0;
  }
