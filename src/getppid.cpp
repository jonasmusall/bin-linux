#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

int main() {
  pid_t ppid = getppid();
  printf("%d\n", ppid);
  return 0;
}
