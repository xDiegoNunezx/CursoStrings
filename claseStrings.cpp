//------------------ STRINGS ------------------
/* 
	One of the most useful data types supplied in the C++       
	libraries is the string. 
	A string is a variable that stores a sequence of 
	letters or other characters
*/

/*
	In order to use the string data type, the C++ string 
	header <string> must be included at the top of the 
	program.
*/

//#include <bits/stdc++.h>
#include <string>
#include <iostream>
using namespace std;

int main(){
	string helloWorld;
	helloWorld = "Hello World";
	cout << helloWorld << endl;
	
//------------- Basic Operations -------------
	string cadena = "0123456789 ";

// Counting the number of characters in a string
	int lenCadena = cadena.length();
	cout << "The string is " << lenCadena << " characters." << endl;

// Accessing individual characters
	char ch = cadena[3];
    cout << ch << endl;
	cadena[9] = '9';
    cout << cadena << endl;

// Comparing two strings
// =, !=, <, <=, >, >=
// These operators compare strings lexicographically, 
// character by character and are case-sensitive
    string password = "password";
    if(password == "password"){
        cout << "👍" << endl;
    }

    string str1 = "help";
    string str2 = "hello";    
    if(str1>str2){
        cout << str1 << endl;
    } else {
        cout << str2 << endl;
    }

// Appending to a string
    string firstname = "Benito";
    string lastname = "Martínez";
    string fullname = firstname + " " + lastname;
    cout << fullname << endl;

// Searching within a string
    string str3 = "There are two needles in this haystack with needles.";
    int firstNeed = str3.find("need");
    int secondNeed = str3.find("need", firstNeed+1);

    cout << "First need: " << firstNeed << endl;
    cout << "Second need: " << secondNeed << endl;
    
    if(str3.find("dog") == -1){
        cout << "Dog was not found" << endl;
    }

// Extracting substring
    string str3subsrt = str3.substr(0, firstNeed);
    cout << str3subsrt << endl;

// String to Int
    string a = "2022";
    int num = stoi(a);
    cout << num+1 << endl;

// To upper case, To lower case
    string str4 = "abc";
    transform(str4.begin(), str4.end(), str4.begin(), ::toupper);
    cout << str4 << endl;

    string str5 = "ABC";
    transform(str5.begin(), str5.end(), str5.begin(), ::tolower);
    cout << str5 << endl;

// Sort a string
    string str6 = "euioa";
    sort(str6.begin(), str6.end());
    cout << str6 << endl;

// Reverse a string
    reverse(str6.begin(), str6.end());
    cout << str6 << endl;
    
    return 0;
}
