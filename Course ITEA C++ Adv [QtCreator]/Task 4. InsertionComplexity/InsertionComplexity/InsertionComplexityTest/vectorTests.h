#pragma once

#include "../InsertionComplexity/vector.h"

#include <gtest/gtest.h>

#define N 5

static std::vector<int> vect;

TEST(VectorTest, Insert_Test)
{
    insertInVector(vect, N);

    EXPECT_EQ(vect.size(), N);
}

TEST(VectorTest, Delete_Test)
{
    deleteInVector(vect, N - 2);

    EXPECT_EQ(vect.size(), 2);
}
