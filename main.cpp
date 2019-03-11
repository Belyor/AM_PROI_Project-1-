#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str_ulli_number, str_ulli_max;
    unsigned long long int ulli_number;
    vector <unsigned long long int> my_vec_number;
    int size_str_ulli_number, size_ulli_max, size_str_ulli_substraction;

    //set max ullong_max total elements
    str_ulli_max = to_string(123);
    size_ulli_max = str_ulli_max.length();

    cout << "Gimmi numba\n";
    cin >> str_ulli_number;
    cout <<"\n Number: "<<str_ulli_number<<endl;
    size_str_ulli_number = str_ulli_number.length();
    //size_str_ulli_substraction = size_str_ulli_number;

    if (size_str_ulli_number>size_ulli_max)
    {
        int p = 0;
        my_vec_number.push_back(1);
        string str_lower_ulli_number;
        reverse(str_ulli_number.begin(),str_ulli_number.end());

        reverse(str_ulli_max.begin(),str_ulli_max.end());
        str_ulli_max.resize(size_str_ulli_number,'0');

        //resizing strings to longer one
        str_lower_ulli_number.resize(size_str_ulli_number,'0');
        cout <<"\n\n Lower number resize: "<<str_lower_ulli_number<<endl;
        for (int i = 0; i<size_str_ulli_number; i++)
        {
            str_lower_ulli_number[i] = str_ulli_number[i] - p - str_ulli_max[i] + '0';
            p=0;
            if (str_lower_ulli_number[i]<'0')
            {
                str_lower_ulli_number[i]+=10;
                p=1;
            }
            cout<<"number "<<str_lower_ulli_number<<"   "<<i <<" th operation"<<endl;
        }
        for (int j=0 ; j<size_str_ulli_number; j++)
        {
            str_ulli_number[j] = str_lower_ulli_number[j];
        }
        reverse(str_ulli_number.begin(), str_ulli_number.end());
        cout << "Wynik: " << str_ulli_number << endl;
    }
    else if (size_str_ulli_number<size_ulli_max)
    {
        ulli_number = stoull(str_ulli_number);
        my_vec_number.push_back(0);
        my_vec_number.push_back(ulli_number);
        cout<<"my_vec_number: ";
        for (int i = 0; i<my_vec_number.size(); i++)
        {
            cout<<my_vec_number[i];
        }
    }
    else if (size_str_ulli_number==size_ulli_max)
    {

    }


    return 0;
}
