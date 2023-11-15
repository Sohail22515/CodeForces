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
    ll int n; cin>>n;
    ll int count=0,count2=0;
    ll int arr[n],s[n];
    for(ll int i=0;i<n;++i){
      cin>>arr[i];
      s[i]=arr[i];
    }
    sort(s,s+n);

    for(ll int i=0;i<n;++i){
      if(arr[i]==s[i]){
        count++;
      }
    }


    if(count==n){
      cout<<"yes\n"<<1<<" "<<1<<nl;
      return 0;
    }

    ll int l,r,seq=0;
    for(ll int i=0;i<n-1;i++){
      if(arr[i]>arr[i+1]){
        l=i;
        r=i;
        seq++;
        while(arr[i]>arr[i+1] && seq<=1){
          r++;
          i++;
        }
      }
    }
  
    //cout<<l<<" "<<r<<nl;

    sort(arr+l,arr+r+1);
    
  /*
    loo(n){
      cout<<arr[i]<<" ";
    }
    cout<<nl;
  */
  
    for(ll int i=0;i<n;++i){
      if(arr[i]==s[i]){
        count2++;
      }
    }


    if(count2==n){
      cout<<"yes\n"<<l+1<<" "<<r+1<<nl;
    }
    else{cout<<"no\n";}
    
    return 0;
  }
