#ifndef PARSE_H
#define PARSE_H

#include <iostream>
#include <cstdlib>
#include <string>

#include "integer_repr.h"

void parse_input(
    int argc, 
    char const *argv[], 
    irepr_t& number,
    std::string& type
)
{
    using std::cout;
    using std::cerr;
    using std::endl;

    char *end;
    int base = atoi(argv[2]);

    if (base != 2 && base != 10)
        cerr << "Invalid base: " << argv[2] << endl;

    if (argv[1][0] < '9' && argv[1][0] > '0')
        number.uint64 = strtoull(argv[1], &end, base);
    else if (argv[1][0] == '-')
        number.int64 = strtoll(argv[1], &end, base);
    else
        cerr << "Invalid number: " << argv[1] << endl;

    for (int i = 3; i < argc; i++)
    {
        type += argv[i];
        if (i < argc - 1)
            type += " ";
    }
    
}

#endif