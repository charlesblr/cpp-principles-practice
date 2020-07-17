// Disliked words

#include "std_lib_facilities.h"

int main() {
    vector<string> words;
    vector<string> disliked_words = {"brocoli", "carrots", "chocolate", "bacon"};
    string hidden_word = "BLEEP";

	for(string word; cin >> word; ) {
		words.push_back(word);
	}
    
    for(int i; i < words.size(); ++i) {
    	string word = words[i];
	    for(string disliked_word : disliked_words) {
			if(word == disliked_word) {
			   words[i] = hidden_word;
			}
		}
	}

	for(string word : words){
		cout << word << "\t";
	}
}
