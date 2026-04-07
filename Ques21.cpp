/*A board displays reverse seating layouts for events. Implement a solution to print:
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5*/

#include <iostream>
using namespace std;
int main() {
	int num;
	int num1;
	cin >> num;   
	for(int i = num-1 ; num > 0 ; i --){
		num1 = num * i;
	}

	cout << num1;

	return 0;
}
