#include <iostream>
#include <fstream>
#include<string.h>
using namespace std;

int main () {
  fstream myfile ("system.txt");
  string str;
  if (myfile.is_open())
  {
   while(getline(myfile,str))
   {
   	cout<<str;  
  }}
  else cout << "Unable to open file";
  return 0;
}
