#include <iostream>
#include <stack>

using namespace std;

string reverseString(string mystring)
{
	string reversed = "";
	stack<char> mystack;
	for (string::iterator it = mystring.begin(); it != mystring.end(); ++it){
		mystack.push(*it);
	}
	while(!mystack.empty()){
		reversed += mystack.top();
		mystack.pop();
	}
	return reversed;
}


int main()
{
	string mystring = "my string!";
	string reversed = reverseString(mystring);
	cout << "Before reversal: " << mystring << endl;
	cout << "Reversed: " << reversed << endl;
	return 0;
}