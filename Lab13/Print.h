#include <iostream>

using namespace std;


template <class Y>
void print( Y toadd, int size )
{
    for ( int i=0; i<size; i++ )
    { 
	
        cout << toadd[i] << " ";
    }
    cout<<endl;
}
