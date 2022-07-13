#ifndef INTEGER_REPR_H
#define INTEGER_REPR_H


#include <cstdint>
#include <iostream>
#include <string>
#include <bitset>

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
    using std::cout, std::cerr, std::endl, std::bitset;
    
    if (!type.compare("char"))
    {
        cout << "Decimal: " << irepr.std_char << endl;
        cout << "Binary: " << bitset<8>(irepr.std_char) << endl;
    }
    else if (!type.compare("int8_t"))
    {
        cout << "Decimal: " << +irepr.int8 << endl;
        cout << "Binary: " << bitset<8>(irepr.int8) << endl;
    }
    else if (!type.compare("signed char"))
    {
        cout << "Decimal: " << irepr.std_signed_char << endl;
        cout << "Binary: " << bitset<8>(irepr.std_signed_char) << endl;
    }
    else if (!type.compare("uint8_t"))
    {
        cout << "Decimal: " << +irepr.uint8 << endl;
        cout << "Binary: " << bitset<8>(irepr.uint8) << endl;
    }
    else if (!type.compare("unsigned char"))
    {
        cout << "Decimal: " << irepr.u_std_char << endl;
        cout << "Binary: " << bitset<8>(irepr.u_std_char) << endl;
    }
    else if (!type.compare("int16_t"))
    {
        cout << "Decimal: " << irepr.int16 << endl;
        cout << "Binary: " << bitset<16>(irepr.int16) << endl;        
    }
    else if (!type.compare("short int"))
    {
        cout << "Decimal: " << irepr.std_short_int << endl;
        cout << "Binary: " << bitset<16>(irepr.std_short_int) << endl;        
    }
    else if (!type.compare("uint16_t"))
    {
        cout << "Decimal: " << irepr.uint16 << endl;
        cout << "Binary: " << bitset<16>(irepr.uint16) << endl;        
    }
    else if (!type.compare("unsigned short int"))
    {
        cout << "Decimal: " << irepr.u_short_std_int << endl;
        cout << "Binary: " << bitset<16>(irepr.u_short_std_int) << endl;        
    }
    else if (!type.compare("int32_t"))
    {
        cout << "Decimal: " << irepr.int32 << endl;
        cout << "Binary: " << bitset<32>(irepr.int32) << endl;        
    }
    else if (!type.compare("int"))
    {
        cout << "Decimal: " << irepr.std_int << endl;
        cout << "Binary: " << bitset<32>(irepr.std_int) << endl;        
    }
    else if (!type.compare("long int"))
    {
        cout << "Decimal: " << irepr.long_std_int << endl;
        cout << "Binary: " << bitset<32>(irepr.long_std_int) << endl;        
    }
    else if (!type.compare("uint32_t"))
    {
        cout << "Decimal: " << irepr.uint32 << endl;
        cout << "Binary: " << bitset<32>(irepr.uint32) << endl;        
    }
    else if (!type.compare("unsigned int"))
    {
        cout << "Decimal: " << irepr.u_std_int << endl;
        cout << "Binary: " << bitset<32>(irepr.u_std_int) << endl;        
    }
    else if (!type.compare("unsigned long int"))
    {
        cout << "Decimal: " << irepr.u_long_std_int  << endl;
        cout << "Binary: " << bitset<32>(irepr.u_long_std_int) << endl;        
    }
    else if (!type.compare("int64_t"))
    {
        cout << "Decimal: " << irepr.int64  << endl;
        cout << "Binary: " << bitset<64>(irepr.int64) << endl;        
    }
    else if (!type.compare("long long int"))
    {
        cout << "Decimal: " << irepr.long_long_std_int << endl;
        cout << "Binary: " << bitset<64>(irepr.long_long_std_int) << endl;        
    }
    else if (!type.compare("uint64_t"))
    {
        cout << "Decimal: " << irepr.uint64 << endl;
        cout << "Binary: " << bitset<64>(irepr.uint64) << endl;        
    }
    else if (!type.compare("unsigned long long int"))
    {
        cout << "Decimal: " << irepr.u_long_long_std_int << endl;
        cout << "Binary: " << bitset<64>(irepr.u_long_long_std_int) << endl;        
    }
    else
        cerr << "Invalid input: " << type << endl;
}

#endif