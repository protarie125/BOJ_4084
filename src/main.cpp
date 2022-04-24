#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c, d;
	cin >> a >> b >> c >> d;
	while (0 != a || 0 != b || 0 != c || 0 != d) {
		auto ans = int{ 0 };
		while (a != b || a != c || a != d ||
			b != c || b != d ||
			c != d) {
			const auto& na = abs(a - b);
			const auto& nb = abs(b - c);
			const auto& nc = abs(c - d);
			const auto& nd = abs(d - a);

			a = na;
			b = nb;
			c = nc;
			d = nd;

			++ans;
		}

		cout << ans << '\n';

		cin >> a >> b >> c >> d;
	}

	return 0;
}