#include "quicktag.h"
#include "./ui_quicktag.h"

QuickTag::QuickTag(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QuickTag)
{
    ui->setupUi(this);
}

QuickTag::~QuickTag()
{
    delete ui;
}

