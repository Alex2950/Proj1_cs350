#include "types.h"
#include "stat.h"
#include "user.h"

int 
main(int argc, char * argv[])
{    
    if(argc != 2){
        printf(1, "Please provid the name of only one file to create");
    }

	touch(argv[1]);
    exit(); //return 0;
}
