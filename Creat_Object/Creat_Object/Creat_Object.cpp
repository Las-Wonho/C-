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

School_last_Play::School_last_Play()
{
}

class Frist_class
{
public:
	Frist_class();
	~Frist_class();
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

Frist_class::Frist_class()
{
}

Frist_class::~Frist_class()
{
}
int main()
{
	auto println = [](string x) { cout << x << endl; };
	println("Program start");
	Frist_class Object = Frist_class();
	Object.tmp_set(20);
	Object.tmp_print();
    return 0;
}
