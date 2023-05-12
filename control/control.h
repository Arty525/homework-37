#pragma once
#include <QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QTextBrowser>
#include <string>
class CalculatorMainWindow : public QMainWindow {
	Q_OBJECT

public:

	QProgressBar* volume = nullptr;
	QTextBrowser* chanel = nullptr;
	

	CalculatorMainWindow(QWidget* parent = nullptr) : QMainWindow(parent) {}

public slots:
	/*void plus() { result->setText(val1->text() + val2->text()); };
	void minus() { result->setText(std::stoi(val1->text()) - std::stoi(val2->text())); };
	void multiplication() { result->setText(val1->text() * val2->text()); };
	void divide() { result->setText(val1->text() / val2->text()); };*/

	void ch1() { if(chanel->toPlainText().size() < 3) chanel->setText(chanel->toPlainText() + "1"); };
	void ch2() { if (chanel->toPlainText().size() < 3) chanel->setText(chanel->toPlainText() + "2"); };
	void ch3() { if (chanel->toPlainText().size() < 3) chanel->setText(chanel->toPlainText() + "3"); };
	void ch4() { if (chanel->toPlainText().size() < 3) chanel->setText(chanel->toPlainText() + "4"); };
	void ch5() { if (chanel->toPlainText().size() < 3) chanel->setText(chanel->toPlainText() + "5"); };
	void ch6() { if (chanel->toPlainText().size() < 3) chanel->setText(chanel->toPlainText() + "6"); };
	void ch7() { if (chanel->toPlainText().size() < 3) chanel->setText(chanel->toPlainText() + "7"); };
	void ch8() { if (chanel->toPlainText().size() < 3) chanel->setText(chanel->toPlainText() + "8"); };
	void ch9() { if (chanel->toPlainText().size() < 3) chanel->setText(chanel->toPlainText() + "9"); };
	void ch0() { if (chanel->toPlainText().size() < 3) chanel->setText(chanel->toPlainText() + "0"); };
	void next() { if (chanel->toPlainText().size() <= 3 && QString::number(chanel->toPlainText().toInt() + 1).size() <= 3) chanel->setText(QString::number(chanel->toPlainText().toInt() + 1)); };
	void prev() { if (chanel->toPlainText().toInt() > 0) chanel->setText(QString::number(chanel->toPlainText().toInt() - 1)); };
	void volup() { volume->value() + 10 <= 100 ? volume->setValue(volume->value() + 10) : volume->setValue(100); };
	void voldown() { volume->value() - 10 >= 0 ? volume->setValue(volume->value() - 10) : volume->setValue(0); };
	void reset() {
		volume->setValue(0);
		chanel->clear();
	}
};