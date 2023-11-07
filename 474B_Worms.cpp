// In this code i have learn a new funtion lower_bond(first,last,value)
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
    in(n);
    int s=0;
    int arr[n],sum[n];
    loo(n){
        cin>>arr[i];
        s=s+arr[i];
        sum[i]=s;
        }
    in(m)
    int mrr[m];
    loo(m){
        cin>>mrr[i];
        }
    loo(m){
        int x=mrr[i];
        cout<<lower_bound(sum,sum+n,x)-sum+1<<endl; // -sum+1 is used to gives the output in integer
    }  
 
    return 0;
  }
