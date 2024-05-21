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
	void update_points() {
		p0 = Point(x, y - external_radius);
		p1 = Point(x + sqrt(3) * external_radius / 2, y + external_radius / 2);
		p2 = Point(x - sqrt(3) * external_radius / 2, y + external_radius / 2);
	}
public:
	CTriangle() : CFigure() { update_points(); }
	CTriangle(int x, int y, Color color) : CFigure(x, y, color) { update_points(); }
	CTriangle(const CTriangle% c) : CFigure(c), external_radius(c.external_radius) { update_points(); }
	~CTriangle() {}
	void draw(Graphics^ g) override {
		update_points();
		if (!selected) g->DrawPolygon(gcnew Pen(color, 3.f), gcnew array<Point>{ p0, p1, p2 });
		else g->DrawPolygon(gcnew Pen(Color::Blue, 3.f), gcnew array<Point>{ p0, p1, p2 });
		
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

		return ((A0 * mouse_X + B0 * mouse_Y + C0 <= 0) && (A1 * mouse_X + B1 * mouse_Y + C1 <= 0) &&
			(A2 * mouse_X + B2 * mouse_Y + C2 <= 0));
	}
	void changeSize(int value) override {
		if (external_radius + value > 3) external_radius += value;
	}
	bool checkBorder(int deltaX, int deltaY, int width, int height) override {
		return (p1.X + deltaX <= width - 3 && p2.X + deltaX >= 3 &&
			p1.Y + deltaY <= height - 3 && p0.Y + deltaY >= 3);
	}
};