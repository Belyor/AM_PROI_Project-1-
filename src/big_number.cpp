#include "big_number.h"

/* big_number::big_number( const   unsigned long long int  ulli_max=12, vector <unsigned long long int> vect): ULLI_MAX_(ulli_max)
  {
       size_t vect_size=vect.size();
       string number;

       for(size_t i =0; i <vect_size; i++)
       {
           number+=to_string(vect[i]);
       }
  }*/

big_number::big_number(string st_number) : ULLI_MAX_(10), size_string_MAX_(2)
{
    string_number_ = st_number;
    size_string_number_ = st_number.length();

    string_MAX_ = to_string(ULLI_MAX_);
    reverse(string_MAX_.begin(), string_MAX_.end());
    size_t size_st_number = st_number.length();
    my_vec_number_.insert(my_vec_number_.begin(), 0);

    while (size_st_number >= size_string_MAX_)
    {
        if (my_vec_number_[0] == ULLI_MAX_)
        {
            my_vec_number_.insert(my_vec_number_.begin(), 0);
        }
        my_vec_number_[0] += 1;

        reverse(st_number.begin(), st_number.end());
        string_MAX_.resize(size_st_number, '0');

        string string_lower_number;
        string_lower_number.resize(size_st_number, '0');
        cout << " Number: " << st_number << endl;
        int p = 0;
        for (int i = 0; i < size_st_number; i++)
        {
            string_lower_number[i] = st_number[i] - p - string_MAX_[i] + '0';
            p = 0;
            if (string_lower_number[i] < '0')
            {
                string_lower_number[i] += 10;
                p = 1;
            }
        }

        for (int j = 0; j < size_st_number; j++)
        {
            st_number[j] = string_lower_number[j];
        }

        reverse(st_number.begin(), st_number.end());
        cout << "Wynik: " << st_number << endl;
        cout << "\nMy vector number: \n";
        size_t size_my_vec_number = 0;
        size_my_vec_number = my_vec_number_.size();
        for (int k = 0; k < size_my_vec_number; k++)
        {
            cout << "[" << my_vec_number_[k] << "]";
        }
        int size_to_erase = st_number.find_first_not_of("0");
        st_number.erase(0, size_to_erase);
        cout << "\nErase: " << st_number << endl;
        size_st_number = st_number.length();
        cout << "\nRozmiar stringa numerowego: " << size_st_number;
        cout << "\nCyfra w [0]: " << st_number[0];
    }
    if (size_st_number < size_string_MAX_)
    {
        //unsigned long long int ulli_number = stoull(st_number);
        my_vec_number_.push_back(0);
        my_vec_number_.push_back(stoull(st_number));
        cout << "\nMy vector number: \n";
        for (int i = 0; i < my_vec_number_.size(); i++)
        {
            cout << "[" << my_vec_number_[i] << "]";
        }
    }
}

//  ************************ DESTRUCTOR ***********************

big_number::~big_number()
{
    //dtor
}

//  ************************ OPERATORS ************************

big_number big_number::operator=(const big_number &other)
{
    if (this == &other)
        return *this;

    string_number_ = other.string_number_;
    string_MAX_ = other.string_MAX_;
    my_vec_number_ = other.my_vec_number_;
    size_string_number_ = other.size_string_number_;
    return *this;
}

bool big_number::operator==(const big_number &other)const
{
    return string_number_ == other.string_number_ && string_MAX_ == other.string_MAX_ && my_vec_number_ == other.my_vec_number_ && size_string_number_ == other.size_string_number_;
}

big_number big_number::operator+(const big_number &other)const
{
    int what_is_longer, r;
    size_t size_str_number_sum;
    string sum_string_number;

    if (size_string_number_ > other.size_string_number_)
    {
        what_is_longer = size_string_number_;
        other.string_number_.resize(size_string_number_, '0');
        sum_string_number.resize(size_string_number_, '0');
    }
    else
    {
        what_is_longer = other.size_string_number_;
        string_number_.resize(other.size_string_number_, '0');
        sum_string_number.resize(other.size_string_number_, '0');
    }

    reverse(string_number_.begin(), string_number_.end());
    reverse(other.string_number_.begin(), other.string_number_.end());

    //r=0;
    for (int sum = 0; sum < what_is_longer; sum++)
    {
        sum_string_number[sum] = r + string_number_[sum] + other.string_number_[sum] - '0';
        r = 0;
        if (sum_string_number[sum] > '9')
        {
            sum_string_number[sum] -= 10;
            r = 1;
        }
        cout << sum_string_number[sum];
    }
    if (r == 1)
    {
        sum_string_number.push_back(1);
    }

    size_str_number_sum = sum_string_number.length();
    reverse(sum_string_number.begin(), sum_string_number.end());
}
