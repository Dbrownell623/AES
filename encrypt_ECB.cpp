#include <iostream>
#include <string.h>
#include "include/aes_128_common.h"
#include "include/aes_128_encrypt.h"
#include "include/aes_128_key_expansion.h"

using namespace std;

int main() {
    unsigned char message[] = "AES-128 is great! There are so many things to encrypt!";
    byte *key = string_to_byte_array("FLORIDAPOLYUNIV");
    byte *ciphertext = string_to_byte_array("Initialized");
    

    int originalLen = strlen((const char*)message);
    int lenOfPadded = originalLen;
    if (lenOfPadded % 16 != 0)
    {
        lenOfPadded = (lenOfPadded / 16 + 1) * 16;
    }
    
    std::string messagestr( reinterpret_cast< char const* >(message) );
    
    byte *plaintext_block = string_to_byte_array(messagestr);
    byte *padded = new byte[lenOfPadded];

    for (int i = 0; i < lenOfPadded; i++)
    {
        if (i >= originalLen) padded[i] = 0;
        else padded[i] = plaintext_block[i];
    }
    cout << "Original Text:";
    newline();
    cout << message;
    newline();
    cout << "Encrypted Blocks:";
    newline();
    for (int i = 0; i < lenOfPadded; i += 16)
    {
        encrypt_aes_128(padded + i, key, ciphertext);
        print_byte_array(ciphertext, 16);
    }
    

}