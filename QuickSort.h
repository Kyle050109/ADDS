#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Sort.h"

class QuickSort : public Sort{

    private:
        void quickSort(std::vector<int>& list, int low, int high);
        int partition(std::vector<int>& list, int low, int high);
    
    public:
        std::vector<int> sort(std::vector<int> list);
};

#endif
