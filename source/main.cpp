#include <iostream>

using namespace std;

int main (){
	/*Hello World!*/
	cout << "Hello! World!\n";
	cout << "���o! C++\n";
	/*Data Type*/
	cout << "\n���A\t\t�j�p(bytes)";
	cout << "\nint\t\t" << sizeof(int);
	cout << "\nlong\t\t" << sizeof(long);
	cout << "\nfloat\t\t" << sizeof(float);
	cout << "\ndouble\t\t" << sizeof(double);
	cout << "\nchar\t\t" << sizeof(char);
	cout << "\n";
	/*Literal constant*/

	/*Variable*/
	int ageForStudent;
	double scoreForStudent;
	char levelForStudent;

	ageForStudent = 5;
	scoreForStudent = 80.0;
	levelForStudent = 'B';

	cout << "\n�~��\t�o��\t����";
	cout << "\n" << ageForStudent
		<< "\t" << scoreForStudent
		<< "\t" << levelForStudent
		<< "\n";

	/*Input Output*/

	system("pause");
	return 0;
}