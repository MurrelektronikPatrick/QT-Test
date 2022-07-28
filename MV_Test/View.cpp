#include "View.h"

View::View(Model* model, QWidget *parent)
    : m_model(model), QMainWindow(parent)
{
    ui.setupUi(this);

    ui.progressBar->setValue(this->m_model->getSliderValue());

    // Add items to list
    QListWidgetItem* item = new QListWidgetItem(
        QIcon(":/new/prefix1/Close-icon.png"), "Close");
    ui.listWidget->addItem(item);
    QListWidgetItem* item2 = new QListWidgetItem(
        QIcon(":/new/prefix1/Actions-document-new-icon.png"), "New File");
    ui.listWidget->addItem(item2);
    QListWidgetItem* item3 = new QListWidgetItem(
        QIcon(":/new/prefix1/My-Documents-icon.png"), "Open File");
    ui.listWidget->addItem(item3);

    // Add table items
    //QTableWidgetItem* item4 = new QTableWidgetItem("Hans");
    //QTableWidgetItem* item5 = new QTableWidgetItem("Peter");
    //ui.tableWidget->insertRow(ui.tableWidget->rowCount());
    //ui.tableWidget->setItem(0, 0, item4);
    //ui.tableWidget->setItem(0, 1, item5);
    //QTableWidgetItem* item6 = new QTableWidgetItem("Claus");
    //QTableWidgetItem* item7 = new QTableWidgetItem("Mueller");
    //ui.tableWidget->insertRow(ui.tableWidget->rowCount());
    //ui.tableWidget->setItem(1, 0, item6);
    //ui.tableWidget->setItem(1, 1, item7);

    connect(ui.Menu_Beenden, SIGNAL(clicked()),
        this, SLOT(on_Menu_Beenden_clicked()) );

    // Create timer for checking if data was changed
    this->m_dataTimer = new QTimer(this);
    connect(this->m_dataTimer, SIGNAL(timeout()),  this, SLOT(changeValues()));
    this->m_dataTimer->start(500);


    // New Theme
    qApp->setStyle(QStyleFactory::create("Fusion"));

    QPalette newPalette;
    newPalette.setColor(QPalette::Window, QColor(37, 37, 37));
    newPalette.setColor(QPalette::WindowText, QColor(212, 212, 212));
    newPalette.setColor(QPalette::Base, QColor(60, 60, 60));
    newPalette.setColor(QPalette::AlternateBase, QColor(45, 45, 45));
    newPalette.setColor(QPalette::PlaceholderText, QColor(127, 127, 127));
    newPalette.setColor(QPalette::Text, QColor(212, 212, 212));
    newPalette.setColor(QPalette::Button, QColor(45, 45, 45));
    newPalette.setColor(QPalette::ButtonText, QColor(212, 212, 212));
    newPalette.setColor(QPalette::BrightText, QColor(240, 240, 240));
    newPalette.setColor(QPalette::Highlight, QColor(38, 79, 120));
    newPalette.setColor(QPalette::HighlightedText, QColor(240, 240, 240));

    newPalette.setColor(QPalette::Light, QColor(60, 60, 60));
    newPalette.setColor(QPalette::Midlight, QColor(52, 52, 52));
    newPalette.setColor(QPalette::Dark, QColor(30, 30, 30));
    newPalette.setColor(QPalette::Mid, QColor(37, 37, 37));
    newPalette.setColor(QPalette::Shadow, QColor(0, 0, 0));

    newPalette.setColor(QPalette::Disabled, QPalette::Text,
        QColor(127, 127, 127));

    qApp->setPalette(newPalette);
    
    ui.tableWidget->setStyleSheet(
        "border: .5px solid #616161;"
        "QHeaderView::section {"
        "border: 0px solid transparent;"
        "}"
    );
}

View::~View()
{}

void View::on_horizontalSlider_valueChanged(int val)
{
    //qDebug() << "Entered setSliderValue";
    PLOG(plog::verbose) << "Entered setSliderValue.";
    this->m_model->setSliderValue(val);
    ui.progressBar->setValue(this->m_model->getSliderValue());
}

void View::changeValues()
{
    //qDebug() << "Entered changeValues";
    PLOG(plog::verbose) << "Entered changeValues.";
    if (this->m_model->isSliderValueChanged())
    {
        ui.progressBar->setValue(this->m_model->getSliderValue());
        this->m_model->resetSliderValueChangedFlag();
    }

    if (this->m_model->isButtonIDChanged())
    {
        ui.radiobuttonLabel->setText(QString::fromUtf8(
            this->m_model->radioButtonToText(
                this->m_model->getButtonID()).c_str()));
        this->m_model->resetButtonIDChangedFlag();
    }

    if (this->m_model->isCheckBoxIDChanged())
    {
        ui.checkboxLabel->setText(QString::fromUtf8(
            this->m_model->checkBoxToText(
                this->m_model->getCheckBoxID()).c_str()));
        this->m_model->resetCheckBoxIDChangedFlag();
    }

    if (this->m_model->isListChanged())
    {
        ui.listWidget->clear();
        // Add items to list
        QListWidgetItem* item = new QListWidgetItem(
            QIcon(":/new/prefix1/Close-icon.png"), "Close");
        ui.listWidget->addItem(item);
        QListWidgetItem* item2 = new QListWidgetItem(
            QIcon(":/new/prefix1/Actions-document-new-icon.png"), "New File");
        ui.listWidget->addItem(item2);
        QListWidgetItem* item3 = new QListWidgetItem(
            QIcon(":/new/prefix1/My-Documents-icon.png"), "Open File");
        ui.listWidget->addItem(item3);

        auto list = this->m_model->getList();
        int listlength = this->m_model->getListLength();

        if (listlength > 0) {
            for (int listIterator = 0; listIterator < listlength; listIterator++)
                ui.listWidget->addItem(list[listIterator].c_str());
        }
        this->m_model->resetListChangedFlag();
    }

    if (this->m_model->isTableChanged()) {
        while (ui.tableWidget->rowCount())
            ui.tableWidget->removeRow(ui.tableWidget->rowCount() - 1);

        auto table = this->m_model->getTable();
        int tablelength = this->m_model->getTableLength();

        if (tablelength > 0) {
            for (int tableIterator = 0; tableIterator < tablelength; tableIterator++)
            {
                QTableWidgetItem* appender1 = new QTableWidgetItem(
                    table[tableIterator][0].c_str());
                QTableWidgetItem* appender2 = new QTableWidgetItem(
                    table[tableIterator][1].c_str());
                ui.tableWidget->insertRow(ui.tableWidget->rowCount());
                ui.tableWidget->setItem(tableIterator, 0, appender1);
                ui.tableWidget->setItem(tableIterator, 1, appender2);
            }
        }
        this->m_model->resetTableChangedFlag();
    }
}

void View::on_buttonGroup_buttonClicked(QAbstractButton* button)
{
    //qDebug() << button->objectName();
    PLOG(plog::verbose) << button->objectName() + "Pressed";
    this->m_model->setButtonID(button->objectName().toStdString());
    ui.radiobuttonLabel->setText(QString::fromUtf8(
        this->m_model->radioButtonToText(
            this->m_model->getButtonID()).c_str()));
}

void View::on_buttonGroup_2_buttonClicked(QAbstractButton* button)
{
    //qDebug() << button->objectName();
    PLOG(plog::verbose) << button->objectName() + "Pressed";
    this->m_model->setCheckBoxID(button->objectName().toStdString());
    ui.checkboxLabel->setText(QString::fromUtf8(
        this->m_model->checkBoxToText(
            this->m_model->getCheckBoxID()).c_str()));
}

void View::on_addItemButton_clicked()
{
    /*QMessageBox::information(this, "title",
        ui.listWidget->currentItem()->text());*/
    //ui.listWidget->currentItem()->setBackground(Qt::red);
    //ui.listWidget->currentItem()->setForeground(Qt::white);
    auto text = ui.lineEdit->text();
    PLOG(plog::verbose) << "Add " << text + "to model";
    if (text != "") {
        this->m_model->addListItem(text.toStdString());
        ui.listWidget->addItem(text);
        ui.lineEdit->clear();
    }
}

void View::on_addItem_Table_clicked()
{
    auto text = ui.lineEdit_2->text();
    PLOG(plog::verbose) << "Add " << text + "to model";
    if (text.contains(";"))
    {
        auto stringlist = text.split(";");
        if (stringlist.length() != 2)
        {
            PLOG(plog::warning) << "Wrong String format.";
            //qDebug() << "Wrong String format.";
            return;
        }
        this->m_model->addTableItem(stringlist[0].toStdString(), 
            stringlist[1].toStdString());
        ui.lineEdit_2->clear();

        this->m_model->resetTableChangedFlag();
        QTableWidgetItem* appender1 = new QTableWidgetItem(
            stringlist[0]);
        QTableWidgetItem* appender2 = new QTableWidgetItem(
            stringlist[1]);
        ui.tableWidget->insertRow(ui.tableWidget->rowCount());
        ui.tableWidget->setItem(ui.tableWidget->rowCount() - 1, 0, appender1);
        ui.tableWidget->setItem(ui.tableWidget->rowCount() - 1, 1, appender2);
    }
}

void View::on_Menu_Beenden_triggered()
{
    qApp->quit();
}
