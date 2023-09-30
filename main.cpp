#include <iostream>

int inc_1(int &n,int k)
{
	for (int i=1;i<=k;i++)
		n++;
}


using namespace std;
int main(){
	int n,k;

	cin>>n;
	cin>>k;

	
	cout<<n;
}