// Whale Talk.cpp project from the vector block lesson, Codecademy.
/* Whale Talk takes a phrase like "turpentines and turtles" and translates it into 
   its "whale talk" equivalent, "uueeieeauuee".
   
   There are a few simple rues for translating text to whale language:
   
   1. There are no consonants. Only vowels excluding the letter y.
   2. The u's and e's are extra long, so we must double them.*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    
    // Whale, whale, whale
    // What have we got here?
    
    string original_sentence = "turpentine and turtles";
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    vector<char> result;

    for (int i = 0; i < original_sentence.size(); i++) {
        for (int j = 0; j < vowels.size(); j++) {
            if (original_sentence[i] == vowels[j]) {
                if (vowels[j] == 'u' || vowels[j] == 'e') {
                    result.push_back(vowels[j]);
                    result.push_back(vowels[j]);
                }
                else {
                    result.push_back(vowels[j]);
                }
            }
        }
    }

    for (int e = 0; e < result.size(); e++) {
        cout << result[e];
    }

}