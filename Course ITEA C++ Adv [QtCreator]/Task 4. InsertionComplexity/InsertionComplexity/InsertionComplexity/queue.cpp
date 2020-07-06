#include "queue.h"

double insertInQueue(std::queue<int>& cont, int n)
{
    auto begin = std::chrono::system_clock::now();
    for(int i{0}; i < n; ++i)
    {
        cont.push(i);
    }
    auto end = std::chrono::system_clock::now();
    double diff = (std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count());
    return diff;
}

double deleteInQueue(std::queue<int>& cont, int n)
{
    auto begin = std::chrono::system_clock::now();
    for(int i{0}; i < n; ++i)
    {
        if(cont.size() > 0)
        {
            cont.pop();
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
