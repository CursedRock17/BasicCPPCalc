#include <iostream>
#include "Fake.h"
#include "Thanks.h"

extern int fake;

void ifFake(){
if(fake != 15){
  Thanks();
 }
}
