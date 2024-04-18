
#include <iostream>
#include <string>

using namespace std;

string scramble(string word);

int main() {
    string word;

    cout << "Please enter a string" << endl;
    
    while (cin >> word) {
        cout << scramble(word) << " ";
    }
    cout << endl;
    
    return 0;
}

string scramble(string word)
{
    int length = word.length();
    int i = 1;
    
    if (length == 1) { return word; }
    if (length == 2) { return word; }
    if (length == 3) { return word; }
    if (length == 4) {
        int j = length - 2;

        while (i < j) {
            char temp = word[i];
            word[i] = word[j];
            word[j] = temp;
            i++;
            j--;
        }
        return word;
    }
    if (length == 5) {
        int j = length - 3;

        while (i < j) {
            char temp = word[i];
            word[i] = word[j];
            word[j] = temp;
            i++;
            j--;
        }
        return word;
    }
    if (length == 6) {
        int j = length - 4;

        while (i < j) {
            char temp = word[i];
            word[i] = word[j];
            word[j] = temp;
            i++;
            j--;
        }
        return word;
    }
    if (length == 7) {
        int j = length - 5;

        while (i < j) {
            char temp = word[i];
            word[i] = word[j];
            word[j] = temp;
            i++;
            j--;
        }
        return word;
    }
    if (length == 8) {
        int j = length - 6;

        while (i < j) {
            char temp = word[i];
            word[i] = word[j];
            word[j] = temp;
            i++;
            j--;
        }
        return word;
    }
    if (length == 9) {
        int j = length - 7;

        while (i < j) {
            char temp = word[i];
            word[i] = word[j];
            word[j] = temp;
            i++;
            j--;
        }
        return word;
    }
    if (length == 10) {
        int j = length - 8;

        while (i < j) {
            char temp = word[i];
            word[i] = word[j];
            word[j] = temp;
            i++;
            j--;
        }
        return word;
    }
    if (length == 11) {
        int j = length - 9;

        while (i < j) {
            char temp = word[i];
            word[i] = word[j];
            word[j] = temp;
            i++;
            j--;
        }
        return word;
    }
    if (length == 12) {
        int j = length - 10;

        while (i < j) {
            char temp = word[i];
            word[i] = word[j];
            word[j] = temp;
            i++;
            j--;
        }
        return word;
    }
}