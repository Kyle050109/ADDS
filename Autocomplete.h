#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H
#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
#include"TrieNode.h"
class Autocomplete{
private:
    TrieNode* root;
    void findWords(TrieNode* node, std::string currentWord, std::vector<std::string>& results);
public:
    Autocomplete();
    void insert(std::string word);
    std::vector<std::string> getSuggestions(std::string partialWord);
};
#endif
