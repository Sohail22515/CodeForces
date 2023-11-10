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
  string s; cin>>s;
  in(n);
  int f,l,count=0;
  int arr[100005];
  arr[0]=0;
  for(int i=1;i<s.size();++i){
    if(s[i]==s[i-1]){
      count++;
    }
    arr[i]=count;
  }
  loo(n){
    cin>>f>>l;
    cout<<arr[l-1]-arr[f-1]<<nl;
  }
 
   
    return 0;
  }
