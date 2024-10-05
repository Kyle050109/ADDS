#include "PrefixMatcher.h"

PrefixMatcher::PrefixMatcher(){
    root=new TrieNode();
}
void PrefixMatcher::insert(std::string address, int routerNumber){
    TrieNode* node=root;
    for (char bit : address){
        if (!node->children[bit]){
            node->children[bit]=new TrieNode();
        }
        node=node->children[bit];
    }
    node->routerNumber=routerNumber;
}

int PrefixMatcher::selectRouter(std::string networkAddress){
    TrieNode* node=root;
    int lastMatchingRouter =-1;

    for (char bit : networkAddress){
        if (node->routerNumber != -1){
            lastMatchingRouter=node->routerNumber;
        }
        if (!node->children[bit]){
            break;
        }
        node=node->children[bit];
    }
    return lastMatchingRouter;
}
