#include<iostream>
using namespace std;
int main(){
    int num;
    int n=num/2;
    cin>>n;
    for(int row=0; row<n; row=row+1) {
		//spaces
		for(int col=0; col<n-row-1; col=col+1) {
			cout << " ";
		}

		//stars
		for(int col=0; col< row+1; col=col+1) {
			//if first or last col
			if(col == 0 || col == row +1 -1) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
			
		}
		cout << endl;
	}
	for(int row=0; row<n; row=row+1) {
		//spaces
		for(int col=0; col<row; col=col+1) {
			cout << " ";
		}

		//stars
		int totalCol = n-row;
		for(int col=0; col< totalCol; col=col+1) {
			//if first or last col
			if(col == 0 || col == totalCol -1) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
			
		}
		cout << endl;
	}
  return 0;
}