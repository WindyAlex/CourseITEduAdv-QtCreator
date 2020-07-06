#pragma once

#include "../InsertionComplexity/queue.h"

#include <gtest/gtest.h>

#define N 5

static std::queue<int> queue;

TEST(QueueTest, Insert_Test)
{
    insertInQueue(queue, N);

    EXPECT_EQ(queue.size(), N);
}

TEST(QueueTest, Delete_Test)
{
    deleteInQueue(queue, N - 2);

    EXPECT_EQ(queue.size(), 2);
}
