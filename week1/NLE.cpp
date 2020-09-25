#include <bits/stdc++.h>
using namespace std;
void NLE(vector<int> arr){
	int j;
    for(int i=0;i<arr.size();i++){
        int next=-1;
        for(j=i+1;j<arr.size();j++){
            if(arr[j]>arr[i]){
                next=arr[j];
                break;
            }
        }
        cout<<next;
    }
}

int main() {
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n;
	    vector<int> arr;
	    for(int j=0;j<n;j++){
	        int temp;
	        cout<<"inserting in array";
	        cin>>temp;
	        arr.push_back(temp);
	    }

	    NLE(arr);
	}
	return 0;
}