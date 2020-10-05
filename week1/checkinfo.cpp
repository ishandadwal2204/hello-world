#include<bits/stdc++.h>
using namespace std;
void abbreviated(string str){
int count =0;
int len=str.length();
int result= len-2;//removing 1st and 2nd element
cout<<str[0]<<result<<str[len-1];

}
int main(){
string str;
cin>>str;
abbreviated(str);

}
#include<bits/stdc++.h>
using namespace std;
int countupper(string str){
int count=0;
for(int i=0;i<str.length();i++){
   if(str[i]>='A' && str[i]<='Z')
        count=count+1;
}
return count;
}
int main(){
string str;
cout<<"enter the string";
cin>>str;
int result=countupper(str);
cout<<result;
return 0;
}