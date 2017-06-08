#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle(tr("简易计算器"));        //设置程序标题
    setMinimumSize(300,200);
    setMaximumSize(300,200);
//    setWindowIcon(QIcon(":/images/Calculator_96px.ico"));

    displayLineEdit = new QLineEdit();      //文本输入与显示

    No_0Btn = new QPushButton(tr("0"));     //0~9
    No_1Btn = new QPushButton(tr("1"));
    No_2Btn = new QPushButton(tr("2"));
    No_3Btn = new QPushButton(tr("3"));
    No_4Btn = new QPushButton(tr("4"));
    No_5Btn = new QPushButton(tr("5"));
    No_6Btn = new QPushButton(tr("6"));
    No_7Btn = new QPushButton(tr("7"));
    No_8Btn = new QPushButton(tr("8"));
    No_9Btn = new QPushButton(tr("9"));

    addBtn = new QPushButton(tr("+"));      //+-×÷.=
    minusBtn = new QPushButton(tr("-"));
    multiplyBtn = new QPushButton(tr("×"));
    divideBtn = new QPushButton(tr("÷"));

    pointBtn = new QPushButton(tr("."));
    equalBtn = new QPushButton(tr("="));

    mainLayout = new QVBoxLayout(this);     //创建主布局为垂直布局
    topLayout = new QVBoxLayout();          //为单行输入框创建垂直布局
    bottomLayout = new QGridLayout();       //为按键创建格子布局

    mainLayout->addLayout(topLayout);       //添加布局
    mainLayout->addLayout(bottomLayout);

    topLayout->addWidget(displayLineEdit);      //添加Widget

    bottomLayout->addWidget(No_7Btn,0,0);
    bottomLayout->addWidget(No_8Btn,0,1);
    bottomLayout->addWidget(No_9Btn,0,2);
    bottomLayout->addWidget(addBtn,0,3);

    bottomLayout->addWidget(No_4Btn,1,0);
    bottomLayout->addWidget(No_5Btn,1,1);
    bottomLayout->addWidget(No_6Btn,1,2);
    bottomLayout->addWidget(minusBtn,1,3);

    bottomLayout->addWidget(No_1Btn,2,0);
    bottomLayout->addWidget(No_2Btn,2,1);
    bottomLayout->addWidget(No_3Btn,2,2);
    bottomLayout->addWidget(multiplyBtn,2,3);

    bottomLayout->addWidget(No_0Btn,3,0);
    bottomLayout->addWidget(pointBtn,3,1);
    bottomLayout->addWidget(equalBtn,3,2);
    bottomLayout->addWidget(divideBtn,3,3);

    connect(No_0Btn,SIGNAL(clicked(bool)),this,SLOT(No_0BtnClicked()));     //按键连接
    connect(No_1Btn,SIGNAL(clicked(bool)),this,SLOT(No_1BtnClicked()));
    connect(No_2Btn,SIGNAL(clicked(bool)),this,SLOT(No_2BtnClicked()));
    connect(No_3Btn,SIGNAL(clicked(bool)),this,SLOT(No_3BtnClicked()));
    connect(No_4Btn,SIGNAL(clicked(bool)),this,SLOT(No_4BtnClicked()));
    connect(No_5Btn,SIGNAL(clicked(bool)),this,SLOT(No_5BtnClicked()));
    connect(No_6Btn,SIGNAL(clicked(bool)),this,SLOT(No_6BtnClicked()));
    connect(No_7Btn,SIGNAL(clicked(bool)),this,SLOT(No_7BtnClicked()));
    connect(No_8Btn,SIGNAL(clicked(bool)),this,SLOT(No_8BtnClicked()));
    connect(No_9Btn,SIGNAL(clicked(bool)),this,SLOT(No_9BtnClicked()));

    connect(addBtn,SIGNAL(clicked(bool)),this,SLOT(addBtnClicked()));
    connect(minusBtn,SIGNAL(clicked(bool)),this,SLOT(minusBtnClicked()));
    connect(multiplyBtn,SIGNAL(clicked(bool)),this,SLOT(multiplyBtnClicked()));
    connect(divideBtn,SIGNAL(clicked(bool)),this,SLOT(divideBtnClicked()));
    connect(pointBtn,SIGNAL(clicked(bool)),this,SLOT(pointBtnClicked()));
    connect(equalBtn,SIGNAL(clicked(bool)),this,SLOT(equalBtnClicked()));

    calculatorFlag = 0;     //计算标志位
    pointFlag = equalFlag = false;      //等号标志位
}

Widget::~Widget()
{

}

void Widget::No_0BtnClicked()
{
    if (equalFlag)
    {
        displayLineEdit->clear();
        displayLineEdit->setAlignment(Qt::AlignLeft);
        equalFlag = false;
    }
    displayLineEdit->setText(displayLineEdit->text()+=tr("0"));
}

void Widget::No_1BtnClicked()
{
    if (equalFlag)
    {
        displayLineEdit->clear();
        displayLineEdit->setAlignment(Qt::AlignLeft);
        equalFlag = false;
    }
    displayLineEdit->setText(displayLineEdit->text()+=tr("1"));
}

void Widget::No_2BtnClicked()
{
    if (equalFlag)
    {
        displayLineEdit->clear();
        displayLineEdit->setAlignment(Qt::AlignLeft);
        equalFlag = false;
    }
    displayLineEdit->setText(displayLineEdit->text()+=tr("2"));
}

void Widget::No_3BtnClicked()
{
    if (equalFlag)
    {
        displayLineEdit->clear();
        displayLineEdit->setAlignment(Qt::AlignLeft);
        equalFlag = false;
    }
    displayLineEdit->setText(displayLineEdit->text()+=tr("3"));
}

void Widget::No_4BtnClicked()
{
    if (equalFlag)
    {
        displayLineEdit->clear();
        displayLineEdit->setAlignment(Qt::AlignLeft);
        equalFlag = false;
    }
    displayLineEdit->setText(displayLineEdit->text()+=tr("4"));
}

void Widget::No_5BtnClicked()
{
    if (equalFlag)
    {
        displayLineEdit->clear();
        displayLineEdit->setAlignment(Qt::AlignLeft);
        equalFlag = false;
    }
    displayLineEdit->setText(displayLineEdit->text()+=tr("5"));
}

void Widget::No_6BtnClicked()
{
    if (equalFlag)
    {
        displayLineEdit->clear();
        displayLineEdit->setAlignment(Qt::AlignLeft);
        equalFlag = false;
    }
    displayLineEdit->setText(displayLineEdit->text()+=tr("6"));
}

void Widget::No_7BtnClicked()
{
    if (equalFlag)
    {
        displayLineEdit->clear();
        displayLineEdit->setAlignment(Qt::AlignLeft);
        equalFlag = false;
    }
    displayLineEdit->setText(displayLineEdit->text()+=tr("7"));
}

void Widget::No_8BtnClicked()
{
    if (equalFlag)
    {
        displayLineEdit->clear();
        displayLineEdit->setAlignment(Qt::AlignLeft);
        equalFlag = false;
    }
    displayLineEdit->setText(displayLineEdit->text()+=tr("8"));
}

void Widget::No_9BtnClicked()
{
    if (equalFlag)
    {
        displayLineEdit->clear();
        displayLineEdit->setAlignment(Qt::AlignLeft);
        equalFlag = false;
    }
    displayLineEdit->setText(displayLineEdit->text()+=tr("9"));
}

void Widget::addBtnClicked()
{
    num1 = displayLineEdit->text().toDouble();
    displayLineEdit->clear();
    calculatorFlag = 1;
}

void Widget::minusBtnClicked()
{
    num1 = displayLineEdit->text().toDouble();
    displayLineEdit->clear();
    calculatorFlag = 2;
}

void Widget::multiplyBtnClicked()
{
    num1 = displayLineEdit->text().toDouble();
    displayLineEdit->clear();
    calculatorFlag = 3;
}

void Widget::divideBtnClicked()
{
    num1 = displayLineEdit->text().toDouble();
    displayLineEdit->clear();
    calculatorFlag = 4;
}

void Widget::pointBtnClicked()
{
    if (equalFlag)
    {
        displayLineEdit->clear();
        displayLineEdit->setAlignment(Qt::AlignLeft);
        equalFlag = false;
    }
    if (!pointFlag)
    {
        displayLineEdit->setText(displayLineEdit->text()+=tr("."));
        pointFlag = true;
    }
}

void Widget::equalBtnClicked()
{
    double num2 = displayLineEdit->text().toDouble();
    displayLineEdit->clear();
    displayLineEdit->setAlignment(Qt::AlignRight);
    switch (calculatorFlag) {
    case 0:
    case 1:
        displayLineEdit->setText(tr("%1+%2=%3").arg(num1).arg(num2).arg(num1+num2));
        break;
    case 2:
        displayLineEdit->setText(tr("%1-%2=%3").arg(num1).arg(num2).arg(num1-num2));
        break;
    case 3:
        displayLineEdit->setText(tr("%1×%2=%3").arg(num1).arg(num2).arg(num1*num2));
        break;
    case 4:
        displayLineEdit->setText(tr("%1÷%2=%3").arg(num1).arg(num2).arg(num1/num2));
    }
    equalFlag = true;
    pointFlag = false;
    calculatorFlag = 0;
    num1 = num2 = 0.0;
}
