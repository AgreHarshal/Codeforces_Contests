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
   int x,y,k;
   cin>>x>>y>>k;
   if(y<x){
    cout<<(x)<<endl;
   }else{
    if(x+k<y){
        cout<<x+k+2*(y-(x+k))<<endl;
    }else{
        cout<<y<<endl;
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