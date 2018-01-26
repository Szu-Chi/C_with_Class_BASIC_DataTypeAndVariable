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

	/*Variable*/

	/*Input Output*/
	int number = int();
	cout << "\n請輸入數字: ";
	cin >> number;
	cout << "輸入的數字" << number << "\n\n";
	system("pause");
	return 0;
}