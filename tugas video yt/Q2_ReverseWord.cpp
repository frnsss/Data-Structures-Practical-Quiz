
#include <iostream>
using namespace std;

int main() {
    char word[100];
    char stack[100];
    int top = -1;

    cout << "Enter a word: ";
    cin >> word;

    for (int i = 0; word[i] != '\0'; i++) {
        top++;
        stack[top] = word[i];
    }

    cout << "Original word: " << word << endl;

    cout << "Reversed word: ";

    while (top >= 0) {
        cout << stack[top];
        top--;
    }

    cout << endl;

    return 0;
}
