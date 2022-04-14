#include<bits/stdc++.h>
using namespace std;


bool isPrime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i == 0){
			return false;
		}
	}
	return true;
}

bool isArmstrong(int n){
	int sum = 0;
	int originalNum = n;
	while(n){
		int r = n%10;
		sum += r*r*r;
		n /=10;
	}
	if(sum == originalNum){
		return true;
	}
	return false;
}


int reverseNum(int n){
	int rev = 0;
	while(n){
		int r = n%10;
		rev = rev * 10 + r;
		n /= 10;
	}
	return rev;
}

int main()
{
	int n;
	cin>>n;
	cout<<isArmstrong(n);
	cout<<isPrime(n);
	return 0;
}