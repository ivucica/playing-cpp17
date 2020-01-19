#include <iostream>
using namespace std;

auto l = {1, 2, 3, 4, 5, 6};

int main() {
	for (auto &v: l) { cout << v; }
	for (auto &v: {1, 2, 3, 4, 5, 6}) { cout << v; }
}
