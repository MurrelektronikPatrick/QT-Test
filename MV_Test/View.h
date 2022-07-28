#pragma once

#include <QtWidgets/QMainWindow>
#include <qtimer.h>
#include <qdebug.h>
#include <qmessagebox.h>
#include <qstylefactory.h>

#include <plog/Log.h>

#include "ui_MV_Test.h"
#include "Model.h"

class View : public QMainWindow
{
    Q_OBJECT

public:
    View(Model* model, QWidget *parent = nullptr);
    ~View();

        
private slots:
    void on_horizontalSlider_valueChanged(int val);
    void changeValues();

    void on_buttonGroup_buttonClicked(QAbstractButton* button);

    void on_buttonGroup_2_buttonClicked(QAbstractButton* button);

    void on_addItemButton_clicked();

    void on_addItem_Table_clicked();

    void on_Menu_Beenden_triggered();

private:
    Ui::MV_TestClass ui;
    Model* m_model;
    QTimer* m_dataTimer;

};
