#include "Autocomplete.h"

Autocomplete::Autocomplete(){
    root=new TrieNode();
}

void Autocomplete::insert(std::string word){
    TrieNode* node=root;
    for (char c : word){
        if (!node->children[c]){
            node->children[c]=new TrieNode();
        }
        node=node->children[c];
    }
    node->isEndOfWord=true;
}

void Autocomplete::findWords(TrieNode* node, std::string currentWord, std::vector<std::string>& results){
    if (node->isEndOfWord){
        results.push_back(currentWord);
    }
    for (auto& child : node->children){
        findWords(child.second, currentWord + child.first, results);
    }
}

std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord){
    TrieNode* node=root;
    for (char c : partialWord){
        if (!node->children[c]) return std::vector<std::string>();
        node=node->children[c];
    }
    std::vector<std::string> suggestions;
    findWords(node, partialWord, suggestions);
    return suggestions;
}
