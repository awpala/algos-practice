#include <iostream>
#include <vector>
#include <string>

// Section 1 - Arrays & Strings
#include "01A-Meeting.h"
#include "01A-mergeRanges.cpp"
#include "01B-reverseInPlace.cpp"
#include "01C-reverseWords.cpp"

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

}
