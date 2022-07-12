#include <iostream>
#include <cstdlib>
#include <unordered_map>
#include <string>
#include <cstring>

#include "integer_repr.h"


// Parameters:
// number: the integer to be represented
// base: the base of the number (2 or 10)
// type: the type of the integer
int main(int argc, char const *argv[])
{
    using std::cout;
    using std::cerr;
    using std::endl;
    using std::string;
    irepr_t number;
    char *end;
    int base = atoi(argv[2]);

    if (base != 2 or base != 10)
    {
        cerr << "Invalid input: " << argv[2] << endl;
        return 1;
    }

    if (argv[1][0] < '9' && argv[1][0] > '0')
        number.uint64 = strtoull(argv[1], &end, base);
    else if (argv[1][0] == '-')
        number.int64 = strtoll(argv[1], &end, base);
    else
    {
        cerr << "Invalid input: " << argv[1] << endl;
        return 1;
    }

    string type;

    for (int i = 3; i < argc; i++)
    {
        type += argv[i];
        if (i < argc - 1)
            type += " ";
    }

    print_integer_repr(number, type);

    return 0;
}
