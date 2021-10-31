#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define EPS 1e-9

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[] = {7, 6, 5, 4, 3, 2, 1};
	sort(arr, arr + 7);
	for (int i = 0; i < 7; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}