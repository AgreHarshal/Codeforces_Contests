#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;
void precal()
{
}
int gcd(int a, int b)
{
   if (b == 0)
       return a;
   return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
void solve()
{
   int n,q;
   cin>>n>>q;
   for(int i=0;i<n-1;i++){
    cout<<i+1<<" "<<i+2<<endl;
   }
   int prev=n-1;
  for(int i=0;i<q;i++){
    int tp;
    cin>>tp;
    if(tp==n-1 && prev==n-1) {
        cout<<"-1 -1 -1"<<endl;
    }else{
   cout<<n<<" "<<prev<<" "<<tp<<endl;
   prev=tp;
    }
  }
   
   
}
int32_t main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   cout << fixed;
   cout << setprecision(10);
   precal();
   // solve();
   int tc;
   cin >> tc;
   for (int t = 1; t <= tc; t++)
   {
       // cout << 'CASE' << t << ':' ;
      solve();
   }
   return 0;
}