#include <iostream>
#include <string>

int main()
{
    //String assignment:

    /*
    string& string::operator= (const string& str)
    string& string::assign (const string& str)
    string& string::operator= (const char* str)
    string& string::assign (const char* str)
    string& string::operator= (char c)

        These functions assign values of various types to the string.
        These functions return *this so they can be “chained”.
        Note that there is no assign() function that takes a single char.

    Sample code:
    */

    //check C++ version:
    if (__cplusplus == 201703L) std::cout << "C++17\n";
    else if (__cplusplus == 201402L) std::cout << "C++14\n";
    else if (__cplusplus == 201103L) std::cout << "C++11\n";
    else if (__cplusplus == 199711L) std::cout << "C++98\n";
    else std::cout << "pre-standard C++\n";

    std::string ss;

    ss = std::string{ "Bible" }; // Assign a string value
    std::cout << "Assign a string value: " << ss << '\n'; // print Bible

    const std::string sTwo( "Two" );
    ss.assign(sTwo);
    std::cout << "ss.assign(sTwo): " << ss << '\n'; // print Two

    ss = "Holy"; //Assign a C-style string
    std::cout << "Assign a C-style string: " << ss << '\n'; // print Holy

    ss.assign("Lord");
    std::cout << "ss.assign(\"Lord\"): " << ss << '\n'; // print Lord

    ss = '7'; // Assign a char
    std::cout << "Assign a char: " << ss << '\n'; // print 7

    std::string other;
    ss = other = "Come please"; // Chain assignment
    std::cout << "Chain assignment: " << ss << ' ' << other << '\n'; // print "Come please Come please"


    //The assign() member function also comes in a few other flavors:

    /*
    string& string::assign (const string& str, size_type index, size_type len)

    Assigns a substring of str, starting from index, and of length len
    Throws an out_of_range exception if the index is out of bounds
    Returns *this so it can be “chained”.

    Sample code:
    */
    const std::string stringSource{ "abcdefg" };
    std::string sDis;

    sDis.assign(stringSource, 2, 4); // assign a substring of source from index 2 of length 4

    std::cout << "sDis.assign(stringSource, 2, 4): " << sDis << '\n'; // print "cdef"

    /*
    string& string::assign (const char* chars, size_type len)

    Assigns len characters from the C-style array chars
    Throws an length_error exception if the result exceeds the maximum number of characters
    Returns *this so it can be “chained”.

    Sample code:
    */
    std::string hi;
    hi.assign("My name is", 4); //This function is potentially dangerous and its use is not recommended.
    std::cout << "hi.assign(\"My name is\", 4): " << hi << '\n'; // print "My n"

    /*
    string& string::assign (size_type len, char c)

    Assigns len occurrences of the character c
    Throws a length_error exception if the result exceeds the maximum number of characters
    Returns *this so it can be “chained”.

    Sample code:
    */
    std::string sDesk;

    sDesk.assign(4, 'G');
    std::cout << sDesk << '\n'; // print GGGG

    //Swapping:

    /*
    void string::swap (string &str)
    void swap (string &str1, string &str2)

        Both functions swap the value of the two strings. The member function swaps *this and str, the global function swaps str1 and str2.
        These functions are efficient and should be used instead of assignments to perform a string swap.

    Sample code:
    */
    std::string first{ "first" };
    std::string second{ "second" };

    std::cout << first << ' ' << second << '\n'; // print first second
    std::swap(first, second);
    std::cout << first << ' ' << second << '\n'; // print second first
    first.swap(second);
    std::cout << first << ' ' << second << '\n'; // print first second



    return 0;
}