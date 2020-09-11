#ifndef INFLIGHT_ENTERTAINMENT
#define INFLIGHT_ENTERTAINMENT

#include <vector>
#include <unordered_set>

using namespace std;

inline bool canTwoMoviesFillFlight(const vector<int>& movieLengths, int flightLength)
{
    // movie lengths we've seen so far
    unordered_set<int> movieLengthsSeen;

    for (int firstMovieLength : movieLengths) {
        int matchingSecondMovieLength = flightLength - firstMovieLength;
        if (movieLengthsSeen.find(matchingSecondMovieLength) != movieLengthsSeen.end()) {
            return true;
        }
        movieLengthsSeen.insert(firstMovieLength);
    }

    // we never found a match, so return false
    return false;
}

#endif