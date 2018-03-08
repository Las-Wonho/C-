// Creat_Object.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <functional>
#include <numeric>
#include <vector>

using namespace std;
class School_last_Play
{
public:
	School_last_Play();
	function<void(string)> println = [](string  x) { cout << x << endl; };
private:
	int add_5_input_number()
	{
		println("입력하세요");
		vector<int> v(20, 0);
		for (size_t i = 0; i < 5; i++)
		{
			cin >> v[i];
		}
		int sum = accumulate(v.begin(), v.end(), 0);
		//[](int aval) { cout << "result : " << aval << endl; }(sum);
		return sum;
	};

};

class Frist_class
{
public:
	int tmp;
	float apply(function<int(int,int)> fx, int value)
	{
		return fx(value,value);
	};
	void tmp_set(int input)
	{
		tmp = int(input);
	}
	void tmp_print()
	{
		printf("%d", tmp);
	}
private:
};

namespace Legacy
{
	auto print = [](const char  *x) { cout << x; };
	auto sq = [](int data) {return data*data; };
	int mal(int x = 5, int y = 4) { return x*y; };
}
namespace Latest
{
	auto print = [](auto x) { cout << x << endl; };
	auto start = []() {
		print("Program Start~!");
	};
	auto mal = [](auto x = 5, auto y = 4) { return x*y; };
	
}

int main()
{
	Latest::start();

    return 0;
}
