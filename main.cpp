#include <iostream>
#include "include/aes_128_common.h"
#include "include/aes_128_encrypt.h"
#include "include/aes_128_key_expansion.h"
#include "include/aes_128_decrypt.h"

using namespace std;

int main() {

    byte *key = string_to_byte_array("FLORIDAPOLYUNIV");
    byte *plaintext_block = string_to_byte_array("AES-128 is great!");
    byte *ciphertext = NULL;

    newline();
    cout << "Key: ";
    print_byte_array(key, 16);

    newline();
    cout << "Plaintext block:" << endl;
    print_state(plaintext_block);


    newline();
    print_byte_array(plaintext_block, 16);
    encrypt_aes_128(plaintext_block, key);
    // for (int i = 0; i < 16; i++){
    //      ciphertext[i] = plaintext_block[i];
    // }
    print_byte_array(plaintext_block, 16);
    // byte *tmp = string_to_byte_array("FOUR");
    // print_byte_array(tmp, 4);
    // g_function(tmp, 1);
    // print_byte_array(tmp, 4);
    // circular_left_shift(tmp);
    // print_byte_array(tmp, 4);
    // add_round_constant(tmp, 7);
    // print_byte_array(tmp, 4);
    // byte roundkeys[176];
    // get_round_keys(key, roundkeys);
    // print_byte_array(roundkeys, 176);

    delete key;
    delete plaintext_block;

    return 0;
}
