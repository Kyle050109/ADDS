#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list){
    quickSort(list, 0, list.size()-1);
    return list;
}

void QuickSort::quickSort(std::vector<int>& list, int low, int high){
    if (low < high){
        int pivotIndex=partition(list, low, high);
        quickSort(list, low, pivotIndex-1);
        quickSort(list, pivotIndex+1, high);
    }
}


int QuickSort::partition(std::vector<int>& list, int low, int high){
    
    int pivotIndex=low+2;
    if (pivotIndex>high) pivotIndex=high;

    int pivot=list[pivotIndex];
    std::swap(list[pivotIndex], list[high]);
    int storeIndex=low;

    for (int i=low; i<high; i++){
        if (list[i]<pivot){
            std::swap(list[i], list[storeIndex]);
            storeIndex++;
        }
    }
    std::swap(list[storeIndex], list[high]);
    return storeIndex;
}


//int QuickSort::partition(std::vector<int>& list, int low, int ){
//        int pivotIndex =low+2; 
 //       if (pivotIndex>high){
   //         pivotIndex =high;
     //   }
       // int pivot = list[pivotIndex];
        //std::swap(list[pivotIndex], list[low]);  

//        int cnt=0;
  //      for (int i =low+1;i<=high;i++){
  //          if (list[i] <= pivot) {
    //            cnt++;
      //      }
       // }

//        pivotIndex =low+cnt;
  //      std::swap(list[pivotIndex], list[low]);

    //    int i=low, j=high;
      //  while (i<pivotIndex && j>pivotIndex){
        //    while (list[i] <= pivot){
          //      i++;
            //}

       //     while (list[j]>pivot){
         //       j--;
           // }

          //  if (i<pivotIndex && j>pivotIndex){
           //     std::swap(list[i++], list[j--]);
            //}
       // }

 //       return pivotIndex;
  //  }
