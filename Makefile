all : main

main : src/aes_128_common.cpp src/aes_128_encrypt.cpp src/aes_128_decrypt.cpp src/aes_128_key_expansion.cpp main.cpp
	g++ src/aes_128_common.cpp src/aes_128_encrypt.cpp src/aes_128_decrypt.cpp src/aes_128_key_expansion.cpp main.cpp -o test

