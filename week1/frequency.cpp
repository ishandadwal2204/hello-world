#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string str="SUCCESS";
	std::map<char, int> map;
	for(int i=0;i<str.size();i++){
		map[str[i]]++;
		
	}
	for(auto it: map){
		cout<<it.first<<"--"<<it.second<<endl;
	}
	return 0;
}