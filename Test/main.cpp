#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v = {1,2,3,4,5};
	cout << (int)v.erase(v.begin() + 2);
}