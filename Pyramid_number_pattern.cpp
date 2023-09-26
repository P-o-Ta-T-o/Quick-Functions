#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;

    for(int row = 1; row <= n; row++){
        int spaces = n-row;
        while(spaces != 0){
            cout << " ";
            spaces--;
        }
        int value = row;
        while(value > 0){
            cout << value;
            value--;
        }
        value = value + 2;
        while(value <= row){
            cout << value;
            value++;
        }
        cout << endl;
    } 
    return 0;
}

/*
    Sample input = 5
    Sample output:

        1
       212
      32123
     4321234
    543212345
*/