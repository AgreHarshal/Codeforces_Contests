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
   vector<int>arr(n);
   
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int global_res=0;
   for(int k=1;k<=n/2;k++){
    if(n%k==0){
vector<int>temp;
int sum=arr[0];
for(int i=1;i<n;i++){
    if(i%k==0){
     temp.push_back(sum);
     sum=arr[i];
    }else{
        sum+=arr[i];
    }
}
temp.push_back(sum);
int maxi=*max_element(temp.begin(),temp.end());
int mini=*min_element(temp.begin(),temp.end());
global_res=max(global_res,maxi-mini);
    }
   }
   
   cout<<global_res<<endl;
   
   
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