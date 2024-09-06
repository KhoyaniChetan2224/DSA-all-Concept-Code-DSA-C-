#include<iostream>
#include<math.h>
using namespace std;
int main()
{	
	// 1.Interger Reverse :
	/*int x;
	cin>>x;
	int ans=0;
	while(x!=0) {
		int digit=x%10;
		if((ans>INT_MAX/10) || (ans<INT_MIN/10)) {
			return 0;
		}
		ans=(ans*10)+digit;
		x=x/10;
	}
	cout << ans << endl;
	return ans;*/
	
	/*int n;
	cin>>n;
	if(n==0)
		return 1;
	int mask=0;
	while(n!=0) {
		mask = (mask << 1) | 1;
		n=n>>1;
	}
	int ans = (-n) & mask;
	return ans;*/
	
	int n;
	cin>>n;
	int ans=1;
	for(int i=0;i<=30;i++) {
		if(ans==n) {
			cout<<"true";
		}
		int ans = ans * 2;
	}
	return 0;
	
	
	
}