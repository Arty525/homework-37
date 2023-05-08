#pragma once
#include <QMainWindow>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextBrowser>
#include <string>
class CalculatorMainWindow : public QMainWindow {
	Q_OBJECT
public:

	QLineEdit* val1 = nullptr;
	QLineEdit* val2 = nullptr;
	QTextBrowser* result = nullptr;

	CalculatorMainWindow(QWidget* parent = nullptr) : QMainWindow(parent) {}
public slots:
	void plus() { result->setText(QString::number(val1->text().toDouble() + val2->text().toDouble())); };
	void minus() { result->setText(QString::number(val1->text().toDouble() - val2->text().toDouble())); };
	void multiplication() { result->setText(QString::number(val1->text().toDouble() * val2->text().toDouble())); };
	void divide() { result->setText(QString::number(val1->text().toDouble() / val2->text().toDouble())); };
};