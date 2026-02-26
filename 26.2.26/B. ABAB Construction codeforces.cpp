#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define ll long long int

void solve()
{
  string s;
  int n;
  cin>>n>>s;
  if(n&1 && s[0]=='b'){
    cout<<"NO"<<endl; return;
   }
            int i=(n&1)?1:0;
            for(;i<n;i+=2)
            {
              if(s[i]==s[i+1] && s[i]!='?')
                  {
                    cout<<"NO"<<endl; return;
                  }
            }
            cout<<"YES"<<endl;
}
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
int tc=1;
cin>>tc;
while(tc--) solve();
}
