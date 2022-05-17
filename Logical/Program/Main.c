
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	led1 = 0;
}

void _CYCLIC ProgramCyclic(void)
{
	led1 = !led1;
}

void _EXIT ProgramExit(void)
{

}

