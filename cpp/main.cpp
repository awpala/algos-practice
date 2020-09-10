#include <iostream>
#include <vector>
#include <string>

// Section 1 - Arrays & Strings
#include "01A-Meeting.h"
#include "01A-mergeRanges.cpp"
#include "01B-reverseInPlace.cpp"
#include "01C-reverseWords.cpp"
#include "01D-mergeSortedArrays.cpp"

using namespace std;

int main()
{
    cout << "SECTION 1 - Arrays & Strings" << endl;
    cout << "|------------------------------------------------|\n" << endl;

    cout << "Problem 1A - Merging Meeting Times\n" << endl;
    vector<Meeting> meetings { Meeting(0, 1), Meeting(3, 5), Meeting(4, 8), Meeting(10, 12), Meeting(9, 10) };
    cout << "Meetings:" << endl;
    for (auto meeting : meetings) {
        cout << meeting.getStartTime() << ' ' << meeting.getEndTime() << endl;
    }
    cout << endl;
    auto merged_ranges = mergeRanges(meetings);
    cout << "Merged Ranges:" << endl;
    for (auto meeting : merged_ranges) {
        cout << meeting.getStartTime() << ' ' << meeting.getEndTime() << endl;
    }
    cout << endl;

    cout << "Problem 1B - Reverse String in Place\n" << endl;
    string str { "Hello World" };
    reverseInPlace(str);
    cout << "'Hello World' reversed is '" << str << "'\n";
    cout << endl;

    cout << "Problem 1C - Reverse Words\n" << endl;
    string message = "cake pound steal";
    reverseWords(message);
    cout << "'cake pound steal' reversed is '" << message << "'\n";
    cout << endl;

    cout << "Problem 1D - Merge Sorted Arrays\n" << endl;
    const vector<int> myVector{ 3, 4, 6, 10, 11, 15 };
    const vector<int> alicesVector{ 1, 5, 8, 12, 14, 19 };
    cout << "my orders: [";
    for (auto order : myVector) {
        cout << " " << order;
    }
    cout << " ]" << endl;
    cout << "Alice's orders: [";
    for (auto order : alicesVector) {
        cout << " " << order;
    }
    cout << " ]" << endl;
    cout << endl;
    vector<int> mergedVector = mergeVectors(myVector, alicesVector);
    cout << "merged orders: [";
    for (auto order : mergedVector) {
        cout << " " << order;
    }
    cout << " ]" << endl;
    cout << endl;
}
