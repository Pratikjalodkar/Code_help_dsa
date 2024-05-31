#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
//	cin>>n;
//	
//	for(int i =1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			cout<<"* ";
//		}
//		cout<<endl;
//	}
	
//	for(int i =1;i<=n;i++){
//		
//		for(int j =1;j<=n;j++){
//			if(i==1 || i==n){
//				cout<<"* ";
//			}
//		
//		else{
//			if(j==1 || j==n){
//				cout<<"* ";
//			}
//			else {
//				cout<< "  ";
//			}
//		}
//		}
//		cout<<endl;
//	}

//	for(int i=0;i<n;i++){
//		for(int j=i;j<n;j++){
//			cout<<"* ";
//		}
//		cout<<endl;
//	}



//	n=5;
//	if(cout<<n){
//		cout<<"hii";
//	}


	int num;
	cin>>num;
	
	n=num/2;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			cout<<" ";
		}
		for(int k=0;k<=i;k++){
			cout<<"* ";
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<i+1;j++){
			cout<<" ";
		}
		for(int k=i;k<n-1;k++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}

