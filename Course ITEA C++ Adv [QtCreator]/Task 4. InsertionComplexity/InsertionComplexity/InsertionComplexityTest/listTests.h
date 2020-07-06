#pragma once

#include "../InsertionComplexity/list.h"

#include <gtest/gtest.h>

#define N 5

static std::list<int> list;

TEST(ListTest, Insert_Test)
{
    insertInList(list, N);

    EXPECT_EQ(list.size(), N);
}

TEST(ListTest, Delete_Test)
{
    deleteInList(list, N - 2);

    EXPECT_EQ(list.size(), 2);
}
