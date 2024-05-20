#pragma once
#include "CFigure.h"

using namespace System::Windows::Forms;
using namespace System::Drawing;

ref class CSquare : public CFigure {
private:
	int side = 80;
public:
	CSquare() : CFigure() {}
	CSquare(int x, int y, Color color) : CFigure(x, y, color) {}
	CSquare(const CSquare% c) : CFigure(c), side(c.side) {}
	~CSquare() {}
	void draw(Graphics^ g) override {
		if (!selected) g->DrawRectangle(gcnew Pen(color, 3.f), x - side / 2, y - side / 2, side, side);
		else g->DrawRectangle(gcnew Pen(Color::Blue, 3.f), x - side / 2, y - side / 2, side, side);
	}
	bool check_entry(int mouse_X, int mouse_Y) override {
		int xl = x - side / 2;
		int yl = y - side / 2;
		return (xl <= mouse_X && yl <= mouse_Y && side + xl >= mouse_X && side + yl >= mouse_Y);
	}
	void changeSize(int value) override {
		if (side + value > 2) side += value;
	}
};