#include "list.h"

double insertInList(std::list<int>& cont, int n)
{
    auto begin = std::chrono::system_clock::now();
    for(int i{0}; i < n; ++i)
    {
        cont.push_back(i);
    }
    auto end = std::chrono::system_clock::now();
    double diff = (std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count());
    return diff;
}

double searchInList(std::list<int>& cont, int num)
{
    auto begin = std::chrono::system_clock::now();
    for(auto& number : cont)
    {
        if(number == num)
        {
            break;
        }
    }
    auto end = std::chrono::system_clock::now();
    double diff = (std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count());
    return diff;
}

double deleteInList(std::list<int>& cont, int n)
{
    auto begin = std::chrono::system_clock::now();
    for(int i{0}; i < n; ++i)
    {
        if(cont.size() > 0)
        {
            cont.pop_back();
        }
        else
        {
            break;
        }
    }
    auto end = std::chrono::system_clock::now();
    double diff = (std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count());
    return diff;
}
