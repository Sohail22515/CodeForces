
// TRY IT ONE MORE TIME !!


#include<iostream>
#include<vector>
#include<cmath>
#include<wchar.h>
#include <cstdio> 
#include<algorithm>
#include<numeric>
#include<string>
#include<set>
#include<map>
#include <utility>
#include <cstring>
//#include<bits/stdc++.h>
 
  #define loo(n)         for(int i=0;i<n;i++)
  #define loop(i,a,n)    for(int i=a;i<n;i++)
  #define lloo(n)        for(ll int i=0;i<n;i++)
  #define lloop(i,a,n)   for(ll int i=a;i<n;i++)
  #define lloos()        for(auto it=s.begin();it!=s.end();++it)
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
    ll int arr[n];
    loo(n){cin>>arr[i];}
    sort(arr,arr+n);
    vector<int>v;
    ll int i=0;
    while(arr[0]!=arr[n-1]){
      ll int avg=arr[0];
      v.pb(avg);
      arr[0]=(arr[0]+avg)/2;
      arr[n-1]=(arr[n-1]+avg)/2;
      i++;
    }
    cout<<i<<nl;
    if(i<=n){
      int s=v.size();
      loo(s){cout<<v[i]<<" ";}
      cout<<nl;
    }
    
  }
  
  int main(){
  fast
    in(t);
    while(t--){
      solve();
    }
  }
