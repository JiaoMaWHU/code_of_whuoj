// 01背包问题

#include <iostream>
using namespace std;
int main(){
	int dp[100001];
	int s[101],p[101];
	int num,value;
	while (cin>>num){
		for (int i=0;i<num;i++) cin>>s[i]>>p[i];
		cin>>value;
		for (int i=0;i<=value;i++) dp[i]=0;
		for (int i=0;i<num;i++)
			for (int j=value;j>=s[i];j--) 
				if(dp[j]<(dp[j-s[i]]+p[i])) dp[j]=dp[j-s[i]]+p[i];
		cout<<dp[value]<<endl;
	}
	return 0;
}
