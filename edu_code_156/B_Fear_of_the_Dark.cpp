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
   int px,py,ax,ay,bx,by;
   cin>>px>>py>>ax>>ay>>bx>>by;
    double dis_bet_pt=sqrt(pow(ax-bx,2)+pow(ay-by,2));
    double mini_dis_with_orig_a=sqrt(pow(ax,2)+pow(ay,2));
    double mini_dis_with_orig_b=sqrt(pow(bx,2)+pow(by,2)); 
    double mini_dis_with_pt_a=sqrt(pow(ax-px,2)+pow(ay-py,2));
    double mini_dis_with_pt_b=sqrt(pow(bx-px,2)+pow(by-py,2));
    double maxi_a=max(mini_dis_with_orig_a,mini_dis_with_pt_a);
    double maxi_b=max(mini_dis_with_orig_b,mini_dis_with_pt_b);
    double maxi_orig=min(mini_dis_with_orig_a,mini_dis_with_orig_b);
    double maxi_pt=min(mini_dis_with_pt_a,mini_dis_with_pt_b);
   if(mini_dis_with_orig_a<dis_bet_pt/2 && mini_dis_with_pt_a<(dis_bet_pt/2)){
    cout<<maxi_a<<endl;
    return;
   }
    if(mini_dis_with_orig_b<dis_bet_pt/2 && mini_dis_with_pt_b<dis_bet_pt/2){
    cout<<maxi_b<<endl;
    return;
   }
   double maxi=max(maxi_orig,maxi_pt);
   if(maxi>(dis_bet_pt/2)){
    cout<<maxi<<endl;
   }else{
    cout<<dis_bet_pt/2<<endl;
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