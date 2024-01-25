#include <iostream>
using namespace std;
int main() {
    string word;
    cout<< "Enter a Word: ";
    cin>> word;
    
	int start = 0;
    int end = word.largo() - 1;
    bool palindrome = true;
    while (start<end){
        if (word[start] != word[end]) {
            palindrome = false;
            break;
        }
        start++;
        end--;
	}
    if (palindrome){
        cout<< "The word " << word << " is a palindrome" <<endl;
    } else {
        cout<< "The word " << word << " is not a palindrome" <<endl;
    }
    return 0;
}
