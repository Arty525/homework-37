#include <QApplication>
#include <QPushButton>
#include "control.h"
#include "./ui_control.h"

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
	CalculatorMainWindow window(nullptr);
	Ui::MainWindow control;
	control.setupUi(&window);
	window.volume = control.volume;
	window.chanel = control.chanel;
	window.resize(200, 800);
	window.show();
	return QApplication::exec();
}
