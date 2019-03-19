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

big_number::big_number(string st_number):ULLI_MAX(10)
{
    string_number=st_number;

    string_MAX = to_string(ULLI_MAX);
    size_string_MAX = string_MAX.length();
    reverse(string_MAX.begin(),string_MAX.end());
    size_t size_string_number=string_number.length();
    my_vec_number.insert(my_vec_number.begin(),0);

    while (size_string_number>=size_string_MAX)
    {
        if(my_vec_number[0]==ULLI_MAX)
        {
            my_vec_number.insert(my_vec_number.begin(),0);
        }
        my_vec_number[0]+=1;


        //funkcja zamienia koniec z poczatkiem + 0
        reverse(string_number.begin(),string_number.end());
        string_MAX.resize(size_string_number,'0');

        //resizing strings to longer one
        cout<<" Number: "<<string_number<<endl;
        int p =0;
        for (int i = 0; i<size_string_number; i++)
        {
            string_number[i] -=  p - string_MAX[i] + '0';
            p=0;
            if (string_number[i]<'0')
            {
                string_number[i]+=10;
                p=1;
            }
            cout<<"number "<<string_number<<"   "<<i <<" th operation"<<endl;
        }

        reverse(string_number.begin(), string_number.end());
        cout << "Wynik: " << string_number << endl;
        cout << "\nMy vector number: \n";
        size_t   size_my_vec_number=0;
        size_my_vec_number = my_vec_number.size();
        for (int k = 0; k<size_my_vec_number; k++)
        {
            cout<<"["<<my_vec_number[k]<<"]";
        }
        int size_to_erase = string_number.find_first_not_of("0");
        string_number.erase(0, size_to_erase);
        cout << "\nErase: " << string_number << endl;
        size_string_number=string_number.length();
        cout<<"\nRozmiar stringa numerowego: " << size_string_number;
        cout<<"\nCyfra w [0]: " << string_number[0];
    }
    if (size_string_number<size_string_MAX)
    {
        //unsigned long long int ulli_number = stoull(string_number);
        my_vec_number.push_back(0);
        my_vec_number.push_back(stoull(string_number));
        cout << "\nMy vector number: \n";
        for (int i = 0; i<my_vec_number.size(); i++)
        {
            cout<<"["<<my_vec_number[i]<<"]";
        }
    }


}




big_number::~big_number()
{
    //dtor
}
