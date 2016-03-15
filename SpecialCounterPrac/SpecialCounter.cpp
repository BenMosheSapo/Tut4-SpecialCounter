#include "SpecialCounter.h"
#include <iostream>

using namespace std;

SpecialCounter::SpecialCounter(int start_in = 0, int stop_in = 255, int inc_in = 1, int dec_in = 1) 
{
	curVal = start_in;
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

int SpecialCounter:: operator++() {
	if (curVal+=inc <=stop)
	curVal += inc;
	return curVal;
}

int SpecialCounter:: operator++(int inc_in) {
	int temp = curVal;
	if (curVal += inc <= stop)
	curVal += inc;
	return temp;
}

int SpecialCounter:: operator--() {
	if (curVal -= dec >= start)
	curVal -= dec;
	return curVal;
}

int SpecialCounter:: operator--(int dec_in) {
	int temp = curVal;
	if (curVal -= dec >= start)
		curVal -= dec;
	return temp;
}


int main() {
	SpecialCounter Counter;
}