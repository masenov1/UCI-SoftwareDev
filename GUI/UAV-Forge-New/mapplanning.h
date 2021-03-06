#ifndef MAPPLANNING_H
#define MAPPLANNING_H

#include <QDialog>
#include <QComboBox>
#include <QPushButton>
#include <QButtonGroup>

namespace Ui {
class MapPlanning;
}

class MapPlanning : public QDialog
{
    Q_OBJECT

public:
    explicit MapPlanning(QWidget *parent = 0);
    ~MapPlanning();

private slots:
    void on_pushButton_6_clicked();
    void on_pushButton_5_clicked();
    void buttonWasClicked(int);

private:
    Ui::MapPlanning *ui;
    QButtonGroup *buttonGroup;
};

#endif // MAPPLANNING_H
