#include <printvector.h>

template <class T>
void printVector (vector<T> &v){
    int l=v.size();
    for(int i=0;i<l;i++)
        cout <<v[i] <<" ";
    if (l==0)
        cout <<"[Vector vacio]" << endl;
}
