#include <iostream>

using namespace std;

int main (){
	/*Hello World!*/
	cout << "Hello! World!\n";
	cout << "哈囉! C++\n";
	
	/*Data Type*/
	cout << "\n型態\t\t大小(bytes)";
	cout << "\nint\t\t" << sizeof(int);
	cout << "\nlong\t\t" << sizeof(long);
	cout << "\nfloat\t\t" << sizeof(float);
	cout << "\ndouble\t\t" << sizeof(double);
	cout << "\nchar\t\t" << sizeof(char);
	cout << "\n";
	
	/*Literal constant*/
	cout << "sizeof(1): \t" << sizeof(1) << "\n";
	cout << "sizeof(1.0)\t" << sizeof(1.0) << "\n";
	
	/*Variable*/
	int ageForStudent;
	double scoreForStudent;
	char levelForStudent;

	ageForStudent = 5;
	scoreForStudent = 80.0;
	levelForStudent = 'B';

	cout << "\n年級\t得分\t等級";
	cout << "\n" << ageForStudent
		<< "\t" << scoreForStudent
		<< "\t" << levelForStudent
		<< "\n";

	/*Input Output*/
	int number = int();
	cout << "\n請輸入數字: ";
	cin >> number;
	cout << "輸入的數字" << number << "\n\n";
	system("pause");
	return 0;
}