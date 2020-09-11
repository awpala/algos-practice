#include <iostream>
#include <vector>
#include <string>

// Section 1 - Arrays & Strings
#include "01A-Meeting.h"
#include "01A-mergeRanges.cpp"
#include "01B-reverseInPlace.cpp"
#include "01C-reverseWords.cpp"
#include "01D-mergeSortedArrays.cpp"
#include "01E-cafeOrderChecker.cpp"

// Section 2 - Hashing & Hash Tables
#include "02A-inflightEntertainment.cpp"

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
    vector<int> myVector{ 3, 4, 6, 10, 11, 15 };
    vector<int> alicesVector{ 1, 5, 8, 12, 14, 19 };
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

    cout << "Problem 1E - Cafe Order Checker\n" << endl;
    vector<int> take_out_orders { 1, 3, 5 };
    vector<int> dine_in_orders { 2, 4, 6 };
    vector<int> served_orders { 1, 2, 4, 6, 5, 3 };
    cout << "take-out orders: [";
    for (auto order : take_out_orders) {
        cout << " " << order;
    }
    cout << " ]" << endl;
    cout << "dine-in orders: [";
    for (auto order : dine_in_orders) {
        cout << " " << order;
    }
    cout << " ]" << endl;
    cout << "served orders: [";
    for (auto order : served_orders) {
        cout << " " << order;
    }
    cout << " ]" << endl;
    cout << "is first-come, first-served? " << (isFirstComeFirstServed(take_out_orders, dine_in_orders, served_orders) ? "true" : "false") << endl;
    cout << endl;
    vector<int> t_orders { 17, 8, 24 };
    vector<int> d_orders { 12, 19, 2 };
    vector<int> s_orders { 17, 8, 12, 19, 24, 2 };
    cout << "take-out orders: [";
    for (auto order : t_orders) {
        cout << " " << order;
    }
    cout << " ]" << endl;
    cout << "dine-in orders: [";
    for (auto order : d_orders) {
        cout << " " << order;
    }
    cout << " ]" << endl;
    cout << "served orders: [";
    for (auto order : s_orders) {
        cout << " " << order;
    }
    cout << " ]" << endl;
    cout << "is first-come, first-served? " << (isFirstComeFirstServed(t_orders, d_orders, s_orders) ? "true" : "false") << endl;
    cout << endl;


    cout << "\nSECTION 2 - Hashing & Hash Tables" << endl;
    cout << "|------------------------------------------------|\n" << endl;

    cout << "Problem 2A - Inflight Entertainment\n" << endl;
    vector<int> movie_lengths { 90, 120, 180, 88, 60, 45, 140 };
    int flight_length { 240 };
    cout << "movie selections (mins): [";
    for (auto length : movie_lengths) {
        cout << " " << length;
    }
    cout << " ]" << endl;
    cout << "total flight time (mins): " << flight_length << endl;
    cout << "can watch two movies back-to-back taking up the exact total flight time: " << (canTwoMoviesFillFlight(movie_lengths, flight_length) ? "true" : "false") << endl;

}
