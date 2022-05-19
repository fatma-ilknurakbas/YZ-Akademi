
#include <iostream>
using namespace std;
int main() {
	int point_alice=0,point_bob=0;
	int alice[3];
	int bob[3];
	for(int i=0;i<3;i++)
	{
		int a;
		cin>>a;
		alice[i]=a;
	}
	
	for(int i=0;i<3;i++)
	{
		int a;
		cin>>a;
		bob[i]=a;
	}
	for(int j=0;j<3;j++)
	{
		if(alice[j]>bob[j]){
			point_alice ++;
		}
		else if(alice[j]<bob[j]){
			point_bob ++;
		}
	}
	cout<<point_alice<<" "<<point_bob;
	return 0;
}
