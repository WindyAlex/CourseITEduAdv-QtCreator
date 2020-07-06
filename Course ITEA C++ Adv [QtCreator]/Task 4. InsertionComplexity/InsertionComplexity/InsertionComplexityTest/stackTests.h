#pragma once

#include "../InsertionComplexity/stack.h"

#include <gtest/gtest.h>

#define N 5

static std::stack<int> stack;

TEST(StackTest, Insert_Test)
{
    insertInStack(stack, N);

    EXPECT_EQ(stack.size(), N);
}

TEST(StackTest, Delete_Test)
{
    deleteInStack(stack, N - 2);

    EXPECT_EQ(stack.size(), 2);
}
