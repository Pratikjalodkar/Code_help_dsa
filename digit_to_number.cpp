#include<bits/stdc++.h>
using namespace std;

int digit(int n){
	int no[n];
	int num = 0;
	for(int i=0;i<n;i++){
		cin >> no[i];
	}
	for(int i=0;i<n;i++){
		
		num=num*10;
		num = num + no[i];
	}
	cout << num;
	
}

int main()
{
	digit(3);

	return 0;
}

