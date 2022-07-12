#include <cstdint>
#include <iostream>
#include <string>

union integer_repr
{
    char std_char;
    int8_t int8;
    signed char std_signed_char;
    uint8_t uint8;
    unsigned char u_std_char;
    int16_t int16;
    short int std_short_int;
    uint16_t uint16;
    unsigned short int u_short_std_int;
    int32_t int32;
    int std_int;
    long int long_std_int;
    uint32_t uint32;
    unsigned int u_std_int;
    unsigned long int u_long_std_int;
    int64_t int64;
    long long int long_long_std_int;
    uint64_t uint64;
    unsigned long long int u_long_long_std_int;
};

typedef integer_repr irepr_t;

void print_integer_repr(irepr_t irepr, std::string& type) {
    using std::cout;
    using std::cerr;
    using std::endl;

    if (type.compare("char"))
        cout << irepr.std_char << endl;
    else if (type.compare("int8_t"))
        cout << +irepr.int8 << endl;
    else if (type.compare("signed char"))
        cout << irepr.std_signed_char << endl;
    else if (type.compare("uint8_t"))
        cout << +irepr.uint8 << endl;
    else if (type.compare("unsigned char"))
        cout << irepr.u_std_char << endl;
    else if (type.compare("int16_t"))
        cout << irepr.int16 << endl;
    else if (type.compare("short int"))
        cout << irepr.std_short_int << endl;
    else if (type.compare("uint16_t"))
        cout << irepr.uint16 << endl;
    else if (type.compare("unsigned short int"))
        cout << irepr.u_short_std_int << endl;
    else if (type.compare("int32_t"))
        cout << irepr.int32 << endl;
    else if (type.compare("int"))
        cout << irepr.std_int << endl;
    else if (type.compare("long int"))
        cout << irepr.long_std_int << endl;
    else if (type.compare("uint32_t"))
        cout << irepr.uint32 << endl;
    else if (type.compare("unsigned int"))
        cout << irepr.u_std_int << endl;
    else if (type.compare("unsigned long int"))
        cout << irepr.u_long_std_int << endl;
    else if (type.compare("int64_t"))
        cout << irepr.int64 << endl;
    else if (type.compare("long long int"))
        cout << irepr.long_long_std_int << endl;
    else if (type.compare("uint64_t"))
        cout << irepr.uint64 << endl;
    else if (type.compare("unsigned long long int"))
        cout << irepr.u_long_long_std_int << endl;
    else
        cerr << "Invalid input: " << type << endl;
}