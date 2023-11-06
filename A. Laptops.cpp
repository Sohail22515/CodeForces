// I this question I have learn 1 new concept and and implementation of retunr 0
/* 
  The concept which I  have learned is of pair, pair is a set of data just like map, but i found it much easiesr to uses in comparision ot map.
retun 0 is used to end the function and at the end of this code you will found that how beautifully the return is used, if I would have to bsring the same output without return it would have taken more line and memory to do that. */



#include <utility>
#include<bits/stdc++.h>
 
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
    pair<int,int>pr[n];
    loop(i,0,n){
        cin>>pr[i].first>>pr[i].second;
    }
    sort(pr,pr+n);
    loo(n-1){
        if((pr[i].first<pr[i+1].first)&&(pr[i].second>pr[i+1].second)){
            cout<<"Happy Alex\n";
            return 0;
        }
        
    }
    cout<<"Poor Alex\n";
    return 0;
  }
