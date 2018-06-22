#ifndef TEST_H
#define TEST_H


#if PSX_VERSION && RELOC

void TestOne();
void TestTwo();

void *func[] __attribute__((section(".header"))) = {
	TestOne,
	TestTwo,
};

#endif

#endif