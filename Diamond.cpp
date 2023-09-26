#include<iostream>
using namespace std;


int main(){
	int all;
	cin >> all;
    int n = (all+1)/2;
    int m = all - n;
	int i = 1;
	
	while(i<=n){
		int space = 1;
        while (space <= n - i) {
        	cout << " ";
        	space++;
        }
		int j = 1;
		while(j <= ((2*i) - 1) ){
			cout << "*";
			j++;
		}
		cout << endl;
		i++;
    }
    
    int row = m;
    while(row >= 1){
        int lol = 1;
        while(lol <= m - row + 1){
            cout << " ";
            lol++;
        }
        int ext = 1;
        while(ext <= (2*row)-1 ){
            cout << "*";
            ext++;
        }
        cout << endl;
        row--;
    }
	return 0;
}

/*
    sample input:
    5
    sample output:
      *
     ***
    *****
     ***
      *
*/