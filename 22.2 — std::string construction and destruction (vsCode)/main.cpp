#include <iostream>
#include <sstream>
#include <string>
#include <string_view>

//Here’s a simple solution for creating std::string from various types of inputs:
template<typename T>
inline std::string toString(T tX)
{
    std::ostringstream oStream;
    oStream << tX;
    return oStream.str();
}

//Converting strings to numbers:
template<typename T>
inline bool FromString(const std::string& sString, T& tX)
{
    std::istringstream iString(sString);
    return !(iString >> tX).fail();
}

int main()
{
    //String construction:

    /*string::string()

    This is the default constructor. It creates an empty string.

    Sample code:
    */
    std::string sSource;
    std::cout << sSource; // print: NOTHING.

    /*
    string::string(const std::string& strString)

    This is the copy constructor. This constructor creates a new string as a copy of strString.

    Sample code:
    */
    std::string sSource_2{ "my string" };
    std::string sOutput{ sSource_2 };
    std::cout << sOutput << '\n';

    /*
    string::string(const string& strString, size_type unIndex)
    string::string(const string& strString, size_type unIndex, size_type unLength)

    This constructor creates a new string that contains at most unLength characters from strString, starting with index 
    unIndex. If a NULL is encountered, the string copy will end, even if unLength has not been reached.
    If no unLength is supplied, all characters starting from unIndex will be used.
    If unIndex is larger than the size of the string, the out_of_range exception will be thrown.

    Sample code:
    */
    std::cout << "Constructor: (const string& strString, size_type unIndex): " << '\n';
    std::string sSource_3{ "my string" };
    std::string sOutput_3{ sSource_3, 3 }; // print "string"
    std::cout << sOutput_3 << '\n';
    
    std::cout << "Constructor: (const string& strString, size_type unIndex, size_type unLength): " << '\n';
    std::string sOutput_4{ sSource_3, 3, 3 }; // print "str"
    std::cout << sOutput_4 << '\n';

    /*
    string::string(const char *szCString)

    This constructor creates a new string from the C-style string szCString, up to but not including the NULL terminator.
    If the resulting size exceeds the maximum string length, the length_error exception will be thrown.
    Warning: szCString must not be NULL.

    Sample code:
    */
    std::cout << "Constructor: (const char *szCString)" << '\n';
    const char* szSource{ "my string" };
    std::string szOutput{ szSource };
    std::cout << szOutput << '\n'; // print "my string"

    /*
    string::string(const char *szCString, size_type unLength)

    This constructor creates a new string from the first unLength chars from the C-style string szCString.
    If the resulting size exceeds the maximum string length, the length_error exception will be thrown.
    Warning: For this function only, NULLs are not treated as end-of-string characters in szCString! This means 
    it is possible to read off the end of your string if unLength is too big. Be careful not to overflow your string buffer!

    Sample code:
    */
    std::cout << "Constructor: (const char *szCString, size_type unLength)" << '\n';
    const char* szSource_2{ "my string" }; 
    std::string szOutput_2{ szSource_2, 4 };
    std::cout << szOutput_2 << '\n'; // print "my s"

    /*
    string::string(size_type nNum, char chChar)

    This constructor creates a new string initialized by nNum occurances of the character chChar.
    If the resulting size exceeds the maximum string length, the length_error exception will be thrown.

    Sample code:
    */
    std::cout << "Constructor: (size_type nNum, char chChar)" << '\n';
    std::string my_Q_str(4, 'Q');
    std::cout << my_Q_str << '\n'; // print "QQQQ"
    
    //Constructing strings from numbers:
    std::cout << "Simple solution for creating std::string from various types of inputs:" << '\n';
    std::string sFour{ toString(4) };
    std::string sSixPointSeven{ toString(6.7) };
    std::string sA{ toString('A') };
    std::cout << sFour << '\n';
    std::cout << sSixPointSeven << '\n';
    std::cout << sA << '\n';

    //Converting strings to numbers:
    std::cout << "Converting strings to numbers:" << '\n';
    double dX;
    if(FromString("3.4", dX));
        std::cout << dX << '\n';
    if(FromString("ABC", dX));
        std::cout << dX << '\n';


    return 0;
}