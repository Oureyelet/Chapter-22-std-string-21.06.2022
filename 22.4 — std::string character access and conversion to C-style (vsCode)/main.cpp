#include <iostream>
#include <string>
#include <cstring> // for std::strlen()

int main()
{
    //Character access:

    /*
    char& string::operator[] (size_type nIndex)
    const char& string::operator[] (size_type nIndex) const

        Both of these functions return the character with index nIndex
        Passing an invalid index results in undefined behavior
        Because char& is the return type, you can use this to edit characters in the array

    Sample code:
    */

    std::string sSource{ "abcdefg" };
    std::cout << sSource[5] << '\n'; // print f
    sSource[5] = 'X';
    std::cout << sSource << '\n'; // print abcdeXg

    /*
    char& string::at (size_type nIndex)
    const char& string::at (size_type nIndex) const

        Both of these functions return the character with index nIndex
        Passing an invalid index results in an out_of_range exception
        Because char& is the return type, you can use this to edit characters in the array

    Sample code:
    */
    std::cout << sSource.at(3) << '\n';
    sSource.at(3) = 'Y';
    std::cout << sSource << '\n';

    //std::string provides 3 different ways to convert std::string to C-style strings arrays:

    /*
    const char* string::c_str () const

    Returns the contents of the string as a const C-style string
    A null terminator is appended
    The C-style string is owned by the std::string and should not be deleted

    Sample code:
    */
    std::string rodzinka{ "Kacperscy" };
    std::cout << "std::strlen(rodzinka.c_str()): " <<std::strlen(rodzinka.c_str()) << '\n';
    
    /*
    const char* string::data () const

    Returns the contents of the string as a const C-style string
    A null terminator is appended. This function performs the same action as c_str()
    The C-style string is owned by the std::string and should not be deleted

    Sample code:
    */
    std::string doughter{ "Sophie" };
    const char* wife{ "Ania" };
    
    if(std::memcmp(doughter.data(), wife, doughter.length()) == 0)
        std::cout << "The string are equal" << '\n';
    else    
        std::cout << "The string are not equal" << '\n';
    
    /*
    size_type string::copy(char *szBuf, size_type nLength, size_type nIndex = 0) const

    Both flavors copy at most nLength characters of the string to szBuf, beginning with character nIndex
    The number of characters copied is returned
    No null is appended. It is up to the caller to ensure szBuf is initialized to NULL or terminate the string using the 
    returned length
    The caller is responsible for not overflowing szBuf

    Sample code:
    */
    std::string ourSource{ "Jezus Christ is my Lord and God and savior" };
    char szBuf[77];
    int nLength{ static_cast<int>(ourSource.copy(szBuf, 5, 19)) };
    szBuf[nLength];
    std::cout << "Jesus is my " << szBuf << '\n';

    //c_str() is the easiest and safest of the three functions to use.

    return 0;
}