//
// HackerRank folio
// solved by Michael Gene Brockus
//
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

//
// Should print and output a staircase based
// one the number of steps passed in.
//
// arg-list:
//  -> n: number of steps for the staircase
//
void miniMaxSum(vector<int> arr)
{
    auto sum = 0ULL;
    auto min = 0ULL;
    auto max = 0ULL;
    auto num = 0ULL;

    for (auto iter = 0; iter < arr.size(); ++iter)
    {
        num = arr[iter];
        sum += num;
        if (iter == 0)
        {
            max = num;
            min = num;
        } // end if
        else
        {
            if (num > max)
            {
                max = num;
            } // end if
            else if (num < min)
            {
                min = num;
            } // end else if

        } // end else

    } // end for
    std::cout << (sum - max) << " " << (sum - min) << std::endl;
} // end of func

//
// main is where all C++ programs start
//
auto main() -> int
{

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(5);

    for (int i = 0; i < 5; i++)
    {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    } // end for

    miniMaxSum(arr);

    return 0;
} // end of func

//
// Should trim the data read in from the test case
// file being used in this problem.
//
// arg-list:
//  -> str: string refrence being passed in for left trim
//
string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
} // end of func

//
// Should trim the data read in from the test case
// file being used in this problem.
//
// arg-list:
//  -> str: string refrence being passed in for right trim
//
string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
} // end of func

//
// Should split the data into tokens so they can be used
// in the problem.
//
// arg-list:
//  -> str: string refrence being passed in for left trim
//
vector<string> split(const string &str)
{
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos)
    {
        tokens.push_back(str.substr(start, end - start));
        start = end + 1;
    } // end while

    tokens.push_back(str.substr(start));

    return tokens;
} // end of func
