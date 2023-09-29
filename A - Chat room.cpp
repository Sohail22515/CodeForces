#include <algorithm>
#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <ios>
#include <cstdlib>
#include<string>
 
 
 
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
string s;
vector<char>n;
cin>>s;
//set<string>ans; connot be taken in use as "hello" contains 2 times 'l' 
 
loo(s.size()){
    s[i]=tolower(s[i]);
}
/*
loo(s.size()){
    if(s[i]=='h' || s[i]=='e' || s[i]=='l' || s[i]=='o'){
        n.pb(s[i]);
    }
}
*/
string c="hello";
int j=0;
for(int i=0;i<s.size();++i){
    if(s[i]==c[j]){
        j++;
    }
}
 //cout<<j<<nl;
if(j==5){cout<<"YES\n";}
else{cout<<"NO\n";}
 
return 0;
}
