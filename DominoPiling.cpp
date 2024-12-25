#include <bits/stdc++.h>
using namespace std;

int main(){
	int m,n;
	cin>>m>>n;
	int area = m * n;
	if((area)%2!=0){
		area -= 1;
	};
	cout<<area/2<<endl;

	return 0;
}