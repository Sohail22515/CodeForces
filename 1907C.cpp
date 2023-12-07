#include<bits/stdc++.h>
 
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
  
  using namespace std;
 
   
 
  int main(){
    in(t);
    while(t--){
      ll int fre=0;
      ll int n; cin>>n;
      string s; cin>>s;
      map<char, ll int>mp;
      lloo(n){
        mp[s[i]]++;
        fre=max(fre,mp[s[i]]);
      }
    
      if(fre>(n/2)){
        cout<<n-((n-fre)*2)<<nl;
      }
    
      else{
        cout<<n%2<<nl;
      }
      
 
    }
    
   
      
    return 0;
  }
