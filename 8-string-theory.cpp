#include <iostream>
#include <string> // this is totaaly optional, it could have done with iostream only

using namespace std;

int main() {
    char str[100];
    //every char array contains a null character at the end, which is used to determine the end of the string
    // at this case, 100th character will be null character '\0'
    // char str[100] = "hello"; // this is also a valid way to initialize a char array
    // char str[100] = {'h', 'e', 'l', 'l', 'o', '\0'}; // this is also a valid way to initialize a char array
    // char str[100] = {'h', 'e', 'l', 'l', 'o'}; // this will not work, as it does not have a null character at the end

    char str2[] = "hello";

    cin >> str; // will input until space or newline

    cin.getline(str, 100); // will input until newline, including spaces
    //there is a delimiter in the getline function after the length of the string, which tells when to stop reading input
    // like, cin.getline(str, 100, '&'); // will stop reading input when '&' is encountered

    cout << "output: " << str << endl;



    string s = "hello world"; // dynamic string, can be resized (runtime resizable)
    cout << "string s: " << s << endl;

    s = "new string"; // can be reassigned


    string s1 = "hello";
    string s2 = "world";
    string s3 = s1 + " " + s2; // string concatenation
    cout << "s3: " << s3 << endl;
    cout << "is equal? = " << (s1 == s2) << endl; // string comparison
    cout << s3.length() << endl; // string length


    string s4;

    getline(cin, s4); // delimiter can be specified, here \n is the default delimiter

    reverse(s4.begin(), s4.end()); // s4.begin() returns an iterator to the first character of the string
    return 0;
}