#include<iostream>
#include<vector>
#include<cmath>
#include<wchar.h>
#include <cstdio> 
#include<algorithm>
#include<string>
#include<set>
 
//#include<bits/stdc++.h>
#define loo(n) for(int i=0;i<n;++i)
#define loop(i,a,n) for(int i=a;i<n;++i)
#define all(v) v.begin() , v.end()
#define ll long long 
#define in(x) int x; cin>>x;
#define pb push_back
#define nl "\n"
#define vi vector<int>
 
 
using namespace std;
int main(){
  in(n);
  int count1=0,count2=0,count3=0;
  int arr[n][3];
  loo(n){
    loop(j,0,3){
      cin>>arr[i][j];
    }
  }
  loo(n){
    loop(j,0,3){
      if(j==0){count1+=arr[i][j];}
      else if(j==1){count2+=arr[i][j];}
      else{count3+=arr[i][j];}
    }
  }
  //cout<<count1<<nl<<count2<<nl<<count3<<nl;
  if(count1==0 && count2==0 && count3==0){cout<<"YES\n";}
  else{cout<<"NO\n";}
  
  return 0;
}
