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
  #define fast           ios::sync_with_stdio(false);cin.tie(NULL);
  
  using namespace std;
 
   
 
  int main(){
  fast
   in(t);
   while(t--){
    ll int n; cin>>n;
    // ll int x;
    vector<pair<ll int, ll int> >v;
    ll int arr[n];
    ll int arr1[n];
    ll int sarr[n];
    ll int sum[n];
    ll int ans[n];
    ll int soh[n];
    ll int s=0;
    lloo(n){
      cin>>arr[i];
      arr1[i]=i;
      sarr[i]=arr[i];
    }
    for (int i = 0; i < n; i++){
        v.push_back(make_pair(arr[i], arr1[i]));
    }
    // lloo(n){
    //   cout<<v[i].first<<" "<<v[i].second<<nl;
    // }
    sort(v.begin(), v.end());
    sort(sarr, sarr+n);
    lloo(n){
        s+=sarr[i];
        sum[i]=s;
      }
    ans[n-1]=n-1;
      for(ll int i=n-2;i>=0;i--){
        if(sum[i]>=sarr[i+1]){
          ans[i]=ans[i+1];
        }
        else{ans[i]=i;}
      }
      // lloo(n){cout<<ans[i]<<" ";}
      // cout<<nl;
      int j=0;
      lloo(n){
        soh[v[j].second]=ans[i];
        j++;
      }
      lloo(n){
        cout<<soh[i]<<" ";
      }
      cout<<nl;
 
   }
 
 
    return 0;
  }
