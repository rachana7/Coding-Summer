#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
char A[100];
void binary(int n)
{
	if(n<1)
	cout<<A<<endl;
	else
	{
		A[n-1]='0';
		binary(n-1);
		//count++;
		A[n-1]='1';
		binary(n-1);
		//count++;
	}

}

/*void k_string(int n,int k)
{
	if(n<1)
	cout<<A<<endl;
	else
	{
		for(int j=0;j<k;j++)
		{
			A[n-1]=j;
			k_string(n-1,k);
		}
	}
}
*/
int main()
{
	int n;
	cout<<"enter the number ";
	cin>>n;
	binary(n);
	cout<<endl<<"************"<<endl;
	//int k;
	//cin>>k;
	//k_string(n,k);
	//cout<<"count is :"<<count<<endl;
	return 0;
}
