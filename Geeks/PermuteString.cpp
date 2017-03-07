#include<bits/stdc++.h>
using namespace std;



void permute(string str, int l,int r){
	
	if(l==r){
		cout<<str<<endl;
		return;
	}
	for(int i=l;i<=r;i++){
		swap(str[l],str[i]);
		permute(str,l+1,r);
		swap(str[l],str[i]);
	}
}
	
int main(){
	string s;
	cin>>s;
	permute(s,0,(int)s.length()-1);
	return 0;
}
	
		
