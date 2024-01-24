
// TRY IT ONE MORE TIME !!
  
#include <iomanip>
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
  ll int n;
  cin>>n;
  ll int arr[n];
  ll int lcount=0;
  ll int ans=0;
  lloo(n){cin>>arr[i];}
  set<int>f;
  set<int>l;
  set<int>s;
  map<int,int>m;
 
  lloo(n){
    if(s.count(arr[i])==0){
      f.insert(i);
    }
    s.insert(arr[i]);
    m[arr[i]]=i;
  }
 
  for (auto it = m.begin(); it != m.end(); it++){
    l.insert(it->second);
  }
  
  for(int i=n-1;i>=0;i--){
    if(l.count(i)==1){lcount++;}
    if(f.count(i)==1){ans+=lcount;}
  }
    
    cout<<ans<<nl;
}
 
int main() {
  fast
  in(t);
  while(t--){
   solve();
  }
   
  return 0;
}
 
