#include <stdlib.h>
#include <time.h>

char randchar() {
    
    //create valuable randoms
    char randoms ;
   //generating random alphabet forthe valu randoms
    randoms = 'A' + (random() % 26);
    //return valuables
    return randoms;
}