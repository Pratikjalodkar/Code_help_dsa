#include<bits/stdc++.h>
using namespace std;

int DecimalTobinary(int n){
	int i=0;
	int binaryno=0;
	while(n>0){
		int bit = n%2;
		binaryno = bit * pow(10,i++) + binaryno;
		n=n/2;
		
	}
	return binaryno;
}
int DecimalTobinaryM2(int n){
	int i=0;
	int binaryno=0;
	while(n>0){
		int bit = (n & 1);
		binaryno = bit * pow(10,i++) + binaryno;
		n=n >> 1;
		
	}
	return binaryno;
}

int binaryToDecimal(int n){
	int i=0;
	int decimal=0;
	while(n){
		int bit = n%10;
		decimal = decimal + bit*pow(2,i++);
		n=n/10;
		
	}
	return decimal;
}

int main()
{
//	int n;
//	cout<<"Enter the Number: ";
//	cin>>n;
//	cout<<"decimal no. : "<< DecimalTobinaryM2(n);

	int decimal;
	cin>>decimal;
	cout<<"Binary"<<binaryToDecimal(decimal);
	return 0;
}

