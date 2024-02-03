/*
 **********************************
 * Author: Femi Sharomi
 * Date Created: 2024-02-03
 * Repository: develop
 * Description:
 **********************************
 */
#ifndef TEXTFINDER_HPP
#define TEXTFINDER_HPP

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class TextFinder;
}
QT_END_NAMESPACE

class TextFinder : public QWidget
{
    Q_OBJECT

public:
    TextFinder(QWidget *parent = nullptr);
    ~TextFinder();

private:
    Ui::TextFinder *ui;
};
#endif // TEXTFINDER_HPP
