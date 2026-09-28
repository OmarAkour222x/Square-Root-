#include <iostream>
#include <cmath>
using namespace std;

float NumberRead(string message) {
	float Number;
	cout << message;
	cin >> Number;
	return Number;

}


float MRoot(float Number) {
	return pow(Number, 0.5);

}
float CPPRoot(float Number) {
	return sqrt(Number);
}
int main() {
	float Number = NumberRead("Enter A Number Please : ");
	cout << "My Sqrt Function Answer : " << MRoot(Number) << endl;
	cout << "C++ Sqrt : " << CPPRoot(Number) << endl;

}