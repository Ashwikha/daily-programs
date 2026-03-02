#include<iostream>
#include<vector>
#include<map>
#include<limits>
#include<climits>
#include<string>
#include <algorithm>
using namespace std;
#define ll long long int 

void solve()
{
    int n;
    cin>>n;
    vector<tuple<int,int,int>> rd(n);
    ll remwt=0LL,pullpow=0LL;
    for(int i=0;i<n;i++){
            int w,s;
            cin>>w>>s;
            rd[i]=make_tuple(w+s,s,w);
            remwt+=w;
            }
            
            sort(rd.begin(),rd.end(),greater<>{});
            int ans=n;
            for(int i=0;i<n && pullpow<remwt;i++){
                    ans--;
                    remwt-=get<2>(rd[i]);
                    pullpow+=get<1>(rd[i]);
                    }
                    cout<<ans<<endl;
                    }
                    
                    
                    
int main() { 
    int t;
    cin>>t;
    while(t--) {
    	solve();
    }
    return 0;
}
