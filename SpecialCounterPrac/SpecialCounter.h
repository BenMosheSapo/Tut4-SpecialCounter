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
	void Count();
	void operator++();
	void operator++(int inc_in);
	void operator--();
	void operator--(int dec_in);
	~SpecialCounter();
};

