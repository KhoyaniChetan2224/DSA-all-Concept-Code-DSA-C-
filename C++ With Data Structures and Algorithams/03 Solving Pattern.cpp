#include<iostream>
using namespace std;

int main()
{
	/*Patten : 1 --> 123
					 123
					 123*/
	/*int n;
	cin>>n;
	int i=1;
	while(i<=n)
	{
		int j=1;
		while(j<=n)
		{
			cout<<j;
			j++;
		}
		cout<<endl;
		i++;
	}*/
	
	/* Reverse Patten : 2 -->321
							 321
							 321*/
	/*int n;
	cin>>n;
	int i=1;
	while(i<=n)
	{
		int j=1;
		while(j<=n)
		{
			cout<<n-j+1;
			j++;
		}
		cout<<endl;
		i++;
	}*/
	
	/*Patten : 3 --> 123
					 456
					 789*/
	/*int n;
	int i=1;
	int count=1;
	cin>>n;
	while(i<=n) {
		int j=1;
		while(j<=n) {
			cout<<count;
			count+=1;
			j++;
		}
		cout<<endl;
		i++;
	}*/
	
	/*Patten : 4 --> *
					 **
					 ***
					 ****
	*/
	/*int n;
	cin>>n;
	int row=1;
	while(row<=n) {
		int col=1;
		while(col<=row) {
			cout<<"*";
			col++;
		}
		cout<<endl;
		row++;
	}*/
	
	/*patton : 4 --> 1
					 22
					 333
					 4444*/
	/*int n;
	cin>>n;
	int row=1;
	while(row<=n) {
		int col=1;
		while(col<=row) {
			cout<<row;
			col++;
		}
		cout<<endl;
		row++;
	}*/
	
	/*Patten : 5 --> 1
					 23
					 456
					 78910*/
	/*int n;
	cin>>n;
	int count=1;
	int row=1;
	while(row<=n) {
		int col=1;
		while(col<=row) {
			cout<<count;
			count=count+1;
			col++;
		}
		cout<<endl;
		row++;
	}*/
	
	/*patten : 6 --> 1
					 23
					 345
					 4567*/
	/*int n;
	cin>>n;
	int row=1;
	while(row<=n) {
		int col=1;
		int value=row;
		while(col<=row) {
			cout<<value;
			value=value+1;
			col++;
		}
		cout<<endl;
		row++;
	}*/
	/*int n;
	cin>>n;
	int row=1;
	while(row<=n) {
		int col=1;
		while(col<=row) {
			cout<< row+col-1;
			col++;
		}
		cout<<endl;
		row++;
	}*/
	
	/*Patten : 7 1
				 21
				 321
				 4321*/
	/*int n;
	cin>>n;
	int row=1;
	while(row<=n)  {
		int col=1;
		while(col<=row) {
			cout<< row-col+1<<" ";
			col++;
		}
		cout<<endl;
		row++;
	}*/
	
	/*Patten : 8 --> AAA
					 BBB
					 CCC
	*/
	/*int n;
	cin>>n;
	int row=1;
	while(row<=n) {
		int col=1;
		while(col<=n) {
			char ch ='A'+row-1; 
			cout<<ch;
			col++;
		}
		cout<<endl;
		row++;
	}*/
	
	/*patten : 9 --> ABC
					 ABC
					 ABC*/
	/*int n;
	cin>>n;
	int row=1;
	while(row<=n) {
		int col=1;
		while(col<=n) {
			char ch='A'+col-1;
			cout<<ch;
			col++;
		}
		cout<<endl;
		row++;
	}*/
	
	/*patten : 10 --> ABC
					  DEF
					  GHI*/
	/*int n;
	cin>>n;
	int row=1;
	char ch='A';
	while(row<=n) {
		int col=1;
		while(col<=n) {
			cout<<ch;
			ch=ch+1;
			col++;
		}
		cout<<endl;
		row++;
	}*/
	
	/*patten : 11 --> ABC
					  BCD
					  CDE*/
	/*int n;
	cin>>n;
	int row=1;
	while(row<=n) {
		int col=1;
		while(col<=n) {
			char ch='A'+row+col-2;
			cout<<ch;
			col++;
		}
		cout<<endl;
		row++;
	}*/
	
	/*patten : 12 --> A
					  BB
					  CCC*/
	/*int n;
	cin>>n;
	int row=1;
	while(row<=n) {
		int col=1;
		while(col<=row) {
			char ch='A'+row-1;
			cout<<ch;
			ch=ch+1;
			col++;
		}
		cout<<endl;
		row++;
	}*/
	
	/* patten : 13 --> A
					   BC
					   DEF
					   GHIJ*/
	/*int n;
	cin>>n;
	int row=1;
	char ch = 'A';
	while(row<=n) {
		int col=1;
		while(col<=row) {
			cout<<ch;
			ch+=1;
			col++;
		}
		cout<<endl;
		row++;
	}*/
	
	/* patten : 14 --> A
					   BC
					   CDE
					   DEFG*/
	/*int n;
	cin>>n;
	int row=1;
	while(row<=n) {
		int col = 1;
		while(col<=row) {
			char ch= ('A' + row + col - 2);
			cout<<ch;
			col++;
		}
		cout<<endl;
		row++;
 	}*/
 	
 	/* patten : 15 --> D
	 				   CD
					   BCD
					   ABCD*/
	/*int n;
	cin>>n;
	int row=1;
	while(row<=n) {
		int col = 1;
		char ch= ('A' + n - row);
		while(col<=row) {
			cout<<ch;
			ch+=1;
			col++;
		}
		cout<<endl;
		row++;
 	}*/
	
	/* patten : 16 --> *
					  **
					 ***
					****
	*/
	/*int n;
	cin>>n;
	int row=1;
	while(row<=n) {
		int space=n-row;
		while(space) {
			cout<<" ";
			space-=1;
		}
		int col=1;
		while(col<=row) {
			cout<<"*";
			col++;
		}
		cout<<endl;
		row++;
	}*/
	
	/* patten : 17 --> ****
					   ***
					   **
					   *
	*/
	/*int n;
	cin>>n;
	int row=1;
	while(row<=n) {
		int col=1;
		while(col<=(n-row+1)) {
			cout<<"*";
			col++;
		}
		cout<<endl;
		row++;
	}*/
	
	/* patten : 18 --> ****
						***
						 **
						  *
	*/
	/*int n;
	cin>>n;
	int row=1;
	while(row<=n) { 
		int space = row - 1;
		while(space) {
			cout<<" ";
			space-=1;
		}
		int col = 1;
		while(col<=(n-row+1)) {
			cout<<"*";
			col++;
		}
		cout<<endl;
		row++;
	}*/
	
	/* patten : 19 --> 1111
						222
						 33
						  4
	*/
	/*int n;
	cin>>n;
	int row=1;
	while(row<=n) { 
		int space = row - 1;
		while(space) {
			cout<<" ";
			space-=1;
		}
		int col = 1;
		while(col<=(n-row+1)) {
			cout<<row;
			col++;
		}
		cout<<endl;
		row++;
	}*/
	
	/* patten : 20 -->    1
						 22
						333
					   4444
	*/
	/*int n;
	cin>>n;
	int row=1;
	while(row<=n) { 
		int space = n - row;
		while(space) {
			cout<<" ";
			space-=1;
		}
		int col = 1;
		while(col<=row) {
			cout<<row;
			col++;
		}
		cout<<endl;
		row++;
	}*/
	
	/* patten : 21 -->    1
						 121
						12321
					   1234321
	*/
	/*int n;
	cin>>n;
	int row=1;
	while(row<=n) {
		int space = n - row;
		while(space) {
			cout<<" ";
			space-=1;
		}
		int col=1;
		while(col<=row) {
			cout<<col;
			col++;
		}
		int start=row-1;
		while(start) {
			cout<<start;
			start--;
		}
		cout<<endl;
		row++;
	}*/
	
	/* patten : 22 -->  [Dabangg]
				1234554321
				1234**4321
				123****321
				12******21
				1********1
	*/
	int n;
	cin>>n;
	int row=1;
	while(row<=n) {
		int col=1;
		while(col<=(n-row+1)) {
			cout<<col;
			col++;
		}
		col=1;
		while(col<=(row-1)) {
			cout<<"*";
			col++;
		}
		col=1;
		while(col<=(row-1)) {
			cout<<"*";
			col++;
		}
		col = 1;
		while(col<=(n-row+1)) {
			cout<<n-row+1;
			col++;
		}
		cout<<endl;
		row++;
	}
	
	
	
	
	
	
	return 0;
}