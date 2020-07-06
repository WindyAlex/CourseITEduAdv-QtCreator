#include "vectorTests.h"
#include "listTests.h"
#include "stackTests.h"
#include "queueTests.h"

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
