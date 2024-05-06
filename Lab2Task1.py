def caesar_decrypt(cipher_text, shift):
    decrypted_text = ''
    for char in cipher_text:
        if char.isalpha():
            shifted_char = chr((ord(char) - shift - 65) % 26 + 65) if char.isupper() else chr((ord(char) - shift - 97) % 26 + 97)
            decrypted_text += shifted_char
        else:
            decrypted_text += char
    return decrypted_text

def brute_force_caesar(cipher_text):
    for shift in range(26):
        decrypted_text = caesar_decrypt(cipher_text, shift)
        print(f"Shift {shift}: {decrypted_text}")

cipher_text = "odroboewscdrolocdcwkbdmyxdbkmdzvkdpybwyeddrobo"
brute_force_caesar(cipher_text)
