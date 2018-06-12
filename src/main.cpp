#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "mathbasic.h"
using namespace mbasic;



int main(){

	int a = 10, b = 2;

	cout << "valorA= " << a << " valorB=" << b << endl;


	cout << "diferença: " << mathbasic::dif(a,b) << endl;
	cout << "soma: " << mathbasic::add(a,b) << endl;
	cout << "multiplicação: " << mathbasic::max(a,b) << endl;
	cout << "divisão: " << mathbasic::div(a,b) << endl;


	return 0;
}