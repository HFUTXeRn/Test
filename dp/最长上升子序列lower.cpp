#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
#define Max 1005
#define INF 9999999
int a[Max],dp[Max];
int main()
{
    int n;
    //freopen("in.txt","r",stdin);
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
            cin>>a[i];
        fill(dp,dp+Max,INF);
        for(int i=0;i<n;i++)
            *lower_bound(dp,dp+n,a[i])=a[i];
        cout<<lower_bound(dp,dp+n,INF)-dp<<endl;
    }
    return 0;
}