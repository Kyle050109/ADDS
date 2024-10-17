#ifndef DOCUMENT_MANAGER_H
#define DOCUMENT_MANAGER_H

#include <iostream>
#include <vector>
#include <string>
#include <utility>//std::pair

class DocumentManager{

private:
    std::vector<std::pair<int, std::pair<std::string, int>>> documents;
    std::vector<int> patrons;
    void bubbleSort();

public:
    void addDocument(const std::string& name, int id, int license_limit);
    void addPatron(int patronID);
    int search(const std::string& name);
    bool borrowDocument(int docid, int patronID);
    void returnDocument(int docid, int patronID);
    void printDocuments(); 
    void sortDocumentsByID();

};
#endif
