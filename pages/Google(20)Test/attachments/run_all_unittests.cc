#include "gtest/gtest.h"

int main(int argc, char* argv[])
{
    //pass arg to google test
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}