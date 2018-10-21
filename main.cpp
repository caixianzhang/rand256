#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "main.h"
#include "rand.h"

int main(int argc, char *argv[])
{
	Rand256_Pool *My_Rand_Pool = new Rand256_Pool();
	while(1)
	{
		Rand256_Node *My_Rand_Node = My_Rand_Pool->Get_Rand256_Node();
		unsigned char *temp = My_Rand_Node->Get_Rand256();
		for(int i = 0;i < 32; i++)
		{
			printf("0x%02X ", *(temp + i));
		}
		delete My_Rand_Node;
		printf("\n");
		sleep(1);
	}
	return 0;
}
