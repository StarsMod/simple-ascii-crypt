#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

void crypt(int codeKey, string &word) {
    string temporary = "";

    for (int i = 0; i < word.length(); i++) {
        temporary += word.at(i) + codeKey;
    }
    ofstream f("cryptedWords.txt", fstream :: app);
    f<<codeKey<<" ";
    f.close();
    word = temporary;
}

int main() {
    string word;
    int codeKey = 1;
    cout<<"Insert the word : "; cin>>word;
    cout<<"Insert the code Key : "; cin>>codeKey;
    while (codeKey != 0) {
        crypt(codeKey, word);
        cout<<"The code currently is : "<<word<<endl
        <<"If you wish to stop press 0,"<<endl
        <<"If you want to continue the coding insert the next code Key"<<endl;
        cin>>codeKey;
    }
    ofstream f("cryptedWords.txt", fstream :: app);
    f<<word<<endl;
    f.close();
}
