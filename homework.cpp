//factorial 
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
	int f=1;
	for(int i = 2; i<=n; i++){
		f=f*i;	
	}
	return f;
}
int primeno(int n){
	for(int i=1;i<=n;i++){
		for(int j=2;j<n;j++){
			if(i%j!=0){
				cout<<i<<endl;
				break;
			}
			break;
		}
	}
}

int printdigit(int n){
	for(int i=1;i<=n;i++){
		n=n%10;
		cout<<n;
	}
}
int main()
{
//	cout<<fact(5);

	primeno(100);



	return 0;
}

