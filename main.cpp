#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main() {


    const string hexdigits = "0123456789ABCDEF";

    cout<<"Enter a Series of number between 0 and 15 "
    <<"Seprated by a space"<<std::endl;



    string result;

    string::size_type n;
    while(cin >> n && n != -1)
        if (n < hexdigits.size())
            result += hexdigits[n];

    cout<<"\nYour Hexnumber is "<<result<<std::endl;




    return 0;
}