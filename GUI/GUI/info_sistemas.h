#ifndef INFO_SISTEMAS_H
#define INFO_SISTEMAS_H

#include <QDialog>

namespace Ui {
class info_sistemas;
}

class info_sistemas : public QDialog
{
    Q_OBJECT

public:
    explicit info_sistemas(QWidget *parent = nullptr);
    ~info_sistemas();

private:
    Ui::info_sistemas *ui;
};

#endif // INFO_SISTEMAS_H
