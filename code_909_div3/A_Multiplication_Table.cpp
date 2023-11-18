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
   int n;
   int x;
   cin>>n;
   cin>>x;
   int res=0;
   for(int i=1;i*i<x; i++){
        if(x%i==0 && i<=n && x/i<=n){
            res++;
        }
   }
   int temp=sqrt(x);

   res*=2;
   if(temp*temp==x && temp<=n){
res++;
   }
   cout<<res<<endl;
}
int32_t main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   cout << fixed;
   cout << setprecision(10);
   precal();
   solve();
//    int tc;
//    cin >> tc;
//    for (int t = 1; t <= tc; t++)
//    {
//        // cout << 'CASE' << t << ':' ;
//       solve();
//    }
   return 0;
}