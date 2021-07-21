#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int h, w;
		cin >> h >> w;
		vector<vector<int>> a(h, vector<int>(w, 0));
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (i == 0 || i == h - 1) { // for first and last row
					if (j % 2 == 0) { // put plates every even position (zero-based)
						a[i][j] = 1;
					}
				} else if (i > 0 && i < h - 2 && i % 2 == 0) { // for plates in the middle (avoid the rows before the first and before the last)
					if (j == 0 || j == w - 1) { // put plates in the first and last column
						a[i][j] = 1;
					}
				}
			}
		}
		// print the 2D grid
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cout << a[i][j];
			}
			cout << '\n';
		}
		cout << '\n';
	}
	return 0;
}
