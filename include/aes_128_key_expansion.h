#include "aes_128_common.h"

#ifndef AES_128_KEY_EXPANSION_H
#define AES_128_KEY_EXPANSION_H

void circular_left_shift(byte *byte_word);

void add_round_constant(byte *byte_word, int round_number);

void g_function(byte *byte_word, int round_number);

void get_round_keys(byte *key, byte *ExpandedKeys);

#endif //AES_128_KEY_EXPANSION_H
