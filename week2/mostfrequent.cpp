#include<bits/stdc++.h>
using namespace std;

void count(string str){
    unordered_map<string,int> map;
    string word;
    stringstream ss(str);
    while(ss>>word){
        map[word]++;
    }
    for(auto it: map){
        cout<<it.first<<"---"<<it.second<<endl;
    }
}
int main(){
    string str="ishan is a good good boy";
    // cout<<"enter the strings";
    // cin>>str;
    // cout<<str;
    count(str);
}