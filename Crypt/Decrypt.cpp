#include <iostream>
#include <string.h>
using namespace std;

void decrypt(int codeKey, string &word) {
    string temporary = "";

    for (int i = 0; i < word.length(); i++) {
        temporary += word.at(i) - codeKey;
    }
    word = temporary;
}

int main() {
    string word;
    int codeKey = 1;
    cout<<"Insert the coded word : "; cin>>word;
    cout<<"Insert the code Key : "; cin>>codeKey;
    while (codeKey != 0) {
        decrypt(codeKey, word);
        cout<<"If you entered all the keys press 0 else insert the next key"<<endl;
        cin>>codeKey;
    }
    cout<<"The word is : "<<word;
}
