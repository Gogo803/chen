#include<iostream>
#include<iomanip>
using namespace std;
int a[10][10];
int main() {
	for(int i=0; i<10; i++) {
		for(int j=0; j<10; ++j) {
			if(i==1||i==8||j==1||j==8) {
				a[i][j]=1;
			}
		}
	}
	for(int i=0; i<10; i++) {
		for(int j=0; j<10; j++) {
			if(a[i][j]) {
				cout<<setw(3)<<a[i][j];
			} else {
				cout<<setw(3)<<" ";
			}
		}

		cout<<endl;
	}
	return 0;
}

