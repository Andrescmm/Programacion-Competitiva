#include<iostream>
#define ll long long
using namespace std;
 ll dp[60],n,k,ans[60],cnt[60];
  void dfs(ll k)
  {
      if(k==1) return;
      int item=-1;
      for(int i=n;i>=1;i--)
     {
         if(dp[i]>=k)
         {
             item=i;
             break;
         }
     }
     swap(ans[item],ans[item+1]);
     dfs(k-dp[item+1]);
 }
 int main()
 {
     cin>>n>>k;
     dp[n]=1; dp[n-1]=2;
     for(int i=n-2;i>=1;i--) dp[i]=dp[i+1]+dp[i+2];
     for(int i=1;i<=n;i++) ans[i]=i;
     dfs(k);
     printf("%d",ans[1]);
     for(int i=2;i<=n;i++) printf(" %d",ans[i]);
     puts("");
     return 0;
}