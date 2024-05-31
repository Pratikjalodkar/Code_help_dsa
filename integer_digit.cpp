#include<bits/stdc++.h>
using namespace std;
void fun(int n){
	int r;
	int i=0;
	int arr[100000];
	while(n>0){
		r=n%10;
		arr[i++]=r;
		
//		cout<<r<<endl;
		n=n/10;
	}
	for(int j = i-1;j>=0;j--){
		cout<<arr[j];
	}
	
}

void prime1_n(int n){
	
}


int main()
{
	fun(246);
	return 0;
}

