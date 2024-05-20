#pragma once
#include "CFigure.h"
#include <math.h>

using namespace System::Windows::Forms;
using namespace System::Drawing;

ref class CTriangle : public CFigure {
private:
	int external_radius = 50;
	Point p0;
	Point p1;
	Point p2;
public:
	CTriangle() : CFigure() {}
	CTriangle(int x, int y) : CFigure(x, y) {}
	CTriangle(const CTriangle% c) : CFigure(c), external_radius(c.external_radius) {}
	~CTriangle() {
		external_radius = 0;
	}
	void draw(Graphics^ g) override {
		update_points();
		if (selected) color = Color::Blue;
		else color = Color::Black;
		Pen^ pen = gcnew Pen(color, 3.f);
		g->DrawPolygon(pen, gcnew array<Point>{ p0, p1, p2 });
	}
	bool check_entry(int mouse_X, int mouse_Y) override {
		// p0 and p1
		int A0 = p1.Y - p0.Y;
		int B0 = p0.X - p1.X;
		int C0 = p0.Y * (p1.X - p0.X) - p0.X * (p1.Y - p0.Y);
		// p1 and p2
		int A1 = p2.Y - p1.Y;
		int B1 = p1.X - p2.X;
		int C1 = p1.Y * (p2.X - p1.X) - p1.X * (p2.Y - p1.Y);
		// p2 and p0
		int A2 = p0.Y - p2.Y;
		int B2 = p2.X - p0.X;
		int C2 = p2.Y * (p0.X - p2.X) - p2.X * (p0.Y - p2.Y);

		return ((A0 * mouse_X + B0 * mouse_Y + C0 <= 0) && (A1 * mouse_X + B1 * mouse_Y + C1 <= 0) && (A2 * mouse_X + B2 * mouse_Y + C2 <= 0));
	}
	void update_points() {
		p0 = Point(x, y - external_radius);
		p1 = Point(x + sqrt(3) * external_radius / 2, y + external_radius / 2);
		p2 = Point(x - sqrt(3) * external_radius / 2, y + external_radius / 2);
	}
};