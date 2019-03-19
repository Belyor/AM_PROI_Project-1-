#include "big_number.h"

/* big_number::big_number( const   unsigned long long int  ulli_max=12, vector <unsigned long long int> vect): ULLI_MAX(ulli_max)
  {
       size_t vect_size=vect.size();
       string number;

       for(size_t i =0; i <vect_size; i++)
       {
           number+=to_string(vect[i]);
       }
  }*/

big_number::big_number(string st_number) : ULLI_MAX(10), size_string_MAX(2)
{
    string_number = st_number;
    size_string_number = st_number.length();

    string_MAX = to_string(ULLI_MAX);
    reverse(string_MAX.begin(), string_MAX.end());
    size_t size_st_number = st_number.length();
    my_vec_number.insert(my_vec_number.begin(), 0);

    while (size_st_number >= size_string_MAX)
    {
        if (my_vec_number[0] == ULLI_MAX)
        {
            my_vec_number.insert(my_vec_number.begin(), 0);
        }
        my_vec_number[0] += 1;

        reverse(st_number.begin(), st_number.end());
        string_MAX.resize(size_st_number, '0');

        string string_lower_number;
        string_lower_number.resize(size_st_number, '0');
        cout << " Number: " << st_number << endl;
        int p = 0;
        for (int i = 0; i < size_st_number; i++)
        {
            string_lower_number[i] = st_number[i] - p - string_MAX[i] + '0';
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
        size_my_vec_number = my_vec_number.size();
        for (int k = 0; k < size_my_vec_number; k++)
        {
            cout << "[" << my_vec_number[k] << "]";
        }
        int size_to_erase = st_number.find_first_not_of("0");
        st_number.erase(0, size_to_erase);
        cout << "\nErase: " << st_number << endl;
        size_st_number = st_number.length();
        cout << "\nRozmiar stringa numerowego: " << size_st_number;
        cout << "\nCyfra w [0]: " << st_number[0];
    }
    if (size_st_number < size_string_MAX)
    {
        //unsigned long long int ulli_number = stoull(st_number);
        my_vec_number.push_back(0);
        my_vec_number.push_back(stoull(st_number));
        cout << "\nMy vector number: \n";
        for (int i = 0; i < my_vec_number.size(); i++)
        {
            cout << "[" << my_vec_number[i] << "]";
        }
    }
}

big_number::~big_number()
{
    //dtor
}

    big_number big_number::operator=(const big_number &other)
    {
       if (this == &other)
           return *this;

       this -> string_number = other.string_number;
       this -> string_MAX = other.string_MAX;
       this -> my_vec_number = other.my_vec_number;
       this -> size_string_number = other.size_string_number;
       return *this;
    }

    bool  big_number::operator==(const big_number &other)
    {
       return this -> string_number == other.string_number  &&  this->string_MAX == other.string_MAX  &&  this->my_vec_number == other.my_vec_number  &&  this->size_string_number == other.size_string_number;
    }

/*
    big_number big_number::operator+ (const big_number &other)
    {
        int what_is_longer, r;
        size_t size_str_number_sum;
        string sum_string_number;

        if (this->size_string_number > other.size_string_number)
        {
            what_is_longer = this->size_string_number;
            size_t a=this->size_string_number;
            other.string_number.resize(a ,0);
            sum_string_number.resize(this->size_string_number,0);
        }
        else
        {
            what_is_longer=other.size_string_number;
            this->size_string_number.resize(other.size_string_number,0);
            sum_string_number.resize(other.size_string_number,0);
        }

        reverse(this->size_string_number.begin(),this->size_string_number.end());
        reverse(other.string_number.begin(),other.string_number.end());

        //r=0;
        for (int sum = 0; sum < what_is_longer; sum++)
        {
            sum_string_number[sum]= r + this->size_string_number[sum] + other.string_number[sum] - '0';
            r=0;
            if (sum_string_number[sum]>'9')
            {
                sum_string_number[sum] -=10;
                r=1;
            }
            cout << sum_string_number[sum];
        }
        if (r==1)
        {
            sum_string_number.push_back(1);
        }

        size_str_number_sum = sum_string_number.length();
        reverse(sum_string_number.begin(), sum_string_number.end());
    }
*/
