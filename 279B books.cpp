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
    ll int n,t,j=-1;
    ll sum=0,ans=0;
    cin>>n>>t;
    ll int arr[n];
    loo(n){cin>>arr[i];}
    loo(n){
        if(sum+arr[i]<=t){
            sum+=arr[i];
        }
        else{
            sum+=arr[i];
            while(sum>t){
                j++;
                sum-=arr[j];
            }
        }
        ans=max(ans,i-j);
    }
    cout<<ans<<nl;
    return 0;
}
