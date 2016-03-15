#pragma once
class SpecialCounter
{
private:
	int start;
	int stop;
	int inc;
	int dec;
	int curVal;
public:
	SpecialCounter(int start_in,int stop_in, int inc_in,int dec_in);
	void Start(int start_in);
	void Stop(int stop_in);
	void stepInc(int stepSize);
	void stepDec(int stepSize);
	int operator++();
	int operator++(int inc_in);
	int operator--();
	int operator--(int dec_in);
	~SpecialCounter();
};

