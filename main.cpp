#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    string str_ulli_number, str_ulli_max;
    unsigned long long int ulli_number;
    vector <unsigned long long int> my_vec_number;
    int size_str_ulli_number, size_ulli_max, size_my_vec_number;

    //set max ullong_max total elements
    str_ulli_max = to_string(1000);
    size_ulli_max = str_ulli_max.length();
    reverse(str_ulli_max.begin(),str_ulli_max.end());

    cout << "Gimmi numba\n";
    cin >> str_ulli_number;
    cout <<"\n Number: "<<str_ulli_number<<endl;
    size_str_ulli_number = str_ulli_number.length();
    //size_str_ulli_substraction = size_str_ulli_number;

    while (size_str_ulli_number>size_ulli_max)
    {
        int p = 0;
        my_vec_number.push_back(1);
        string str_lower_ulli_number;
        reverse(str_ulli_number.begin(),str_ulli_number.end());
        str_ulli_max.resize(size_str_ulli_number,'0');

        //resizing strings to longer one
        str_lower_ulli_number.resize(size_str_ulli_number,'0');
        cout <<"\n\n Lower number resize: "<<str_lower_ulli_number<<endl;
        cout<<" Number: "<<str_ulli_number<<endl;

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
        cout << "\nMy vector number: \n";
        size_my_vec_number = my_vec_number.size();
        for (int k = 0; k<size_my_vec_number; k++)
        {
            cout<<"["<<my_vec_number[k]<<"]";
        }
        int size_to_erase = str_ulli_number.find_first_not_of("0");
        str_ulli_number.erase(0, size_to_erase);
        cout << "\nErase: " << str_ulli_number << endl;
        size_str_ulli_number=str_ulli_number.length();
        cout<<"\nRozmiar stringa numerowego: " << size_str_ulli_number;
        cout<<"\nCyfra w [0]: " << str_ulli_number[0];
        if(size_str_ulli_number==size_ulli_max) break;
    }
    if (size_str_ulli_number<size_ulli_max)
    {
        ulli_number = stoull(str_ulli_number);
        my_vec_number.push_back(0);
        my_vec_number.push_back(ulli_number);
        cout << "\nMy vector number: \n";
        for (int i = 0; i<my_vec_number.size(); i++)
        {
            cout<<"["<<my_vec_number[i]<<"]";
        }
    }

    return 0;
}
