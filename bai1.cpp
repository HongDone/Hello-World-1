#include <iostream>
using namespace std;
int giaithua(int i){
	if (i==1) return 1;
	else return i*giaithua(i-1);
}
int main(){
	int n;
	int S1 = 0, S2 = 0;
	cout<<"Nhap n: ";
	cin>>n;
	for (int i = 1; i <= 2*n; i++){
		if (i%2==0) S1 -= i;
		else S1 += i;
	}
	for (int i = 1; i <= n; i++){
		S2 += giaithua(i);
	}
	cout<<"a. S1 = 1 - 2 + 3 - ... - 2n = "<<S1<<endl<<"b. S2 = 1! + 2! + ... + n! = "<<S2<<endl;
	return 0;
}
