/********************************************************************************
** Form generated from reading UI file 'MV_Test.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MV_TEST_H
#define UI_MV_TEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MV_TestClass
{
public:
    QAction *Menu_Option2;
    QAction *Menu_Beenden;
    QAction *action1_1;
    QAction *action1_2;
    QAction *action1_3;
    QWidget *centralWidget;
    QSlider *horizontalSlider;
    QProgressBar *progressBar;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *inputheaderlable;
    QSpacerItem *horizontalSpacer;
    QLabel *displayheaderlable;
    QSpacerItem *horizontalSpacer_3;
    QRadioButton *radioButton_A;
    QRadioButton *radioButton_C;
    QRadioButton *radioButton_B_2;
    QRadioButton *radioButton_D;
    QLabel *radiobuttonLabel;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QLabel *checkboxLabel;
    QListWidget *listWidget;
    QPushButton *addItemButton;
    QLineEdit *lineEdit;
    QTableWidget *tableWidget;
    QLineEdit *lineEdit_2;
    QPushButton *addItem_Table;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QMenu *menuOption_1;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QButtonGroup *buttonGroup_2;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *MV_TestClass)
    {
        if (MV_TestClass->objectName().isEmpty())
            MV_TestClass->setObjectName(QString::fromUtf8("MV_TestClass"));
        MV_TestClass->resize(610, 502);
        Menu_Option2 = new QAction(MV_TestClass);
        Menu_Option2->setObjectName(QString::fromUtf8("Menu_Option2"));
        Menu_Beenden = new QAction(MV_TestClass);
        Menu_Beenden->setObjectName(QString::fromUtf8("Menu_Beenden"));
        action1_1 = new QAction(MV_TestClass);
        action1_1->setObjectName(QString::fromUtf8("action1_1"));
        action1_2 = new QAction(MV_TestClass);
        action1_2->setObjectName(QString::fromUtf8("action1_2"));
        action1_3 = new QAction(MV_TestClass);
        action1_3->setObjectName(QString::fromUtf8("action1_3"));
        centralWidget = new QWidget(MV_TestClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(10, 60, 160, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(290, 60, 161, 23));
        progressBar->setValue(0);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 581, 38));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        inputheaderlable = new QLabel(layoutWidget);
        inputheaderlable->setObjectName(QString::fromUtf8("inputheaderlable"));
        inputheaderlable->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";"));
        inputheaderlable->setScaledContents(false);

        horizontalLayout->addWidget(inputheaderlable);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        displayheaderlable = new QLabel(layoutWidget);
        displayheaderlable->setObjectName(QString::fromUtf8("displayheaderlable"));
        displayheaderlable->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";"));

        horizontalLayout->addWidget(displayheaderlable);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        radioButton_A = new QRadioButton(centralWidget);
        buttonGroup = new QButtonGroup(MV_TestClass);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(radioButton_A);
        radioButton_A->setObjectName(QString::fromUtf8("radioButton_A"));
        radioButton_A->setEnabled(true);
        radioButton_A->setGeometry(QRect(10, 100, 89, 20));
        radioButton_A->setChecked(true);
        radioButton_C = new QRadioButton(centralWidget);
        buttonGroup->addButton(radioButton_C);
        radioButton_C->setObjectName(QString::fromUtf8("radioButton_C"));
        radioButton_C->setGeometry(QRect(10, 120, 89, 20));
        radioButton_B_2 = new QRadioButton(centralWidget);
        buttonGroup->addButton(radioButton_B_2);
        radioButton_B_2->setObjectName(QString::fromUtf8("radioButton_B_2"));
        radioButton_B_2->setGeometry(QRect(100, 100, 89, 20));
        radioButton_D = new QRadioButton(centralWidget);
        buttonGroup->addButton(radioButton_D);
        radioButton_D->setObjectName(QString::fromUtf8("radioButton_D"));
        radioButton_D->setGeometry(QRect(100, 120, 89, 20));
        radiobuttonLabel = new QLabel(centralWidget);
        radiobuttonLabel->setObjectName(QString::fromUtf8("radiobuttonLabel"));
        radiobuttonLabel->setGeometry(QRect(290, 100, 151, 16));
        checkBox = new QCheckBox(centralWidget);
        buttonGroup_2 = new QButtonGroup(MV_TestClass);
        buttonGroup_2->setObjectName(QString::fromUtf8("buttonGroup_2"));
        buttonGroup_2->addButton(checkBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(10, 160, 76, 20));
        checkBox_2 = new QCheckBox(centralWidget);
        buttonGroup_2->addButton(checkBox_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(100, 160, 76, 20));
        checkBox_3 = new QCheckBox(centralWidget);
        buttonGroup_2->addButton(checkBox_3);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(10, 180, 76, 20));
        checkBox_4 = new QCheckBox(centralWidget);
        buttonGroup_2->addButton(checkBox_4);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(100, 180, 76, 20));
        checkboxLabel = new QLabel(centralWidget);
        checkboxLabel->setObjectName(QString::fromUtf8("checkboxLabel"));
        checkboxLabel->setGeometry(QRect(290, 160, 49, 16));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 210, 241, 192));
        addItemButton = new QPushButton(centralWidget);
        addItemButton->setObjectName(QString::fromUtf8("addItemButton"));
        addItemButton->setGeometry(QRect(194, 410, 61, 24));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 410, 171, 22));
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(290, 210, 291, 192));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(290, 410, 221, 22));
        addItem_Table = new QPushButton(centralWidget);
        addItem_Table->setObjectName(QString::fromUtf8("addItem_Table"));
        addItem_Table->setGeometry(QRect(520, 410, 61, 24));
        MV_TestClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MV_TestClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 610, 22));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        menuOption_1 = new QMenu(menuMenu);
        menuOption_1->setObjectName(QString::fromUtf8("menuOption_1"));
        MV_TestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MV_TestClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MV_TestClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MV_TestClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MV_TestClass->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addAction(menuOption_1->menuAction());
        menuMenu->addAction(Menu_Option2);
        menuMenu->addSeparator();
        menuMenu->addAction(Menu_Beenden);
        menuOption_1->addAction(action1_1);
        menuOption_1->addAction(action1_2);
        menuOption_1->addAction(action1_3);

        retranslateUi(MV_TestClass);

        QMetaObject::connectSlotsByName(MV_TestClass);
    } // setupUi

    void retranslateUi(QMainWindow *MV_TestClass)
    {
        MV_TestClass->setWindowTitle(QCoreApplication::translate("MV_TestClass", "MV_Test", nullptr));
        Menu_Option2->setText(QCoreApplication::translate("MV_TestClass", "Option 2", nullptr));
        Menu_Beenden->setText(QCoreApplication::translate("MV_TestClass", "Beenden", nullptr));
        action1_1->setText(QCoreApplication::translate("MV_TestClass", "1.1", nullptr));
        action1_2->setText(QCoreApplication::translate("MV_TestClass", "1.2", nullptr));
        action1_3->setText(QCoreApplication::translate("MV_TestClass", "1.3", nullptr));
        inputheaderlable->setText(QCoreApplication::translate("MV_TestClass", "Input Fields", nullptr));
        displayheaderlable->setText(QCoreApplication::translate("MV_TestClass", "Display Fields", nullptr));
        radioButton_A->setText(QCoreApplication::translate("MV_TestClass", "Option A", nullptr));
        radioButton_C->setText(QCoreApplication::translate("MV_TestClass", "Option C", nullptr));
        radioButton_B_2->setText(QCoreApplication::translate("MV_TestClass", "Option B", nullptr));
        radioButton_D->setText(QCoreApplication::translate("MV_TestClass", "Option D", nullptr));
        radiobuttonLabel->setText(QCoreApplication::translate("MV_TestClass", "Option A", nullptr));
        checkBox->setText(QCoreApplication::translate("MV_TestClass", "Option 1", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MV_TestClass", "Option 2", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MV_TestClass", "Option 3", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MV_TestClass", "Option 4", nullptr));
        checkboxLabel->setText(QCoreApplication::translate("MV_TestClass", "Option 1", nullptr));
        addItemButton->setText(QCoreApplication::translate("MV_TestClass", "Add Item", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MV_TestClass", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MV_TestClass", "Surname", nullptr));
        addItem_Table->setText(QCoreApplication::translate("MV_TestClass", "Add Item", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MV_TestClass", "Menu", nullptr));
        menuOption_1->setTitle(QCoreApplication::translate("MV_TestClass", "Option 1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MV_TestClass: public Ui_MV_TestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MV_TEST_H
