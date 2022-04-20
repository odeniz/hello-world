#include <printvector.h>
#include "printvector.cpp"
int main()
{
    vector<char> V;
    vector<int> Int(5,17);
    printVector(V);
    printVector(Int);
    cout << endl;
    return 0;
}
