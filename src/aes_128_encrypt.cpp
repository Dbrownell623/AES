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
void mix_columns(byte *array) {
    byte tmp[16];

    tmp[0] = (byte)(mul2[array[0]] ^ mul3[array[1]] ^ array[2] ^ array[3]);
    tmp[1] = (byte)(array[0] ^ mul2[array[1]] ^ mul3[array[2]] ^ array[3]);
    tmp[2] = (byte)(array[0] ^ array[1] ^ mul2[array[2]] ^ mul3[array[3]]);
    tmp[3] = (byte)(mul3[array[0]] ^ array[1] ^ array[2] ^ mul2[array[3]]);

    tmp[4] = (byte)(mul2[array[4]] ^ mul3[array[5]] ^ array[6] ^ array[7]);
    tmp[5] = (byte)(array[4] ^ mul2[array[5]] ^ mul3[array[6]] ^ array[7]);
    tmp[6] = (byte)(array[4] ^ array[5] ^ mul2[array[6]] ^ mul3[array[7]]);
    tmp[7] = (byte)(mul3[array[4]] ^ array[5] ^ array[6] ^ mul2[array[7]]);

    tmp[8] = (byte)(mul2[array[8]] ^ mul3[array[9]] ^ array[10] ^ array[11]);
    tmp[9] = (byte)(array[8] ^ mul2[array[9]] ^ mul3[array[10]] ^ array[11]);
    tmp[10] = (byte)(array[8] ^ array[9] ^ mul2[array[10]] ^ mul3[array[11]);
    tmp[11] = (byte)(mul3[array[8]] ^ array[9] ^ array[10] ^ mul2[array[11]]);

    tmp[12] = (byte)(mul2[array[12]] ^ mul3[array[13]] ^ array[14] ^ array[15]);
    tmp[13] = (byte)(array[12] ^ mul2[array[13]] ^ mul3[array[14]] ^ array[15]);
    tmp[14] = (byte)(array[12] ^ array[13] ^ mul2[array[14]] ^ mul3[array[15]]);
    tmp[15] = (byte)(mul3[array[12]] ^ array[13] ^ array[14] ^ mul2[array[15]]);

    for (int i = 0; i < 16; i++){
        array[i] = tmp[i];
    }
}

