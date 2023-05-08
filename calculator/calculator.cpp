#include <QApplication>
#include <QPushButton>
#include "calcmw.h"
#include "./ui_calculator.h"

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
	CalculatorMainWindow window(nullptr);
	Ui::MainWindow calculator;
	calculator.setupUi(&window);
	window.val1 = calculator.val1;
	window.val2 = calculator.val2;
	window.result = calculator.result;
	window.resize(200, 800);
	window.show();
	return QApplication::exec();
}
