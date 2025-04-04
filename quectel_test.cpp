#include <gtest/gtest.h>
#include "quectel.h"
#include "quectel.cpp"

TEST(QuectelToAppTest, ExactMatch) {
    QuectelToApp mapper;
    EXPECT_EQ(mapper.getAppState(static_cast<QuectelState>(0)), "Success");
    EXPECT_EQ(mapper.getAppState(static_cast<QuectelState>(1)), "Inactive_update");
    EXPECT_EQ(mapper.getAppState(static_cast<QuectelState>(2)), "Improper_write");
    EXPECT_EQ(mapper.getAppState(static_cast<QuectelState>(3)), "sync_in_progress");
    EXPECT_EQ(mapper.getAppState(static_cast<QuectelState>(4)), "performing_backup");
    EXPECT_EQ(mapper.getAppState(static_cast<QuectelState>(5)), "cancel");
  
}
TEST(QuectelToAppTest, InvalidState) {
    QuectelToApp mapper;
    EXPECT_EQ(mapper.getAppState(static_cast<QuectelState>(6)), "Invalid State");
     EXPECT_EQ(mapper.getAppState(static_cast<QuectelState>(-1)), "Invalid State");
     
}