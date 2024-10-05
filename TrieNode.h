#ifndef TRIENODE_H
#define TRIENODE_H
#include<iostream>
#include<unordered_map>
class TrieNode{
public:
    TrieNode(); 
    bool isEndOfWord;
    int routerNumber;
    std::unordered_map<char, TrieNode*> children;
};
#endif
