#pragma once
class CBalaCorrupto :public CBala
{
private:
public:
	CBalaCorrupto(int _x, int _y, int _dx, int _dy, int _indx, int _indy);
	void Dibujar(Graphics^g);
	~CBalaCorrupto();
};