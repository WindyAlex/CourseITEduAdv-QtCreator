#include <iostream>

#include "vector.h"
#include "list.h"
#include "stack.h"
#include "queue.h"

#define N 5000000

int main()
{
    std::vector<int>    vect;
    std::list<int>      list;
    std::stack<int>     stack;
    std::queue<int>     queue;

    std::cout << "[Vector]Insert: " << insertInVector(std::ref(vect), N) << " ms" << std::endl;
    std::cout << "[List]  Insert: " << insertInList(std::ref(list), N) << " ms" << std::endl;
    std::cout << "[Stack] Insert: " << insertInStack(std::ref(stack), N) << " ms" << std::endl;
    std::cout << "[Queue] Insert: " << insertInQueue(std::ref(queue), N) << " ms" << std::endl;

    std::cout << std::endl;

    std::cout << "[Vector]Search: " << searchInVector(std::ref(vect), N / 2) << " ms" << std::endl;
    std::cout << "[List]  Search: " << searchInList(std::ref(list), N / 2) << " ms" << std::endl;

    std::cout << std::endl;

    std::cout << "[Vector]Delete: " << deleteInVector(std::ref(vect), N) << " ms" << std::endl;
    std::cout << "[List]  Delete: " << deleteInList(std::ref(list), N) << " ms" << std::endl;
    std::cout << "[Stack] Delete: " << deleteInStack(std::ref(stack), N) << " ms" << std::endl;
    std::cout << "[Queue] Delete: " << deleteInQueue(std::ref(queue), N) << " ms" << std::endl;

    return 0;
}
