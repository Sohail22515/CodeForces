
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
// #include<bits/stdc++.h>
 
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
    string s,a="",b;
    cin>>s; 
    ll l=(ll)s.size();
    int f=0;
    for(ll i=0;i<l-1;i++){
      a+=s[i];
      b=s.substr(i+1,l-(i+1));
      if(b[0]=='0'){
        continue;
      }
      else{
        if(stoi(a)<stoi(b)){
          cout<<a<<" "<<b<<nl;
          f++;
          break;
        }
      }
    }
    if(f==0){cout<<-1<<nl;}
    

  }

  signed main(){
  fast
    in(t);
    while(t--){
      solve();
    }
  }
