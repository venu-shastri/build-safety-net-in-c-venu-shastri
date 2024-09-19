#include "Soundex.h"
#include <string.h>

int isEmpty(const char* input){
return strlen(input) == 0;
}

 void generate_soundex(const char* input,char* soundexCode){
   if(isEmpty(input)){
      soundexCode[0]='\0';
   }
 }
