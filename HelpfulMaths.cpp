#include <bits/stdc++.h>
using namespace std;


int main(){
	string sum, new_string;
	string list = {'1', '2', '3'};


	cin>>sum;



	for(int i=0; i<list.length();i++){
		for(int j=0; j<sum.length(); j++){
			if (sum[j] == list[i]){
				new_string = new_string + list[i];
				if(sum.length() != new_string.length()){
					new_string += '+';
				}
			};
		};
	};


	cout<<new_string<<endl;
	
}


