#include<bits/stdc++.h>
using namespace std;

int pathsInMatrix(int n, int m){
	if(n ==1 || m == 1){
		return 1;
	}
	return pathsInMatrix(n-1, m) + pathsInMatrix(n, m-1);
}

int jos(int n, int k){
	if(n == 1){
		return 0;
	}
	return (jos(n-1, k) + k)%n;
}
int trailingZerosFactorial(int n){
	int res = 0;
	for(int i=5;i<=n;i*=5){
		res += (n/i);
	}
	return res;
}

int fastPower(int a, int b){
	int res = 1;
	while(b > 0){
		if((b&1) != 0){
			res *= a;
		}
		a = a*a;
		b >>= 1;
	}
	return res;
}

bool isPalindrome(string s, int l, int r){
	if(l>=r){
		return true;
	}
	if(s[l] != s[r]){
		return false;
	}
	return isPalindrome(s, l+1, r-1);
}


void powerSet(string s, int i, string subset){
	if(i == s.length()){
		cout << subset<<endl;
		return;
	}
	powerSet(s, i+1, subset+s[i]);
	powerSet(s, i+1, subset);
}


void permutation(string s, int l, int r){
	if(l == r){
		cout<< s<<endl;
		return;
	}
	for(int i=l;i<=r;i++){
		swap(s[l],s[i]);
		permutation(s,l+1,r);
	}
}

//factorial using hashing dp
/*
const int N = 10e5+10;

long long fact[N];

int main(){

	fact[0] = fact[1] = 1;
	for(int i=2;i<=N;i++){
		fact[i] = fact[i-1]*i;
	}
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << fact[n]<<endl;
	}
}*/

// count no of occurences of numbers in array
/*const int N = 10e7+10;

long long int arr[N];
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int element;
		cin >> element;
		arr[element]++;
	}
	int t;
	cin >> t;
	while(t--){
		int num;
		cin >> num;
		cout << arr[num] <<endl;
	}
}*/



bool anagrams(string a, string b){
	long long an = a.length();
	long long bn = b.length();
	if(an != bn){
		return false;
	}
	int alphabets[26];
	for(int i=0;i<26;i++){
		alphabets[i] = 0;
	}
	for (int i = 0; i < an; i++) {
        alphabets[a[i] - 'a']++;
    }
    for (int i = 0; i < an; i++) {
        alphabets[b[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if(alphabets[i] != 0){
            return false;
        }
    }
    return true;

}

int binarySearch(int arr[], int n, int target, bool findFirst){
	int ans = -1;
	int s = 0;
	int e = n - 1 ;
	while(s<=e){
		int m = s + (e - s)/2;
		if(arr[m] > target){
			e = m -1;
		}
		else if(arr[m] < target){
			s = m + 1;
		}
		else{
			ans = m;
			if(findFirst){
				e = m -1;
			}
			else{
				s = m + 1;
			}
		}
	}
	return ans;}
void merge(int arr[], int l, int m, int r){
	int mix[r-l+1];
	int i = l, j = m+1, k = 0;
	while(i<=m&&j<=r){
		if(arr[i]>arr[j]){
			mix[k++] = arr[i++];
		}
		else{
			mix[k++] = arr[j++];
		}
	}
	while(i<=m){
		mix[k++] = arr[i++];
	}
	while(j<=r){
		mix[k++] = arr[j++];
	}
	k = l;
	for(int value:mix){
		arr[k++] = value;
	}}
void preTraversal(Node root){

	if(root == NULL){
		return;
	}

	cout<< root.val<< " ";
	preTraversal(root.left);
	preTraversal(root.right);}
void mergeSort(int arr[], int l, int r){
	if(l<r){
		int mid = (l+r)/2;

		mergeSort(arr, l, mid);
		mergeSort(arr, mid+1, r);

		merge(arr, l , mid, r);
	}}
int main(){
	int n = 7;
	int arr[n] = {1,2,3,-1,-1,4,-1,-1, 5, -1,6, -1,-1};

	BT bt;
	Node root = bt.buildBT(arr);
	preTraversal(root);
}

