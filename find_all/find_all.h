#include <vector>

template<typename T>
using Iterator = typename T::iterator;

template<typename T, typename V>
std::vector<Iterator<T>> find_all(T& cntr, V const& val)
{
    std::vector<Iterator<T>> ret;
    for (auto p=cntr.begin(); p!=cntr.end(); ++p)
    {
        if (*p==val)
        {
            ret.push_back(p);
        }
    }
    return ret;
}

