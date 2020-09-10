#ifndef CAFE_ORDER_CHECKER
#define CAFE_ORDER_CHECKER

#include <vector>

using namespace std;

inline bool isFirstComeFirstServed(const vector<int>& takeOutOrders,
    const vector<int>& dineInOrders,
    const vector<int>& servedOrders,
    size_t servedOrdersIndex = 0,
    size_t takeOutOrdersIndex = 0,
    size_t dineInOrdersIndex = 0)
{

    // base case we've hit the end of servedOrders
    if (servedOrdersIndex == servedOrders.size()) {
        return true;
    }

    // if we still have orders in takeOutOrders
    // and the current order in takeOutOrders is the same
    // as the current order in servedOrders
    if ((takeOutOrdersIndex < takeOutOrders.size())
        && (takeOutOrders[takeOutOrdersIndex] == servedOrders[servedOrdersIndex])) {
        ++takeOutOrdersIndex;
    }

    // if we still have orders in dineInOrders
    // and the current order in dineInOrders is the same
    // as the current order in servedOrders
    else if ((dineInOrdersIndex < dineInOrders.size())
        && (dineInOrders[dineInOrdersIndex] == servedOrders[servedOrdersIndex])) {
        ++dineInOrdersIndex;
    }

    // if the current order in servedOrders doesn't match
    // the current order in takeOutOrders or dineInOrders, then we're not
    // serving in first-come, first-served order.
    else {
        return false;
    }

    // the current order in servedOrders has now been "accounted for"
    // so move on to the next one
    ++servedOrdersIndex;
    return isFirstComeFirstServed(takeOutOrders, dineInOrders, servedOrders,
        servedOrdersIndex, takeOutOrdersIndex, dineInOrdersIndex);
}

#endif