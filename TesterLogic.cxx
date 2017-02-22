#include "TesterGui.h"
#include "TesterLogic.h"

void onGuiFinished(TesterGui *gui, int argc, char **argv)
{
	printf("%s()\n", __func__);	

}

void onExit(void)
{
	printf("%s()\n", __func__);
}
