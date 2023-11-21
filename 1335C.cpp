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
  #define in(x)          int x; cin>>x;
  #define pb             push_back
  #define nl             "\n"
  #define vi             vector<int>
 
 
  using namespace std;
  int main(){
    in(t);
    while(t--){
      in(n);
      int arr[n];
      map<int,int>mp;
      set<int>s;
      loo(n){
        cin>>arr[i];
        mp[arr[i]]++;
        s.insert(arr[i]);
      }
      int m=0;
      map<int, int>::iterator it = mp.begin();
      while(it!=mp.end()){
        int d=it->second;
        m=max(m,d);
        it++;
      }

      int number=s.size();
      int max=m;

      if(max==number){cout<<max-1<<nl;}
      else if(max>number){cout<<number<<nl;}
      else{cout<<max<<nl;}

    }

  
  return 0;
  }
