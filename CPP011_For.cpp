/**
 * Author:    Tridib Samanta
 * Created:   18.11.2019
 **/

#include <iostream>
using namespace std;

int main()
{
    /*
        for(initialization;condition;inc/dec)
            instructions_to_repeat;
    */

    for (int i = 0; i < 3; i++)
        cout << "Hello" << endl;

    int array[4];

    for (int i = 0; i < 4; i++)
        array[i] = i; // Initialization

    for (int i = 0; i < 4; i++)
        cout << array[i] << endl; // Print array elements

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
        cout << array[i] << endl;

    // Infinite Loop
    /*
    for(;;)
        cout<<"Stop me if you can !"<<endl;
    */
}
