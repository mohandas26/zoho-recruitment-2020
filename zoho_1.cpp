#include<bits/stdc++.h>
using namespace std;
int main(){
	string input;int i,j=0,k=0,l=0;
	getline(cin,input);
	int n = input.length();
	j=(n/2);
	for(i=0;i<n;i++){
		for(k=0;k<n;k++){
			if(k+i>=n-1){
				if(j!=n){
					cout<<input[j++];
				}
				else if(j==n){
					cout<<input[l++];
				}
			}
			else{
				cout<<" ";
			}
//			if(k+i>=n-1 && j==n){
//			}
//			else{
//				cout<<" ";
//			}
		}
		j=(n/2);
		l=0;
		cout<<endl;
	}
}
