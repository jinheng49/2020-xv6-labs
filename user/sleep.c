#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]){
  if(argc != 2){
      fprintf(2, "usage: sleep time\n");
      exit(1);
  } else {
      int time = atoi(argv[1]);
      sleep(time);
      exit(0);
  }
}
