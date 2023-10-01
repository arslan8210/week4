#include <iostream>
using namespace std;

void reverse(string input);

main() 
{
	string input;
	cout << "Enter 'true' or 'false': ";
	cin >> input;
	reverse(input);
}
void reverse(string input)
{
	if(input == "false"){
	cout << "true";
}
	if(input == "true"){
	cout << "false";
}

}