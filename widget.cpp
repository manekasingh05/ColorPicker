#include "widget.h"
#include "./ui_widget.h"
#include "colorpicker.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ColorPicker * colorPicker = new ColorPicker(this);

    ui->verticalLayout->addWidget(colorPicker);

}

Widget::~Widget()
{
    delete ui;
}
