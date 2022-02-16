#include<iostream>
using namespace std;

 //These little functions save your time and free you from writing boilerplate code
 //Author : dashkovskiy nikita
 //Please don't forget stars this repository)

template<typename T>
T readLine(const string message = "", const string divider = "") {
	T value;
	cout << message;
	cin >> value;
	cout << divider;
	return value;
}

template<typename T>
void output(const T value, const string message = "", const string divider = "") {
	cout << message << value << endl;
	cout << divider;
}


int main() {
	//with parameters
	string name = readLine<string>("Enter your name : ", "\n");
	output(name, "Your name is ", "\n");
	
	int age = readLine<int>("Enter your age : ","\n");
	output(age, "Your age is ", "\n");

	//without parameters
	string text = readLine<string>();
	output(text);
	
	char symbol = readLine<char>();
	output(symbol);


	//usage example:
	 
	//more code
	string test1;
	cout << "Enter test1 : ";
	cin >> test1;
	cout << "\n";

	//1 line code
	string test2 = readLine<string>("Enter test2 : ", "\n");

}
