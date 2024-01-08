#ifndef INSCRIPTION_H
#define INSCRIPTION_H

#include <QDialog>

namespace Ui {
class Inscription;
}

class Inscription : public QDialog
{
    Q_OBJECT

public:
    explicit Inscription(QWidget *parent = nullptr);
    ~Inscription();

private:
    Ui::Inscription *ui;
};

#endif // INSCRIPTION_H
