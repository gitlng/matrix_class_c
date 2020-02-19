#pragma once

using namespace std;

template <class T>
class TVector
{
private:
	T* mem;
	int size;
	int start;
public:
	TVector<T>(int _size = 0, int _start = 0) {
		size = _size;
		start = _start;
		mem = new T[size];
		for (int i = 0; i < size; i++) {
			mem[i] = T(0);
		}
	}
	TVector <T>(TVector <T>& tmp)
	{
		size = tmp.size;
		start = tmp.start;
		mem = new T[size];
		for (int i = 0; i < size; i++)
		{
			mem[i] = tmp.mem[i];
		}
	}
	TVector<T>& operator=(const TVector<T>& tmp) {
		if (size != tmp.size) {
			if (size != 0) {
				delete[]mem;
			}
			size = tmp.size;
			mem = new T[size];
		}
		start = tmp.start;
		mem = new T[size];
		for (int i = 0; i < size; i++) {
			mem[i] = tmp.mem[i];
		}
		return *this;
	}
	~TVector<T>() {
		delete[]mem;
	}

	T& operator[](int k) {
		if (k < start) { return mem[0]; }
		if (k > (size + start)) { return mem[INT_MAX]; }
		return mem[k-start];
	}

	

	TVector<T> operator+(TVector<T> tmp) {
		TVector<T> res(0);
		if (size != tmp.size) { return res; }
		res = tmp;
		for (int i = 0; i < size; i++) {
			res.mem[i] = mem[i] + tmp.mem[i];
		}
		return res;
	}
	TVector<T> operator-(TVector<T> tmp) {
		TVector<T> res(0);
		if (size != tmp.size) { return res; }
		res = tmp;
		for (int i = 0; i < size; i++) {
			res.mem[i] = mem[i] - tmp.mem[i];
		}
		return res;
	}
	T operator*(TVector<T> tmp) {
		if (size != tmp.size) { return T(0); }
		T res(0);
		for (int i = 0; i < size; i++) {
			res += mem[i] * tmp.mem[i];
		}
		return res;
	}
	TVector<T> operator*(T k) {
		TVector<T> res(0);
		res = (*this);
		for (int i = 0; i < size; i++) { res.mem[i]*=k; }
		return res;
	}
//------------------------------------------------------------------//
	void output() {
		for (int i = 0; i < size; i++) {
			std::cout << mem[i] << " ";
		}
	}
	void set(int i,T tmp) {
		mem[i] = tmp;
	}

	void input(T* arr) {
		for (int i = 0; i < size; i++) {
			mem[i] = T[i];
		}
	}
	int getsize() {
		return size;
	}

	int getstart() {
		return start;
	}
	
	
};



