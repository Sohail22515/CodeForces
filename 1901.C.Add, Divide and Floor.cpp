
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
    ll int j=0;
    while(arr[n-1]!=arr[0]){
      arr[n-1]=(arr[n-1]+arr[0])/2;
      j++;
    }
    cout<<j<<nl;
    if(j<=n){
      loo(j){cout<<arr[0]<<" ";}
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
