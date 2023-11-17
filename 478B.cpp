#include<bits/stdc++.h>
 
  #define  loo(n)        for(int i=0;i<n;++i)
  #define  loop(i,a,n)   for(int i=a;i<n;++i)
  #define  all(v)        v.begin() , v.end()
  #define  maxx(v)       *max_element(v.begin(),v.end())
  #define  minn(v)       *min_element(v.begin(),v.end())
  #define  ll            long long 
  #define  in(x)         int x; cin>>x;
  #define  pb            push_back
  #define  nl            "\n"
  #define  vi            fvector<int>
 
ll int math(ll int x){
  return (x*(x+1))/2;
}
 
using namespace std;
  
 
int main() {
  ll int n,m;
  cin>>n>>m;
  ll int y=n/m;
  ll int r=n%m;
  ll int min=((math(y-1))*(m-r))+r*(math(y));
  ll int max=math(n-m);
  cout<<min<<" "<<max<<nl;
  
	return 0;
}
 
