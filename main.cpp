#include "big_number.h"
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
        /*string str_ulli_number;
        string str_ulli_max;
        vector <unsigned long long int> my_vec_number(1);
        unsigned long long int ulli_number;
        unsigned long long int  ULLI_MAX;
        int size_str_ulli_number;
        int size_my_vec_number;
        int size_str_ulli_max;
    ULLI_MAX = 11;
    str_ulli_max = to_string(ULLI_MAX);
    size_str_ulli_max = str_ulli_max.length();
    reverse(str_ulli_max.begin(),str_ulli_max.end());
*/
    string str_ulli_number;
    cout << "Gimmi numba I \n";
    cin >> str_ulli_number;
    cout <<"\n Number: "<<str_ulli_number<<endl;

   big_number number1(str_ulli_number);
    cout <<"\n Number1: "<<number1.get_string_number()<<endl;



    cout << "Gimmi numba II \n";
    cin >> str_ulli_number;
    cout <<"\n Number: "<<str_ulli_number<<endl;

   big_number number2(str_ulli_number);
   cout <<"\n Number2: "<<number2.get_string_number()<<endl;



   number1 = number2;
   cout <<"\n Number3: "<<number1.get_string_number()<<endl;



    //size_str_ulli_substraction = size_str_ulli_number;




    //******************DODAWANIE*******

/*
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
 /*   if (r==1)
    {
        str_numba_sum.push_back(1);
    }

    size_str_numba_sum = str_numba_sum.length();
    reverse(str_numba_sum.begin(), str_numba_sum.end());
    cout<<"SUMA: ";
    printString(str_numba_sum, size_str_numba_sum);



*/




    return 0;
}
