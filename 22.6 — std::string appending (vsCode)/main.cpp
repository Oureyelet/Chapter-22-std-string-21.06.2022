#include <iostream>
#include <string>

int main()
{
    //Appending:

    /*
    string& string::operator+= (const string& str)
    string& string::append (const string& str)

    Both functions append the characters of str to the string.
    Both function return *this so they can be “chained”.
    Both functions throw a length_error exception if the result exceeds the maximum number of characters.

    Sample code:
    */
    std::string one{ "one" };

    one += std::string{ " two" };

    std::string three{ " three" };

    one.append(three);

    std::cout << one << '\n'; // print one two three

    //There’s also a flavor of append() that can append a substring:

    /*
    string& string::append (const string& str, size_type index, size_type num)

    This function appends num characters from str, starting at index, to the string.
    Returns *this so it can be “chained”.
    Throws an out_of_range if index is out of bounds
    Throws a length_error exception if the result exceeds the maximum number of characters.

    Sample code:
    */
    std::string sString{ "One " };
    const std::string sTemp{ "twothreefour" }; // append substring of sTemp starting at index 3 of length 5
    sString.append(sTemp, 3, 5); 
    std::cout << sString << '\n'; // print One three


    /*
    string& string::operator+= (const char* str)
    string& string::append (const char* str)

    Both functions append the characters of str to the string.
    Both function return *this so they can be “chained”.
    Both functions throw a length_error exception if the result exceeds the maximum number of characters.
    str should not be NULL.

    Sample code:
    */
    std::string fString{ "one" };
    
    fString += " two";
    fString.append(" three");
    
    std::cout << fString << '\n'; // print one two three 


    //There is an additional flavor of append() that works on C-style strings:

    /*
    string& string::append (const char* str, size_type len)

    Appends the first len characters of str to the string.
    Returns *this so they can be “chained”.
    Throw a length_error exception if the result exceeds the maximum number of characters.
    Ignores special characters (including ”)

    Sample code:
    */
    std::string gString{ "one g " };
    gString.append("twoooo", 3); // This function is dangerous and its use is not recommended.
    std::cout << gString << '\n'; // print one g two 

    /*
    string& string::operator+= (char c)
    void string::push_back (char c)

    Both functions append the character c to the string.
    Operator += returns *this so it can be “chained”.
    Both functions throw a length_error exception if the result exceeds the maximum number of characters.

    Sample code:
    */
    std::string hString{ "one" };
    hString += ' ';
    hString.push_back('2');
    std::cout << hString << '\n'; // print one 2


    /*
    string& string::append (size_type num, char c)

    Adds num occurrences of the character c to the string
    Returns *this so it can be “chained”.
    Throws a length_error exception if the result exceeds the maximum number of characters.

    Sample code:
    */
    std::string kString{ "ooo" };
    kString.append(3, 'P');
    std::cout << kString << '\n'; // print oooPPP

    return 0;
}