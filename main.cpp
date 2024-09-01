#include <iostream>
#include <vector>
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"


void print(std::vector<int>& list){
    for (int num : list) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main(){
    std::vector<int> list;
    int num;

    while (std::cin >> num){
        list.push_back(num);
            if (std::cin.peek()=='\n')
            break;
    }

   
    QuickSort quicksort;
    std::vector<int> sortedList = quicksort.sort(list);

    int target=1;
    RecursiveBinarySearch binarySearch;
    bool result=binarySearch.search(sortedList, target);

    std::cout << std::boolalpha << result << " ";
    for (int num : sortedList){
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}





//int main() {
    //std::vector<int> list = {1, 3, 5, -5, 100, 7777, 2014};
   // QuickSort quickSort;
    //list = quickSort.sort(list);

    //RecursiveBinarySearch binarySearch;
   // bool found = binarySearch.search(list, 1);

    //if (found) {
       // std::cout << "true ";
   // } else {
   //     std::cout << "false ";
    //}

   // for (size_t i = 0; i < list.size(); ++i) {
    //    std::cout << list[i] << " ";
   // }
   // std::cout << std::endl;

   // return 0;
//}
