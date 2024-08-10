#include "Truckloads.h"

int Truckloads::numTrucks(int numCrate, int loadSize){
    if (numCrate<=loadSize){
        return 1;
    }

    int half1=numCrate/2;
    int half2=numCrate-half1;

    return numTrucks(half1, loadSize)+numTrucks(half2, loadSize);
}