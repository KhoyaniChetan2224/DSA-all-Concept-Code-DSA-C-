
#include<iostream>
using namespace std;
int main()
{
	/*int a = 4;
	int b = 6;
	cout<<" a&b " << (a&b) <<endl;
	cout<<" a|b " << (a|b)<<endl;
	cout<<" ~a " << (~a) <<endl;
	cout<<" a^b " << (a^b) <<endl;
	cout<<endl;*/

	
	/*cout<< (17>>1) <<endl;
	cout<< (17>>2) <<endl;
	cout<< (19<<1) <<endl;
	cout<< (21<<2) <<endl;
	cout<<endl;*/
	
	/*int i =7;
	cout<< (++i)<<endl;	//8, i=8
	cout<< (i++)<<endl;	//8, i=9
	cout<< (i--)<<endl;	//9, i=8
	cout<< (--i)<<endl;	//7, i=7
	cout<<endl;*/
	
	/*int a=1;
	int b=a++;	//1, a=2
	int c=++a;	//3, a=3
	cout<<b;	//1
	cout<<c;	//3*/
	
	/*int n;
	cout<<"Enter Value :";
	cin>>n;
	for(int i=1;i<=n;i++) {
		cout<<i<<endl;;
	}*/
	
	/*int n;
	cout<<"Enter Value :";
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	cout<<sum;*/
		
	/*int n;
	cout<<"Enter Value :";
	cin>>n;
	int a =0,b=1;
	cout<<a<<endl<<b<<endl;
	for(int i=1;i<=n;i++) {
		int nextnumber=a+b;
		cout<<nextnumber<<endl;
		a=b;
		b=nextnumber;
	}*/
	
	/*int n;
	cout<<"Enter Value :";
	cin>>n;
	bool isprime=1;
	for(int i=2;i<n;i++) {
		if(n%i==0) {
			isprime=0;
			break;
		}
	}
	if(isprime==0) {
		cout<<"not prime"<<endl;
	}else{
		cout<<"prime"<<endl;
	}*/
	
	
	//question : 1 --> Sbtract The Product and Sum of Digits an Integer
	/*int n= 234;
	int prod=1;
	int sum=0;
	while(n!=0) {
		int digit = n%10;
		prod*=digit;
		sum+=digit;
		n=n/10;
	}
	int ans=prod-sum;
	cout<<ans;*/
	
	// Question : 2 --> Number Of 1 Bits
	int n=5;
	int count=0;
	while(n!=0) {
		if(n&1) {
			count++;
		}
		n=n>>1;
	}
	cout<<count;
	
	return 0;
}
