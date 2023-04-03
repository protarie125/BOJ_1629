#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;

ll solve(ll a, ll b, ll c) {
	if (1 == b) {
		return a % c;
	}

	const auto& x = solve(a, b / 2, c);
	const auto& y = (x * x) % c;
	if (0 == b % 2) {
		return y;
	}
	else {
		return (y * a) % c;
	}
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll a, b, c;
	cin >> a >> b >> c;

	const auto& ans = solve(a, b, c);
	cout << ans;

	return 0;
}