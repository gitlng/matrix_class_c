#pragma once
#include "TVector.h"

template<class T>
class TMatrix {
private:
	TVector<TVector<T>> matr;
	int size;
public:
	TMatrix<T>(int _size = 0) {
		size = _size;
		matr = TVector<TVector<T>>(size);
		for (int i = 0; i < size; i++) {
			matr[i] = TVector < T>(size - i, i);
		}
	}
	TMatrix<T>(const TMatrix<T>& tmp) {
		size = tmp.size;
		//matr = TVector<TVector<T>>(size);
		matr = tmp.matr;
	}

	~TMatrix<T>() {}
	TMatrix<T>& operator=(TMatrix<T> tmp) {
		if (size != tmp.size) {
			if (size != 0) {
				//delete matr;//??????
			}
			matr=TVector<TVector<T>>(tmp.size);
			size = tmp.size;
		}
		matr = tmp.matr;
		return *this;
	}
	TVector<T>& operator[](const int k) {
		if ((k >= 0) && (k <= size)) { return matr[k]; }
		else throw - 1;
	}

	TMatrix <T> operator+( TMatrix<T> tmp) {
		if (size != tmp.size) {
			size = tmp.size;
		}
		TMatrix<T> res(size);
		res.matr = (matr + tmp.matr);
		return res;
	}
	TMatrix <T> operator-(TMatrix<T> tmp) {
		if (size != tmp.size) {
			size = tmp.size;
		}
		TMatrix<T> res(size);
		res.matr = (matr - tmp.matr);
		return res;
	}
	TMatrix<T> operator*(TMatrix <T>& tmp)
	{
		if (tmp.size != this->size)throw - 1;
		TMatrix<T>res(this->size);
		for (int i = 0; i < this->size; i++)
		{
			for (int j = i; j < this->size; j++)
			{
				res[i][j] = 0;
				for (int k = i; k <= j; k++)
				{
					T m = tmp.matr[k][j];
					m *= this->matr[i][k];
					res[i][j] += m;
				}
			}
		}
		return res;
	}
	TMatrix<T> operator*(const int k)
	{
		TMatrix<T> res(this->size);
		for (int i = 0; i < (this->size); i++)
		{
			res.matr[i] = (this->matr[i]) * k;
		}
		return res;
	}

	void output() {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < i; j++) { cout << "  "; }
			matr[i].output();
			cout << endl;
		}
	}

};