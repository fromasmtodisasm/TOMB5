#ifndef TEST_H
#define TEST_H

extern long* TestPtr;
typedef void (VOIDFUNCVOID)(void);
typedef void (VOIDFUNCSINT16)(short);

#if PSX_VERSION && RELOC

#define TestOne ((VOIDFUNCVOID*) TestPtr[0])
#define TestTwo ((VOIDFUNCVOID*) TestPtr[1])

#else

void TestOne();
void TestTwo();

#endif

#endif