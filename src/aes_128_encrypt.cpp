#include "../include/aes_128_encrypt.h"

// Encryption function
byte *encrypt_aes_128(byte *plaintext, byte *key) {
    byte *ciphertext = NULL;
    // Fill this function
    return ciphertext;
}

// Shift rows
void shift_rows(byte *byte_array) {

    byte tmp[16];

    tmp[0] = byte_array[0];
    tmp[1] = byte_array[5];
    tmp[2] = byte_array[10];
    tmp[3] = byte_array[15];
    tmp[4] = byte_array[4];
    tmp[5] = byte_array[9];
    tmp[6] = byte_array[14];
    tmp[7] = byte_array[3];
    tmp[8] = byte_array[8];
    tmp[9] = byte_array[13];
    tmp[10] = byte_array[2];
    tmp[11] = byte_array[7];
    tmp[12] = byte_array[12];
    tmp[13] = byte_array[1];
    tmp[14] = byte_array[6];
    tmp[15] = byte_array[11];

    for (int i = 0; i < 16; i++){
        byte_array[i] = tmp[i];
    }
}

// Mix Columns
void mix_columns(byte *byte_array) {
    // Fill this function
}

