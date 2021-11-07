//My simple calc
#include <iostream>
using namespace std;

int main()
{
	//I am declaring variables for input 1 input 2 and the output
	int input1, input2;
	char operation = '-';
	int multiply, divide, add, subtract;

	cout <<"Welcome to Our Basic Calculator " <<endl;
	cout << "\n";
	//Request input from user
	cout << "Key in Input 1\n";
	cin >> input1;
	cout << "\n";
	cout << "Key in input 2\n";
	cin >> input2;
	cout << "\n\n";

	multiply  = input1 * input2;
	divide = input1 / input2;
	subtract = input1 - input2;
	add = input1 + input2;
	cout << "Our Answers are: "<< "\n";
	cout << "The result for multiplying your numbers is " << multiply << " \n" ;
	cout << "The result for dividing your numbers is " << divide << " \n";
	cout << "The result for subtracting your numbers is " << subtract << "\n";
	cout << "The result for adding your numbers is " << add << "\n ";

	cout << "\n\n\n";

	return 0;
}
