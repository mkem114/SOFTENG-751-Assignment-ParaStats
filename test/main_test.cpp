#include <cstring>
#include "gtest/gtest.h"
#include "SummaryStatistics.cpp"
#include "AbstractComputation.cpp"
#include "ParallelComputation.cpp"
#include "SequentialComputation.cpp"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}