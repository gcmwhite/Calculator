#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QGridLayout>
#include <QVBoxLayout>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
private:
    QPushButton *No_0Btn;
    QPushButton *No_1Btn;
    QPushButton *No_2Btn;
    QPushButton *No_3Btn;
    QPushButton *No_4Btn;
    QPushButton *No_5Btn;
    QPushButton *No_6Btn;
    QPushButton *No_7Btn;
    QPushButton *No_8Btn;
    QPushButton *No_9Btn;

    QPushButton *addBtn;
    QPushButton *minusBtn;
    QPushButton *multiplyBtn;
    QPushButton *divideBtn;

    QPushButton *pointBtn;
    QPushButton *equalBtn;

    QLineEdit *displayLineEdit;

    QVBoxLayout *mainLayout;
    QVBoxLayout *topLayout;
    QGridLayout *bottomLayout;

    int calculatorFlag;
    bool equalFlag,pointFlag;
    double num1;
private slots:
    void No_0BtnClicked();
    void No_1BtnClicked();
    void No_2BtnClicked();
    void No_3BtnClicked();
    void No_4BtnClicked();
    void No_5BtnClicked();
    void No_6BtnClicked();
    void No_7BtnClicked();
    void No_8BtnClicked();
    void No_9BtnClicked();

    void addBtnClicked();
    void minusBtnClicked();
    void multiplyBtnClicked();
    void divideBtnClicked();

    void pointBtnClicked();
    void equalBtnClicked();
};

#endif // WIDGET_H
