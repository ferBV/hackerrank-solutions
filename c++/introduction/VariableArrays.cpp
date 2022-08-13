#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n, q, k, in;
	cin >> n >> q;
	vector<vector<int>> a;
	vector<int> b;

	/* Entrada datos */
	for(int i = 0; i<n; i++){
		cin >> k;
		for(int j = 0; j<k; j++){
		cin >>in;
		b.push_back(in);
		}
		a.push_back(b);
		b.clear();
	}
	/* Entrada preguntas */
	int m,l;

	for(int i = 0; i<q; i++){
		cin >> m >> l;
		b.push_back(m); b.push_back(l);
	}

	for(int i =0; i<q*2; i+=2){
		cout << a[b[i]][b[i+1]] << endl;
	}

    return 0;
}
