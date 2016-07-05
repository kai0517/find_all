#include "find_all.h"
#include <list>
#include <string>
#include <iostream>

void test_find_all()
{
    std::string str {"Mary had a little lamb"};
    std::vector<Iterator<std::string>> find = find_all(str, 'a');
    for (auto p : find_all(str, 'a'))
    {
        if (*p!='a')
        {
            std::cerr << "string bug!\n";
        }
    }

    std::list<double> ld {1.1, 2.2, 3.3, 1.1};
    for (auto p : find_all(ld, 1.1))
    {
        if (*p!=1.1)
        {
            std::cerr << "double bug!\n";
        }
    }

    std::vector<std::string> vs {"red", "blue", "green", "green", "orange", "green"};
    for (auto p : find_all(vs, "green"))
    {
        if (*p!="green")
        {
            std::cerr << "vector bug!\n";
        }
    }

    for (auto p : find_all(vs, "green"))
    {
        *p = "vert";
    }

    for (auto str : vs)
    {
        std::cout << str << '\n';
    }
}

int main(void)
{
    test_find_all();

#if defined(_MSC_VER)
    system("pause");
#else
    std::cout << "Press [Enter] to continue ...";
    std::cin.get();
#endif
}
