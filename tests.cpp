#include "tests.hpp"
#include "LinkedList.hpp"
#include <cassert>

void tests() {
    LinkedList<int> list;

    // EMPTY FUNCTION TEST
    assert(list.empty() == true);

    // ADD FUNCTION TEST
    list.add(0);
    list.add(1);
    list.add(2);

    // GET FUNCTION TEST
    assert(list.get(0) == 0);
    assert(list.get(1) == 1);
    assert(list.get(2) == 2);

    // SIZE FUNCTION TEST
    assert(list.size() == 3);

    // EMPTY FUNCTION TEST
    assert(list.empty() == false);

    // MIDDLE ITEM REMOVE TEST
    list.remove(1);

    // FIRST ITEM REMOVE TEST
    list.remove(0);

    // LAST ITEM REMOVE TEST
    list.remove(0);

    // SIZE FUNCTION TEST
    assert(list.size() == 0);

    // EMPTY FUNCTION TEST
    assert(list.empty() == true);
}