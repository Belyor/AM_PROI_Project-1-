#include <bits/stdc++.h>
#include <string>

using namespace std;

void printString (string printing, int strSize)
{
    for (int i = 0; i<strSize; i++)
    {
        cout << printing[i];
    }
}


//dodajemy zmiany
int main()
{
    string str_ulli_number, str_ulli_max;
    unsigned long long int ulli_number;
    vector <unsigned long long int> my_vec_number(1);
    int size_str_ulli_number, size_ulli_max, size_my_vec_number;

    //set max ullong_max total elements
    unsigned long long int  MAX;
    MAX = 10;
    str_ulli_max = to_string(MAX);
    size_ulli_max = str_ulli_max.length();
    reverse(str_ulli_max.begin(),str_ulli_max.end());

    cout << "Gimmi numba\n";
    cin >> str_ulli_number;
    cout <<"\n Number: "<<str_ulli_number<<endl;
    size_str_ulli_number = str_ulli_number.length();
    //size_str_ulli_substraction = size_str_ulli_number;

    while (size_str_ulli_number>=size_ulli_max)
    {
        if(my_vec_number[0]>=MAX)
        {
            my_vec_number.insert(my_vec_number.begin(),0);
        }
        my_vec_number[0]+=1;

        string str_lower_ulli_number;
        reverse(str_ulli_number.begin(),str_ulli_number.end());
        str_ulli_max.resize(size_str_ulli_number,'0');

        //resizing strings to longer one
        str_lower_ulli_number.resize(size_str_ulli_number,'0');
        cout <<"\n\n Lower number resize: "<<str_lower_ulli_number<<endl;
        cout<<" Number: "<<str_ulli_number<<endl;
        int p =0;
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


    //******************DODAWANIE*******


    string str_numba_1, str_numba_2, str_numba_sum;
    int size_str_numba_1, size_str_numba_2, what_is_longer, size_str_numba_sum, r;

    cout<<"\n\n Gimmi numba I: \n";
    cin>> str_numba_1;
    size_str_numba_1=str_numba_1.length();

    cout<<"\n Gimmi numba II: \n";
    cin>> str_numba_2;
    size_str_numba_2=str_numba_2.length();

    if (size_str_numba_1>size_str_numba_2)
    {
        what_is_longer = size_str_numba_1;
        str_numba_2.resize(size_str_numba_1,0);
        str_numba_sum.resize(size_str_numba_1,0);
    }
    else
    {
        what_is_longer=size_str_numba_2;
        str_numba_1.resize(size_str_numba_2,0);
        str_numba_sum.resize(size_str_numba_2,0);
    }

    reverse(str_numba_1.begin(),str_numba_1.end());
    reverse(str_numba_2.begin(),str_numba_2.end());

    //r=0;
    for (int sum = 0; sum < what_is_longer; sum++)
    {
        str_numba_sum[sum]= r + str_numba_1[sum] + str_numba_2[sum] - '0';
        r=0;
        if (str_numba_sum[sum]>'9')
        {
            str_numba_sum[sum] -=10;
            r=1;
        }
        cout << str_numba_sum[sum];
    }
    if (r==1)
    {
        str_numba_sum.push_back(1);
    }

    size_str_numba_sum = str_numba_sum.length();
    reverse(str_numba_sum.begin(), str_numba_sum.end());
    cout<<"SUMA: ";
    printString(str_numba_sum, size_str_numba_sum);








    return 0;
}
