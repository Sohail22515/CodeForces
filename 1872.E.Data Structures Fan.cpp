
// TRY IT ONE MORE TIME !!


#include <iomanip>
#include<iostream>
#include <pthread.h>
#include <sys/types.h>
#include<vector>
#include<cmath>
#include<wchar.h>
#include<cstdio> 
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
  #define in(x)          int x; cin>>x;
  #define pb             push_back
  #define nl             "\n"
  #define vi             vector<int>
  #define fast           ios::sync_with_stdio(false);cin.tie(NULL);

 
 
  using namespace std;
  
  void solve(){
    ll int n,o,f,l;
    cin>>n;
    ll int a[n];
    ll int x[n+1]; x[0]=0;
    ll int ox=0; // xor of all terms with 0 in string
    ll int lx=0; // xor of all terms with 1 in string
    ll int xo=0;
    lloo(n){cin>>a[i];}
    string s; cin>>s;
    for(ll int i=1;i<=n;i++){
      x[i]=xo^a[i-1];
      xo=xo^a[i-1];
    }
    lloo(n){
      if(s[i]=='0'){ox=ox^a[i];}
      else{lx=lx^a[i];}
    }



    ll int q; cin>>q;
    while(q--){
      cin>>o;
      if(o==1){
        cin>>f>>l;
        ll int nx=x[l]^x[f-1];
        ox=ox^nx;
        lx=lx^nx;
      }
      else{
        cin>>f;
        if(f==0){cout<<ox<<" ";}
        else{cout<<lx<<" ";}
      }

      
    }
    cout<<nl;
  }
  
  int main(){
  fast
  in(t);
  while(t--){
   solve();
  }
  return 0;
  }
