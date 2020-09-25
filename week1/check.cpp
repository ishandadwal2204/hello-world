#include <bits/stdc++.h>
using namespace std;
int main(){
	// float f=0.7;
	// if(f){
	// 	cout<<"shi j";
	// }
	// else{
	// 	cout<<"galat ho gya";
	// }
	for(int i=0;i<20;i++){
		switch(i){
			case 0:
			i+=5;
			cout<<"case 0";
			cout<<"updated i "<<endl<<i<<endl;
			case 1:
			i+=2;
			cout<<"case 1";
			cout<<"updated i "<<endl<<i<<endl;
			case 5:
			i+=5;
			cout<<"case 5";
			cout<<"updated i "<<endl<<i<<endl;
			default:
			i+=4;
			cout<<"case default";
			cout<<"updated i "<<endl<<i<<endl;
			break;

		}
		cout<<i<<endl;
	}
	return 0;

}