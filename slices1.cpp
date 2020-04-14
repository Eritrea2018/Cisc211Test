#include <iostream>
#include <cmath>
using namespace std;
//using std::cout;
//using std::cin;
#define DEFAULT 0;


int main()
{
    int slices = 5;
    int drinks = 3;

    int children0 = DEFAULT;
    cout << "\n";
    cout << "Children Zero is Default" << children0 << "." << endl ;

    int children1 = slices + drinks;    
    //cout <<children1;
    cout <<"Group children one got " << children1 << " bundle a piece." << endl;

    int slices2 = 1000;
    int children2 = slices2 + drinks;
    cout <<"Group children two got " << children2 << " bundle a piece.\n" << endl;
}