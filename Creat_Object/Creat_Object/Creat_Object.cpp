// Creat_Object.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	printf("Program start");
	Frist_class Object = Frist_class();
	Object.tmp_set(2s0);
	Object.tmp_print();
    return 0;
}
class Frist_class
{
public:
	Frist_class();
	~Frist_class();
	int tmp;
	void tmp_set(int input)
	{
		tmp = int(input);
	}
	void tmp_print()
	{
		printf("%d",tmp);
	}

private:
};

Frist_class::Frist_class()
{
}

Frist_class::~Frist_class()
{
}