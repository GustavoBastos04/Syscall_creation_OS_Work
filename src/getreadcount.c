#include "types.h"
#include "user.h"
#include "stat.h"

int main(int argc, char *argv[]){
	int count = getreadcount();
	printf(1,"Current number of reads: %d\n", count);
	exit();
}
