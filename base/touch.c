#include "types.h"
#include "stat.h"
#include "user.h"

int 
main(int argc, char * argv[]) {
    int result;
    
     if(argc != 1){
        printf(1, "Please provide a file name");
    }
    touch(argv[1]);
    return exit(); 
}
