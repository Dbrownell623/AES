all : main key encrypt decrypt

main : src/aes_128_common.cpp src/aes_128_encrypt.cpp src/aes_128_decrypt.cpp src/aes_128_key_expansion.cpp main.cpp
	g++ src/aes_128_common.cpp src/aes_128_encrypt.cpp src/aes_128_decrypt.cpp src/aes_128_key_expansion.cpp main.cpp -o test

key : src/aes_128_common.cpp src/aes_128_key_expansion.cpp key.cpp
	g++ src/aes_128_common.cpp src/aes_128_key_expansion.cpp key.cpp -o driver1

encrypt : src/aes_128_common.cpp src/aes_128_encrypt.cpp src/aes_128_key_expansion.cpp encrypt_ECB.cpp
	g++ src/aes_128_common.cpp src/aes_128_encrypt.cpp src/aes_128_key_expansion.cpp encrypt_ECB.cpp -o driver2

decrypt : src/aes_128_decrypt.cpp src/aes_128_common.cpp src/aes_128_encrypt.cpp src/aes_128_key_expansion.cpp decrypt_ECB.cpp
	g++ src/aes_128_decrypt.cpp src/aes_128_common.cpp src/aes_128_encrypt.cpp src/aes_128_key_expansion.cpp decrypt_ECB.cpp -o driver3