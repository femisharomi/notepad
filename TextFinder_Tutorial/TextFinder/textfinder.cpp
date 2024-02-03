/*
 **********************************
 * Author: Femi Sharomi
 * Date Created: 2024-02-03
 * Repository: develop
 * Description:
 **********************************
 */
#include "textfinder.hpp"
#include "./ui_textfinder.h"

TextFinder::TextFinder(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TextFinder)
{
    ui->setupUi(this);
}

TextFinder::~TextFinder()
{
    delete ui;
}
