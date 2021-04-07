#include <iostream>
#include "include/aes_128_common.h"
#include "include/aes_128_key_expansion.h"

using namespace std;

int main() {
    byte *key = string_to_byte_array("FLORIDAPOLYUNIV");
    byte roundkeys[176];

    
    cout << "Original Key: ";
    newline();
    print_byte_array(key, 16);

    newline();
    cout << "Expanded Round Keys: ";
    newline();
    get_round_keys(key, roundkeys);
    for (int i = 0; i < 176; i++)
    {
        if (i % 16 == 0)
        {
            print_byte_array(roundkeys + i, 16);
            newline();
        }
        
    }
    
}