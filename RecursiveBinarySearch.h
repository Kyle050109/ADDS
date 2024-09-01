#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H
#include <vector>

class RecursiveBinarySearch{
    private:
        bool binarySearch(std::vector<int>& list, int target, int low, int high);

    public:
        bool search(std::vector<int>& list, int target);
};
#endif
