#include <iostream>
using namespace std;

int main ()
{
    int num_names;
    cout << "How many names/ids do you have? \n";
    cin >> num_names;
    string name_list [num_names];
    int id_numbers [num_names];

    if (num_names <= 0)
    {
        return 0;
    }

    for(int counter = 0; counter < num_names; counter++)
    {
        cout << "Enter name " << counter << endl;
        cin >> name_list[counter];
        cout << "Enter " << name_list[counter] << "'s ID\n";
        cin >> id_numbers[counter];
    }
    cout<<"Done gathering input.  You entered: \n";
    for(int outer = 0; outer < num_names; outer++)
    {
        cout<<id_numbers[outer] <<" -> "<<name_list[outer]<<endl;
    }

    return 0;
}
