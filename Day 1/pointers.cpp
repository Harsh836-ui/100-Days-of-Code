#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a = 300;
	int *p; //declaring a pointer
	p = &a; //initialising a pointer ,storing the address of a in p
	cout << *p; //derefrencing a pointer


	int *b;
	b = new int[5]; //storing memory in heap and pointing it with pointer to access it

	return 0;
}
