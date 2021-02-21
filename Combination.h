#pragma once
class Combination
{
private:
	int first;
	unsigned int second;
public:
	bool Init(int k, int n);
	void Display() const;
	void Read();
	double combination();
};