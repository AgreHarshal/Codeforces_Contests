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
        cin>> n;
        vector<int>arr(n);
        for(int i=0; i< n; i++){
            cin>>arr[i];
        }
        int curr_sum=0;
        int maxi=INT_MIN;
        for(int i=0; i<n ;i++){
            curr_sum+=arr[i];
                if(maxi<curr_sum){
                    maxi=curr_sum;
                }
                if(( i<n-1 && (abs(arr[i]%2)==abs(arr[i+1]%2)) )){
                    curr_sum= 0;
                }
                if(curr_sum <0){
                    curr_sum =0;
                }
        }
        cout<< maxi<<endl;

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