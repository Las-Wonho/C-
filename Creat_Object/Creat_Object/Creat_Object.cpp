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
	function<int(auto)> qwe = [](auto x) {return x + 5; };

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
		[](int aval) { cout << "result : " << aval << endl; }(sum);
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

class cal
{
public:
	cal() {	
		this->add_ = 0;
		this->div_ = 0;
		this->mal_ = 0;
		this->min_ = 0;
	};
	/*실제 동작하는 함수. 값을 계산하고 그 값을 리턴한다. 에러가 나면 0을 반환한다.*/
	inline double add(double x, double y) {
		try {
			this->add_++;
			return x + y;
		}
		catch (...) {
			return 0;
		}
	};
	inline double div(double x, double y=1) {
		try {
			this->div_++;
			return x / y;
		}
		catch (...) {
			return 0;
		}
	}; 
	inline double min(double x, double y) {
		try {
			this->min_++;
			return x - y;
		}
		catch (...) {
			return 0;
		}
	}; 
	inline double mal(double x, double y) {
		try {
			this->mal_++;
			return x * y;
		}
		catch (...) {
			return 0;
		}
	};
	void show() {
		cout << this->add_ << this->div_ << this->mal_ << this->min_ << endl;
	};
	/*이 아래 함수는 캡슐화 함수. FP가 변하진 않고 상태를 가져온다.*/
	inline int get_mal() {
		return this->mal_;
	};
	inline int get_add() {
		return this->add_;
	};
	inline int get_min() {
		return this->min_;
	};
	inline int get_div() {
		return this->div_;
	};
private:
	/*변수들을 선언하였다. 이 변수들의 값을 바꾸는 것은 계산할 때만 변경가능하다.*/
	int mal_;
	int min_;
	int div_;
	int add_;
};

class Print
{
public:
	void set_string(string _) {
		this->string_tmp = _;
	};
	void show_string() {
		cout << this->string_tmp << endl;
	}

private:
	string string_tmp;
};



class point
{
public:
	point(int x, int y) {
		this->x = x;
		this->y = y;
	};
	void _(int x, int y) {
		set_x(x);
		set_y(y);
	};
	int get_x() {
		return x;
	};
	int get_y() {
		return y;
	};
	void set_x(int x) {
		if (x < 0)
			x = 0;
		this->x = x;
	};
	void set_y(int y) {
		if (y < 0)
			y = 0;
		this->y = y;
	};
private:
	int x;
	int y;

};



class A2
{
public:
	A2() { cout << "A22" << endl; };
	void asd() const { cout << "A2"<<endl; };
private:

};
class A1
{
public:
	A1() { cout << "A11" << endl; };
	void asd() const { cout << "A1" << endl; };
private:

};
class A
{
public:
	A1 a;
	A2 b;
	A(/*A1 a, A2 b*/) { /*this->a = a; this->b = b;*/ cout << "AA"<<endl; };
	void asd(A1 a, A2 b) const { cout << "A5" << endl; a.asd(); b.asd(); };
private:

};

class B
{
public:
	void asd(const A &a) const { a.asd(a.a,a.b); };
private:

};

class  _point
{
public:
	_point(int a, int b) { x = a, y = b; };
	void show() { cout << x << y << endl; };
private:
	int x; int y;
};
class cir {
public:
	_point po;
	int ra;
	cir(int w, int y, int a); 

};
cir::cir(int w, int y, int a) { this->ra = a; this->po = _point(w, y); };
int main()
{
	B b = B();
	//A a = A(A1(),A2());
	A1 q = A1();
	A2 w = A2();
	A a = A(/*q, w*/);
	b.asd(a);
	Latest::start();



    return 0;
}
