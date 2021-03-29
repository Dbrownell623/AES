#include "../include/aes_128_key_expansion.h"

// Circular Left Shift (Rotate Left)
void circular_left_shift(byte *byte_word) {
    byte* q = (byte*)byte_word;
    *q = (*q >> 8) | ((*q & 0xff) << 24);
}

// Add Round Constant
void add_round_constant(byte *byte_word, unsigned char round_number) {
    byte_word[0] ^= Rcon[round_number];
}


// The g function of the AES key expansion
byte *g_function(byte *byte_word)
{
    byte *g_return_word=new byte[4];
    // Fill this function
    return g_return_word;
}


// Get round key
byte *get_round_key(byte *key_bytes, unsigned char round_number) {
    byte *round_key = new byte[16];
    // Fill this function
    // Note: Don't forget to delete the return of the g_function once you are done using it
    return round_key;
}

