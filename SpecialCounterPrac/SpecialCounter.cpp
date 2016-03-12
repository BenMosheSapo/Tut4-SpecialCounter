#include "SpecialCounter.h"



SpecialCounter::SpecialCounter(int start_in = 0, int stop_in = 255, int inc_in = 1, int dec_in = 1) 
{
	start = start_in;
	stop = stop_in;
	inc = inc_in;
	dec = dec_in;
}

void SpecialCounter::Start(int start_in) {
	start = start_in;
}

void SpecialCounter::Stop(int stop_in) {
	stop = stop_in;
}

void SpecialCounter::stepInc(int stepSize) {
	inc = stepSize;
}
void SpecialCounter::stepDec(int stepSize) {
	dec = stepSize;
}

SpecialCounter::~SpecialCounter()
{
}
