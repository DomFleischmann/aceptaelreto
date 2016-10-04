#include <iostream>

using namespace std;

int main(){
	int  casos,n, m, r;
	cin >> casos;

	for (int i = 0; i < casos; i++){
		cin >> n >> m;
		r = n*(m + 1) + m*(n + 1);
		cout << r << '\n';

	}
	return 0;
	
}

