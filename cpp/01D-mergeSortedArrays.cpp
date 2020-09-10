#ifndef MERGE_SORTED_ARRAYS
#define MERGE_SORTED_ARRAYS

#include <vector>

using namespace std;

inline vector<int> mergeVectors(const vector<int>& myVector, const vector<int>& alicesVector)
{
    // set up our mergedVector
    vector<int> mergedVector(myVector.size() + alicesVector.size());

    size_t currentIndexAlices = 0;
    size_t currentIndexMine = 0;
    size_t currentIndexMerged = 0;

    while (currentIndexMerged < mergedVector.size()) {

        bool isMyVectorExhausted = currentIndexMine >= myVector.size();
        bool isAlicesVectorExhausted = currentIndexAlices >= alicesVector.size();

        // case: next comes from my vector
        // my vector must not be exhausted, and EITHER:
        // 1) Alice's vector IS exhausted, or
        // 2) the current element in my vector is less
        //    than the current element in Alice's vector
        if (!isMyVectorExhausted && (isAlicesVectorExhausted
            || (myVector[currentIndexMine] < alicesVector[currentIndexAlices]))) {

            mergedVector[currentIndexMerged] = myVector[currentIndexMine];
            ++currentIndexMine;

            // case: next comes from Alice's vector
        }
        else {
            mergedVector[currentIndexMerged] = alicesVector[currentIndexAlices];
            ++currentIndexAlices;
        }

        ++currentIndexMerged;
    }

    return mergedVector;
}

#endif