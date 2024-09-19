#include <gtest/gtest.h>
#inculde "Soundex.h"

TEST(SoundexAlgorithSuite, generate_soundex_GivenEmptyString_EmptyStringIsExpected){

      char soudexCode[5];
       generate_soundex("",soudexCode);
      ASSERT_EQ(strcmp(soudexCode,""),"");
}
