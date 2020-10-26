//I don't think that this should even be up on GitHub, but here it is
//This is an answer to the common interview question regarding FizzBuzz.

#include<iostream>
//Don't do this in production, unless you are allowed to, it's a waste of space
using namespace std;

std::string fizzBuzz (int i);
int main (){
	int j;
	cin >> j;
	cin.ignore(100, '\n');
	cout << fizzBuzz(j) << endl;
    return 0;
}  

std::string fizzBuzz (int i) {

    if (i % 3 == 0 && i % 5 == 0) { 
        return "FizzBuzz";
    }
    else if (i % 3 == 0) {
        return "Fizz";
    }
    else if (i % 5 == 0) {
        return "Buzz";
    }
    else {
        return "Number is neither divisible by 3 or 5.";
    }
}
