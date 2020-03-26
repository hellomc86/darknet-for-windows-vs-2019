#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#include "parser.h"
#include "utils.h"
#include "cuda.h"
#include "blas.h"

extern void run_yolo(int argc, char **argv);

void main(int argc, char **argv)
{
	printf("Running YOLO...");
	run_yolo(argc, argv);
}