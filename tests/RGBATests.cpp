#include <gtest/gtest.h>
#include "RGBA.h"


TEST(RGBA,construct)
{
    RGBA pixel;
    EXPECT_EQ(pixel.r,0);
    EXPECT_EQ(pixel.g,0);
    EXPECT_EQ(pixel.b,0);
    EXPECT_EQ(pixel.a,255);
}

TEST(RGBA,construcUser)
{
    RGBA pixel(255,128,75,23);
}
