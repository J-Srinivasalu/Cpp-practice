#include<bits/stdc++.h>
using namespace std;

void printRect(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i>0 && j>0 && i<n-1 && j<n-1){
				cout<<" ";
			}else{

			cout<<"*";
			}
		}
		cout<<endl;
	}
}

void printInvertedHalfPyramid(int n){
	for(int i=n;i>0;i--){
		for(int j=0;j<i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

void printPyramid180(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(n-i-1 > j){
				cout<<" ";
			}else{
				cout<<"*";
			}
		}
		cout<<endl;
	}
}

void halfPyramidNumbers(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<i;
		}
		cout<<endl;
	}
}

void floydsTriangle(int n){
	int k=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<k<<" ";
			k++;
		}
		cout<<endl;
	}
}

void butterflyPattern(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=2*n;j++){
			if(j>i && j<2*n-i+1){
				cout<<" ";
			}else{
				cout<<"*";
			}
		}
		cout<<endl;
	}
	for(int i=n;i>=1;i--){
		for(int j=1;j<=2*n;j++){
			if(j>i && j<2*n-i+1){
				cout<<" ";
			}else{
				cout<<"*";
			}
		}
		cout<<endl;
	}
}

void printInvertedNumbers(int n){
	for(int i=n;i>0;i--){
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

void printBinary(int n){
	for(int i=1;i<=n;i++){
		bool isOne = i%2==0? true: false;
		for(int j=1;j<=i;j++){
			if(isOne){
				cout<<"0 ";
				isOne = false;
			}else{
				cout<<"1 ";
				isOne = true;
			}
		}
		cout<<endl;
	}
}

void printRhombus(int n){
	for(int i=1;i<=n;i++){
		for(int s=n-i;s>0;s--){
			cout<<" ";
		}
		for(int j=1;j<=n;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

void pyramidNumbers(int n){
	for(int i=1;i<=n;i++){
		for(int s=n-i;s>0;s--){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

void palindromicPattern(int n){
	for(int i=1;i<=n;i++){
		for(int s=n-i;s>0;s--){
			cout<<"  ";
		}
		for(int j=i;j>=1;j--){
			cout<<j<<" ";
		}
		for(int j=2;j<=i && i!= 1;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

void starPattern(int n){
	for(int i=0;i<n;i++){
		for(int s=n-i;s>0;s--){
			cout<<"  ";
		}
		for(int j=0;j<2*i+1;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	for(int i=n-1;i>=0;i--){
		for(int s=n-i;s>0;s--){
			cout<<"  ";
		}
		for(int j=0;j<2*i+1;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
} 

void zigzagPattern(int n){
	for(int i=1;i<=3;i++){
		for(int j=1;j<=n;j++){
			if((i+j)%4 == 0){
				cout<<"* ";
			}
			else if(i==2 && j%4 == 0){
				cout<<"* ";
			}else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	zigzagPattern(n);
	return 0;
}