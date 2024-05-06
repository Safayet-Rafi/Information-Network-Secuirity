#include <iostream>
#include <string>

using namespace std;

string ceasar_cipher(string cipher_text, int shift) {
    string decrypted_text = "";
    for (char& c : cipher_text) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            decrypted_text += ((c - base - shift + 26) % 26) + base;
        } else {
            decrypted_text += c;
        }
    }
    return decrypted_text;
}


int main() {
    string cipher_text = "odroboewscdrolocdcwkbdmyxdbkmdzvkdpybwyeddrobo";
    int shift = 3;
    string decrypted_text = ceasar_cipher(cipher_text, shift);
    cout << "Decrypted Text = " << decrypted_text << endl;
    return 0;
}
