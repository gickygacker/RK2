#include "subject.h"
#include <gtest/gtest.h>

TEST(ProxyTest, RequestDelegatesToRealSubject)
{
    Proxy proxy;
    testing::internal::CaptureStdout();
    proxy.request();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Real Subject request\n");
}

TEST(ProxyTest, ProxyCreatesRealSubject)
{
    Proxy proxy;
    testing::internal::CaptureStdout();
    proxy.request();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Real Subject request\n");
}
