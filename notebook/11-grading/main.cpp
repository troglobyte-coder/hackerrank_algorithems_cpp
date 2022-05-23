//
// HackerRank folio
// solved by Michael Gene Brockus
//
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

//
// Should return an integer array of student grades
// after processing each grade to see if it's less
// than three or if the grade is up to the next
// multiple of five.
//
// arg-list:
//  -> grades: the grades being passed in
//
vector<int> gradingStudents(vector<int> grades)
{
    for (auto iter = 0; iter < grades.size(); iter++)
    {
        if (grades[iter] >= 38)
        {
            switch (grades[iter] % 5)
            {
                case 4:
                {
                    grades[iter] += 1;
                    break;
                } // end case
                case 3:
                {
                    grades[iter] += 2;
                    break;
                } // end case

            } // end switch

        } // end if

    } // end for
    return grades;
} // end of func

//
// main is where all C++ programs start
//
auto main() -> int
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string grades_count_temp;
    getline(cin, grades_count_temp);

    int grades_count = stoi(ltrim(rtrim(grades_count_temp)));

    vector<int> grades(grades_count);

    for (int i = 0; i < grades_count; i++)
    {
        string grades_item_temp;
        getline(cin, grades_item_temp);

        int grades_item = stoi(ltrim(rtrim(grades_item_temp)));

        grades[i] = grades_item;
    } // end for

    vector<int> result = gradingStudents(grades);

    for (size_t i = 0; i < result.size(); i++)
    {
        fout << result[i];

        if (i != result.size() - 1)
        {
            fout << "\n";
        } // end if

    } // end for

    fout << "\n";

    fout.close();

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
