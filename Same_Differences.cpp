#include<iostream>
#include<vector>
#include<cmath>
#include<wchar.h>
#include <cstdio> 
#include<algorithm>
#include<string>
#include<set>
#include<map>
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
  int main(){
    in(t);
    while(t--){
      ll int count=0;
      in(n);
      int arr[n];
    map<int,int>m; 
      loo(n){
        int x;
        cin>>x;
        x-=i;
        count=count+m[x];
        m[x]++;
 
      }
      cout<<count<<nl;
      
    
    }
 
 
  return 0;
  }
