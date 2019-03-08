#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str_ulli_number, str_ulli_max;
    unsigned long long int ulli_number;
    vector <unsigned long long int> my_vec_number;
    int size_ulli_max;

    //set max ullong_max total elements
    str_ulli_max = to_string(111);
    size_ulli_max = str_ulli_max.length();

    cout << "Gimmi numba\n";
    cin >> str_ulli_number;
    cout <<"\n\n Number: "<<str_ulli_number<<endl;

    if (str_ulli_number.length()>size_ulli_max)
    {
        int p = 0;
        my_vec_number.push_back(1);
        string str_lower_ulli_number;
        reverse(str_ulli_number.begin(),str_ulli_number.end());
        reverse(str_ulli_max.begin(),str_ulli_max.end());
        cout <<"\n\n Lower number: "<<str_lower_ulli_number<<endl;

        //resizing strings to longer one
        str_ulli_max.resize(str_ulli_number.length(),'0');
        str_lower_ulli_number.resize(str_ulli_number.length(),'0');
        cout <<"\n\n Lower number resize: "<<str_lower_ulli_number<<endl;

        int len = str_ulli_number.length();
        for (int i = 0; i<len; i++)
        {
            str_lower_ulli_number[i] = str_ulli_number[i] - str_ulli_max[i] + '0';
            cout<<"lower number "<<str_lower_ulli_number<<"   "<<i <<" th operation"<<endl;
            if (str_lower_ulli_number[i]<'0')
            {
                str_ulli_number[i+1]-=1;
                str_ulli_number[i]+=10;
                str_lower_ulli_number[i] = str_ulli_number[i] - str_ulli_max[i] + '0';
            }
            // reverse(str_ulli_number.begin(),str_ulli_number.end());
            cout<<str_lower_ulli_number << "\n" << str_ulli_number;
        }

        for (int j =0; j<str_ulli_number.length(); j++)
        {
            str_ulli_number[j]=str_lower_ulli_number[j];
           // cout<<str_lower_ulli_number[j] << "\t" << str_ulli_number[j] << "\n";

        }
        reverse(str_ulli_number.begin(), str_ulli_number.end());
        cout << "Wynik: " << str_ulli_number << endl;
    }
    else if (str_ulli_number.length()<size_ulli_max)
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

    return 0;
}