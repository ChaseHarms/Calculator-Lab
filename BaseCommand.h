#pragma once
class BaseCommand
{
public:
	virtual int Execute() = 0;
};

class AddCommand : public BaseCommand {
private:
	int _num1;
	int _num2;
public:
	AddCommand(int num1, int num2) {
		_num1 = num1;
		_num2 = num2;
	}
	int Execute() {
		return _num1 + _num2;
	}
};

class SubCommand : public BaseCommand {
private:
	int _num1;
	int _num2;
public:
	SubCommand(int num1, int num2) {
		_num1 = num1;
		_num2 = num2;
	}
	int Execute() {
		return _num1 - _num2;
	}
};

class MultCommand : public BaseCommand {
private:
	int _num1;
	int _num2;
public:
	MultCommand(int num1, int num2) {
		_num1 = num1;
		_num2 = num2;
	}
	int Execute() {
		return _num1 * _num2;
	}
};

class DivCommand : public BaseCommand {
private:
	int _num1;
	int _num2;
public:
	DivCommand(int num1, int num2) {
		_num1 = num1;
		_num2 = num2;
	}
	int Execute() {
		return _num1 / _num2;
	}
};