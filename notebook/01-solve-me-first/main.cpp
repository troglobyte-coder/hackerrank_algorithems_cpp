//
// HackerRank folio
// solved by Michael Gene Brockus
//
#include <cstdint>
#include <iostream>
using namespace std;

//
// Should add the value of 'a' and 'b' and
// return the sum of two.
//
// arg-list:
//  -> a: first integer value being passed in
//  -> b: second integer value being passed in
//
decltype(auto) solveMeFirst(int64_t *a, int64_t *b)
{
    return *a + *b;
} // end of func

//
// main is where all C++ programs start
//
auto main() -> int
{
    int64_t num1, num2;
    int64_t sum;

    cin >> num1 >> num2;
    sum = solveMeFirst(&num1, &num2);
    cout << sum;

    return 0;
} // end of func
