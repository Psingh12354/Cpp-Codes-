#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string n;
	cout<<"Enter the string :" <<endl;
	cin>>n;
	reverse(n.begin(),n.end());
	cout<<n;
	return 0;
}
