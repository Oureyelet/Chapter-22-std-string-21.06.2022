#include <iostream>
#include <string>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()

int main()
{
    //Length of a string:

    /*
    size_type string::length() const
    size_type string::size() const

    Both of these functions return the current number of characters in the string, excluding the null terminator.

    Sample code:
    */
    std::cout << "function: size_type string::length() const" << '\n';
    std::cout << "function: size_type string::size() const" << '\n';
    std::string source { "12345678" };
    std::cout << source.length() << '\n'; // print 8

    /*
    bool string::empty() const

    Returns true if the string has no characters, false otherwise.

    Sample code:
    */
    std::cout << "function: bool string::empty() const" << '\n';
    std::string empty{};
    std::cout << "String empty ? : " << (empty.empty() ? "true" : "false") << '\n'; // print true
    std::string string2{ "Sophie" };
    std::cout << "String empty ? : " << (string2.empty() ? "true" : "false") << '\n'; // print false

    /*
    size_type string::max_size() const

    Returns the maximum number of characters that a string is allowed to have.
    This value will vary depending on operating system and system architecture.

    Sample code:
    */
    std::cout << "function: size_type string::max_size() const" << '\n';
    std::cout << string2.max_size() << '\n'; // print 4611686018427387903

    //Capacity of a string:

    /*
    size_type string::capacity() const

    Returns the number of characters a string can hold without reallocation.

    Sample code:
    */
    std::cout << "function: size_type string::capacity() const" << '\n';
    std::string s { "012345678" };
    std::cout << "Length: " << s.length() << '\n'; //print 9
    std::cout << "Capacity:" << s.capacity() << '\n'; // print 15

    /*
    void string::reserve()
    void string::reserve(size_type unSize)

    The second flavor of this function sets the capacity of the string to at least unSize (it can be greater). 
    Note that this may require a reallocation to occur.
    If the first flavor of the function is called, or the second flavor is called with unSize less than the current capacity, 
    the function will try to shrink the capacity to match the length. This request to shrink the capacity may be ignored, 
    depending on implementation.

    Sample code:
    */
    std::cout << "function: void string::reserve()" << '\n';
    std::cout << "or" << '\n';
    std::cout << "function: void string::reserve(size_type unSize)" << '\n';
    
    std::string s2 { "01234567" };
    std::cout << "Length: " << s2.length() << '\n'; //print 8
    std::cout << "Capacity:" << s2.capacity() << '\n'; // print 15

    s2.reserve(200);
    std::cout << "Length: " << s2.length() << '\n'; //print 8
    std::cout << "Capacity:" << s2.capacity() << '\n'; // print 200

    // Fill string up with random lower case characters:
    std::srand(std::time(nullptr)); // seed random number generator

    std::string s4; // length 0
    s4.reserve(120);

    for(int count{ 0 }; count < 121; ++count)
        s4 += 'a' + std::rand() % 26;
    
    std::cout << s4;
    std::cout << '\n';

    return 0;
}