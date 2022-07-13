#pragma once
class CBalaCriminal :public CBala
{
private:
public:
	CBalaCriminal(int _x, int _y, int _dx, int _dy, int _indx, int _indy);
	void Dibujar(Graphics^g);
	~CBalaCriminal();
};
