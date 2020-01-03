#include "gtest/gtest.h"
#include "lib.h"

float f[2];

TEST(division,resultexists){
  f[0]=58;
  f[1]=4;
  EXPECT_EQ(14.5,division(f));
  f[0]=5;
  f[1]=1;
  EXPECT_EQ(5,division(f));
}

TEST(division,zero){
  float f[2];
  f[0]=58;
  f[1]=0;
  EXPECT_THROW(division(f),std::invalid_argument);
}

TEST(readfile,filenotexists){
std::ifstream file("../notexists");
EXPECT_THROW(read_file(file,f),std::runtime_error);
}

TEST(readfile,notnumber1){
  std::ifstream file("../notnumber1.txt");
  EXPECT_THROW(read_file(file,f),std::domain_error);
}

TEST(readfile,notnumber2){
  std::ifstream file("../notnumber1.txt");
  EXPECT_THROW(read_file(file,f),std::domain_error);
}

TEST(division,fromfile){
  std::ifstream file("../f.txt");
  read_file(file,f);
  EXPECT_EQ(1,division(f));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}