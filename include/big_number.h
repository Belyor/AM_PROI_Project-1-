#ifndef BIG_NUMBER_H
#define BIG_NUMBER_H
#include <bits/stdc++.h>
#include <string>

using namespace std;

// string MY_STRING_MAX = to_string(10);
// size_t MY_SIZE_STRING_MAX = MY_STRING_MAX.length();

class big_number
{
private:
    string string_number;
    string string_MAX;
    vector <unsigned long long int> my_vec_number;
    const unsigned long long int ULLI_MAX;
    const size_t size_string_MAX;
    size_t size_string_number;

public:

//  big_number(const   unsigned long long int  ulli_max=12,  vector <unsigned long long int> vect);

    big_number( string st_number);

    ~big_number();

    big_number operator=(const big_number& bg);
    big_number operator+(const big_number &other);
    bool operator==(const big_number &other);

    string get_string_number()
    {
        return string_number;
    }





protected:


};

#endif // BIG_NUMBER_H
