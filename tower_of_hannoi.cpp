#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

void toh(int n,char A,char B,char C)
{
	if(n==1)
	{
		cout<<"disc transfer from "<<A<<" to "<<C<<endl;
		return ;
	}
	toh(n-1,A,C,B);
	toh(1,A,B,C);
	toh(n-1,B,A,C);


}

int main()
{
	int n;
	cout<<"enter the number of discs: ";
	cin>>n;
	char a='A';
	char b='B';
	char c='C';
	toh(n,a,b,c);
	return 0;
}
