 #include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoundexAlgorithSuite, generate_soundex_GivenEmptyString_EmptyStringIsExpected){

      char soundexCode[5];
       generate_soundex("",soundexCode);
      ASSERT_EQ(strcmp(soundexCode,""),0);
}
