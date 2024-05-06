# Lab 3

## Task1 : CBC MODE

This is for encryption. The cipher.txt file is located [here](https://github.com/Safayet-Rafi/Information-Network-Secuirity/tree/main/Lab3/Task1/CBC).

```bash
openssl enc -aes-128-cbc -e -in plain.txt -out cipher.bin -K 2b7e151628aed2a6abf7158809cf4f3c -iv 000102030405060708090a0b0c0d0e0f 

```
This is for decryption. The decrypted.txt file is located [here](https://github.com/Safayet-Rafi/Information-Network-Secuirity/tree/main/Lab3/Task1/CBC)

```bash
openssl enc -aes-128-cbc -d -in cipher.bin -out decrypted.txt -K 2b7e151628aed2a6abf7158809cf4f3c -iv 000102030405060708090a0b0c0d0e0f
```

## Task1 : CFB MODE
This is for encryption. The cipher.txt file is located [here](https://github.com/Safayet-Rafi/Information-Network-Secuirity/tree/main/Lab3/Task1/CFB).

```bash
openssl enc -aes-128-cfb -e -in plain.txt -out cipher.bin  -K 2b7e151628aed2a6abf7158809cf4f3c -iv 6a09e667f3bcc908
```

This is for decryption. The decrypted.txt file is located [here](https://github.com/Safayet-Rafi/Information-Network-Secuirity/tree/main/Lab3/Task1/CFB)

```bash
openssl enc -aes-128-cfb -d -in cipher.bin -out decrypted.txt -K 2b7e151628aed2a6abf7158809cf4f3c -iv 6a09e667f3bcc908
```

