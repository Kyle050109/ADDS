#include "DocumentManager.h"


void DocumentManager::addDocument(const std::string& name, int id, int license_limit){
    documents.push_back({id,{name, license_limit}});
}

void DocumentManager::addPatron(int patronID){
    patrons.push_back(patronID);
}

int DocumentManager::search(const std::string& name){
    for (const std::pair<int, std::pair<std::string, int>>& doc : documents){
        if (doc.second.first == name){
            return doc.first; 
        }
    }
    return 0;
}

bool DocumentManager::borrowDocument(int docid, int patronID){
    for (std::pair<int, std::pair<std::string, int>>& doc : documents){
        if (doc.first==docid && doc.second.second>0){
            doc.second.second--; 
            return true;
        }
    }
    return false;
}


void DocumentManager::returnDocument(int docid, int patronID){
    for (std::pair<int, std::pair<std::string, int>>& doc : documents){
        if (doc.first==docid){
            doc.second.second++;
            break;
        }
    }
}

void DocumentManager::printDocuments(){
    for (std::pair<int, std::pair<std::string, int>>& doc : documents) {
        std::cout << "Doc ID: " << doc.first << ", Name: " << doc.second.first << ", Limit: " << doc.second.second << std::endl;
    }
}

void DocumentManager::sortDocumentsByID(){
    bubbleSort();
}

void DocumentManager::bubbleSort() {
    bool swapped;
    for (size_t i=0;i<documents.size()-1;i++){
        swapped=false;
        for (size_t j=0; j<documents.size()-i-1;j++){
            if (documents[j].first>documents[j+1].first){
                std::swap(documents[j], documents[j+1]);
                swapped=true;
            }
        }
        if (!swapped)
            break; 
    }
}
