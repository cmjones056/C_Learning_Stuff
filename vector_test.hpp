#ifndef TEST_VECTOR_TEST_HPP
#define TEST_VECTOR_TEST_HPP

#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "vector.h"

namespace colleen {
namespace {

using ::testing::IsEmpty;
using ::testing::SizeIs;
using ::testing::Eq;

TEST(VectorTest, SizeIsZeroInitially) {
  vector vec;
  // TODO(Colleen): Define a method with the signature: bool empty().
  EXPECT_TRUE(vec.empty());
  // TODO(Colleen): Define a method with the signature: int size().
//  EXPECT_THAT(vec.size(), Eq(0));
}

TEST(VectorTest, AcceptsSingleInt) {
  vector vec;
  // TODO(Colleen): Define a method with the signature: void push_back().
//  vec.push_back(-1);
//  EXPECT_FALSE(vec.empty());
//  EXPECT_THAT(vec.size(), Eq(1));

  // TODO(Colleen): Define a method with the signature int at(int index).
//  EXPECT_THAT(vec.at(0), Eq(-1));
}

TEST(VectorTest, AcceptsMultipleInts) {
  vector vec;
//  vec.push_back(5);
//  vec.push_back(6);
//  vec.push_back(-99);
//  vec.push_back(15);
//  vec.push_back(156);
//  vec.push_back(44);

//  EXPECT_FALSE(vec.empty());
//  EXPECT_THAT(vec.size(), Eq(6));
//
//  EXPECT_THAT(vec.at(0), Eq(5));
//  EXPECT_THAT(vec.at(1), Eq(6));
//  EXPECT_THAT(vec.at(2), Eq(-99));
//  EXPECT_THAT(vec.at(3), Eq(15));
//  EXPECT_THAT(vec.at(4), Eq(156));
//  EXPECT_THAT(vec.at(5), Eq(44));
}

}  // namespace
}  // namespace colleen

#endif //TEST_VECTOR_TEST_HPP
