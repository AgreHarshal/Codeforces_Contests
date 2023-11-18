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
   cin>>n;
   vector<int> arr(n);
        map<int, int> mp;
        for(int i=0; i< n; i++){
            cin>> arr[i];
           
        }
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int ans=0;
        for(auto i: mp){
            ans += ((i.second)*(i.second-1)/2);    
        }
        if(mp.find(1)!=mp.end() && mp.find(2)!= mp.end()){
            ans += (mp[1]*mp[2]);
        }
        cout<<ans<<endl;
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