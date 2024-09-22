#include<iostream>
#include <sstream>
#include <utility>
using namespace std;

pair<int,int> print1(void)
{
	ostringstream oss;
	string str = "i love nakixii";
	oss << str;
	cout << oss.str() << endl;
	int min = 1;
	int max = 2;

	return make_pair(min, max);
}

int main()
{
	auto [min, max] = print1();

	return 0;
}