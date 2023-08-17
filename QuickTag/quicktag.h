#ifndef QUICKTAG_H
#define QUICKTAG_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class QuickTag; }
QT_END_NAMESPACE

class QuickTag : public QMainWindow
{
    Q_OBJECT

public:
    QuickTag(QWidget *parent = nullptr);
    ~QuickTag();

private:
    Ui::QuickTag *ui;
};
#endif // QUICKTAG_H
