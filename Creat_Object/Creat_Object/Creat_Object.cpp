// Creat_Object.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <functional>
using namespace std;
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
