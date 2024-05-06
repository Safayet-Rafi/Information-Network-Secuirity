#include<iostream>
#include<string>
#include<map>
using namespace std;

string substitution_cipher(string cipher_text){
    map<char,int>frequency;

    int i = 0;
    while(cipher_text[i] != '\0'){
        if(isalpha(cipher_text[i]))
            frequency[cipher_text[i]]++;
        i++;
    }

    auto frequency_compare = [](pair<char, int>& a, pair<char, int>& b) {
        return a.second > b.second; 
    };

    vector<pair<char,int>>freq_vector(frequency.begin(),frequency.end());

    sort(freq_vector.begin(), freq_vector.end(), frequency_compare);

    auto compare = [](pair<char, double>& a, pair<char, double>& b) {
        return a.second > b.second; 
    };


    vector<pair<char, double>> fdech = {
        {'a', 8.05}, {'b', 1.67}, {'c', 2.23}, {'d', 5.10}, {'e', 12.22},
        {'f', 2.14}, {'g', 2.30}, {'h', 6.62}, {'i', 6.28}, {'j', 0.19},
        {'k', 0.95}, {'l', 4.08}, {'m', 2.33}, {'n', 6.95}, {'o', 7.63},
        {'p', 1.66}, {'q', 0.06}, {'r', 5.29}, {'s', 6.02}, {'t', 9.67},
        {'u', 2.92}, {'v', 0.82}, {'w', 2.60}, {'x', 0.11}, {'y', 2.04},
        {'z', 0.06}
    };
    
    sort(fdech.begin(), fdech.end(),compare);

    vector<pair<char,char>>key_pairs;
    for(int i = 0 ; i < freq_vector.size() ; i++){
        key_pairs.push_back({freq_vector[i].first, fdech[i].first});
    }

    i = 0;
   while (cipher_text[i] != '\0') {
    if (isalpha(cipher_text[i])) {
        
        auto it = find_if(key_pairs.begin(), key_pairs.end(), [&](pair<char, char> &pair) {
            return pair.first == cipher_text[i];
        });
        
        if (it != key_pairs.end()) {
            cipher_text[i] = it->second;
        }
    }
    i++;
   }

    return cipher_text;
}

int main()
{
    string cipher_text;
    getline(cin, cipher_text);

    string decrypted_text = substitution_cipher(cipher_text);
    cout<<decrypted_text;

}