#include <iostream>
#include <string>


int main()
{
    //Inserting (Inserting characters into an existing string can be done via the insert() function.) :

    /*
    string& string::insert (size_type index, const string& str)
    string& string::insert (size_type index, const char* str)

    Both functions insert the characters of str into the string at index
    Both function return *this so they can be “chained”.
    Both functions throw out_of_range if index is invalid
    Both functions throw a length_error exception if the result exceeds the maximum number of characters.
    In the C-style string version, str must not be NULL.

    Sample code:
    */
    std::string aString{ "aaaa" };
    std::cout << aString << '\n'; // print "aaaa"

    aString.insert(2, std::string{ "bbbb" });
    std::cout << aString << '\n'; // print "aabbbbaa"

    aString.insert(4, "cccc");
    std::cout << aString << '\n'; // print "aabbccccbbaa"

    //Here’s a crazy version of insert() that allows you to insert a substring into a string at an arbitrary index:

    /*
    string& string::insert (size_type index, const string& str, size_type startindex, size_type num)

    This function inserts num characters str, starting from startindex, into the string at index.
    Returns *this so it can be “chained”.
    Throws an out_of_range if index or startindex is out of bounds
    Throws a length_error exception if the result exceeds the maximum number of characters.

    Sample code:
    */
    std::string bString{ "bbbb" };

    const std::string insertSTR{ "01234567" };
    bString.insert(2, insertSTR, 3, 4); // insert substring of sInsert from index [3,7) into sString at index 2
    std::cout << bString << '\n'; // print "bb3456bb"

    //There is a flavor of insert() that inserts the first portion of a C-style string:

    /*
    string& string::insert(size_type index, const char* str, size_type len)

    Inserts len characters of str into the string at index
    Returns *this so it can be “chained”.
    Throws an out_of_range exception if the index is invalid
    Throws a length_error exception if the result exceeds the maximum number of characters.
    Ignores special characters (such as ”)

    Sample code:
    */
    std::string cString{ "cccc" };

    cString.insert(2, "XXXX", 1);
    std::cout << cString << '\n';

    //There’s also a flavor of insert() that inserts the same character multiple times:

    /*
    string& string::insert(size_type index, size_type num, char c)

    Inserts num instances of char c into the string at index
    Returns *this so it can be “chained”.
    Throws an out_of_range exception if the index is invalid
    Throws a length_error exception if the result exceeds the maximum number of characters.

    Sample code:
    */
    std::string dString{ "dddd" };

    dString.insert(2, 4, 'c');
    std::cout << dString << '\n'; // print "ddccccdd"

    return 0;
}