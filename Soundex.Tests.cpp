#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoundexAlgorithSuite, generate_soundex_GivenEmptyString_EmptyStringIsExpected){

      char soudexCode[5];
       generate_soundex("",soudexCode);
      ASSERT_EQ(strcmp(soudexCode,""),"");
}
