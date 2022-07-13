#include <iostream>
#include <string>

#include "integer_repr.h"
#include "parse.h"

// Parameters:
// number: the integer to be represented
// base: the base of the number (2 or 10)
// type: the type of the integer
int main(int argc, char const *argv[])
{

    std::string type;
    irepr_t number;
    parse_input(argc, argv, number, type);
    print_integer_repr(number, type);
    return 0;
}
