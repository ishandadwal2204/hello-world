#include <bits/stdc++.h>
using namespace std;
bool makeset(vector<int> arr){
	int init=arr.size();
	for(int i=0;i<arr.size();i++){
	 	for(int j=i+1;j<arr.size();j++){
			int diff=arr[j]-arr[i];
			bool c=(std::find(arr.begin(), arr.end(), diff) != arr.end());
			if(c==false){
				cout<<diff<<endl;
				arr.push_back(diff);
			}
		}
	}
	int final=arr.size();
	if(init==final){
		for(int i=0;i<arr.size();i++){
		cout<<arr[i];
		}
	cout<<endl;
		return true;
	}
	else return false;
}
void check(vector<int> arr){
	// set<int> s;
	// for(int i=0;i<arr.size();i++){
	// 	s.insert(arr[i]);
	// }
	bool c=false;
	while(!c){
		bool c=makeset(arr);
	}
	// for(int i=0;i<arr.size();i++){
	// 	cout<<arr[i];
	// }
	// cout<<endl;
	// for(int i=0;i<arr.size();i++){
	// 	for(int j=i+1;j<arr.size();j++){
	// 		int diff=arr[j]-arr[i];
	// 		//cout<<diff;
	// 		s.insert(diff);
	// 	}
	// }
	
}
int main(){
	vector<int> arr{2,6,10,14};
	check(arr);
	return 0;
	
}