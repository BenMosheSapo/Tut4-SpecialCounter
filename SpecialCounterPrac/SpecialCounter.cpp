#include "SpecialCounter.h"
#include <iostream>

using namespace std;

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

void SpecialCounter::Count() {
	int i;
	if (start > stop) {
		for (i = start; i >=stop; i = i - dec) {
			cout << i << endl;
		}
	}
	else {
		for (i = start; i <= stop; i = i + inc) {
			cout << i << endl;
		}
	}
}

SpecialCounter::~SpecialCounter()
{
}

void SpecialCounter:: operator++() {
	inc += 1;
}

void SpecialCounter:: operator++(int inc_in) {
	inc += 1;
}

void SpecialCounter:: operator--() {
	dec += 1;
}

void SpecialCounter:: operator--(int dec_in) {
	dec += 1;
}


int main() {
	SpecialCounter Counter;
	Counter.Start(500);
	Counter.Count();
	Counter--;
	Counter.Count();
}