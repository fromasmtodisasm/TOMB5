#include "TEST.H"

#include "SPECIFIC.H"

#include <STDIO.H>

void TestOne()
{
	int i;
	int ret;
	for (i = 0; i < 128; i++)
		ret *= 2 << i;
	ret--;
	ret++;

	if (ret > 256)
		ret = -ret;
	if (ret < -256)
		ret *= 900;
}

void TestTwo()
{
	int i;
	int ret;
	for (i = 0; i < 128; i++)
		ret *= 4 << i;
	ret--;
	ret++;

	if (ret > 256)
		ret = -ret;
	if (ret < -256)
		ret *= 900;
}
