#include <iostream>
#include <vector>
#include <cassert>

template<typename T>
void swap(T& param1, T& param2)
{
	T temp = std::move(param1);
	param1 = std::move(param2);
	param2 = std::move(temp);
}

void test_1()
{
	int a = 1, b = 2;
	swap(a, b);
	assert(a == 2);
	assert(b == 1);
}

void test_2()
{
	std::vector<int> v1({ 1,2,3,4 }), v2({ 1,2,3 });
	swap(v1, v2);

	assert(v1 == std::vector<int>({ 1, 2, 3 }));
	assert(v2 == std::vector<int>({ 1, 2, 3, 4 }));
}

void test_3()
{
	std::string s1 = "hello", s2 = "world";

	swap(s1, s2);
	assert(s1 == "world");
	assert(s2 == "hello");
}

int main()
{
	test_1();
	test_2();
	test_3();


	return 0;
}

