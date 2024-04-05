#include <iostream>
#include <cstdlib>
using namespace std;

//Function Prototype
int countWords(char words[]);

int main(){

    char words[256];

    cout << "Enter a sentence: ";
    cin.getline(words, 256);

    int word_num = countWords(words);
    cout << "The Number of words in the string is: " << word_num << endl;

    system("PAUSE");
    return 0;
}

int countWords(char words[]){
    int nSpaces = 0;

    for (int i=0; i<256 && words[i] != '\0'; i++){
        if(isspace(words[i])){
            nSpaces++;
        }
    }
    // The Number of words = the number of spaces + 1
    return nSpaces + 1;
}