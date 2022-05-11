#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;

template<typename T, typename elemType>
T find1(T first, T last, const elemType & value)
{
    for(; first != last; ++first)
    {
        if(*first == value)
            return first;
    }
    return last;
}

int main()
{
    int array[8] = {1, 1, 2, 3, 5, 8, 13, 21};
    vector<int> ivec(array, array + 8);
    list<int> ilist(array, array + 8);

    int * p = find1(array, array + 8, 5);
    if(p != array + 8)
    {
        // 找到了
        cout << "find at: " << hex << p << endl;
    }else
        cout << "Not find" << endl;

    vector<int>::iterator iter;
    iter = find1(ivec.begin(), ivec.end(), 5);
    if(iter != ivec.end())
        cout << "Find" << endl;
    else
        cout << "Not find" << endl;

    list<int>::iterator it_list;
    it_list = find1(ilist.begin(), ilist.end(), 8);
    if(it_list != ilist.end())
        cout << "Find" << endl;
    else
        cout << "Not find" << endl;

    return 0;
}