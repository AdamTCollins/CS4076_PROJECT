#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "emptytitle.h"
#include "recipeconfirmation.h"
#include <QDesktopServices>

// Global Variable
int difficulty = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Adam's Recipe Creator");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()

{
    // Programmer defined exception
    try {
        if (ui->textEdit_2->toPlainText() == "") {
            throw new emptytitle("error");
        }
    } catch(emptytitle *e) {
        QMessageBox m;
        m.about(this, "Error", "Enter a title for the recipe.");
        m.show();
        return;
    }

    RecipeConfirmation *popup = new RecipeConfirmation(ui->textEdit_2->toPlainText(),
                                                       ui->textEdit->toPlainText(),
                                                       ui->radioButton->isChecked(),
                                                       difficulty,
                                                       ui->checkBox_1->isChecked(),
                                                       ui->checkBox_2->isChecked(),
                                                       ui->checkBox_3->isChecked(),
                                                       ui->checkBox_4->isChecked(),
                                                       ui->checkBox_5->isChecked(),
                                                       ui->checkBox_6->isChecked(),
                                                       ui->checkBox_7->isChecked(),
                                                       ui->checkBox_8->isChecked(),
                                                       ui->checkBox_9->isChecked(),
                                                       ui->checkBox_10->isChecked(),
                                                       ui->checkBox_11->isChecked(),
                                                       ui->checkBox_12->isChecked());


    popup->setModal(true);
    popup->exec();
    delete popup; // Memory Management
    ui->textEdit->clear();
    ui->textEdit_2->clear();

    ui->radioButton->setAutoExclusive(false);
    ui->radioButton->setChecked(false);
    ui->radioButton->setAutoExclusive(true);

    ui->radioButton_2->setAutoExclusive(false);
    ui->radioButton_2->setChecked(false);
    ui->radioButton_2->setAutoExclusive(true);

    ui->horizontalSlider->setValue(0);

    ui->checkBox_1->setChecked(false);
    ui->checkBox_2->setChecked(false);
    ui->checkBox_3->setChecked(false);
    ui->checkBox_4->setChecked(false);
    ui->checkBox_5->setChecked(false);
    ui->checkBox_6->setChecked(false);
    ui->checkBox_7->setChecked(false);
    ui->checkBox_8->setChecked(false);
    ui->checkBox_9->setChecked(false);
    ui->checkBox_10->setChecked(false);
    ui->checkBox_11->setChecked(false);
    ui->checkBox_12->setChecked(false);

}


void MainWindow::on_radioButton_clicked()
{
    bool vegetarian = true;
}


void MainWindow::on_pushButton_2_clicked()
{
    QApplication::quit();
}


void MainWindow::on_radioButton_2_clicked()
{
   bool vegetarian = false;
}


void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    difficulty = value;
}


void MainWindow::on_checkBox_1_stateChanged(int arg1)
{
    bool gluten = true;
}


void MainWindow::on_checkBox_2_stateChanged(int arg1)
{
    bool peanuts = true;
}


void MainWindow::on_checkBox_3_stateChanged(int arg1)
{
    bool fish = true;
}


void MainWindow::on_checkBox_4_stateChanged(int arg1)
{
    bool eggsA = true;
}


void MainWindow::on_checkBox_5_stateChanged(int arg1)
{
    bool milkA = true;
}


void MainWindow::on_checkBox_6_stateChanged(int arg1)
{
    bool almondsA = true;
}


void MainWindow::on_checkBox_7_stateChanged(int arg1)
{
    bool flour = true;
}


void MainWindow::on_checkBox_8_stateChanged(int arg1)
{
    bool sugar = true;
}


void MainWindow::on_checkBox_9_stateChanged(int arg1)
{
    bool butter = true;
}


void MainWindow::on_checkBox_10_stateChanged(int arg1)
{
    bool eggsI = true;
}


void MainWindow::on_checkBox_11_stateChanged(int arg1)
{
    bool milkI = true;
}


void MainWindow::on_checkBox_12_stateChanged(int arg1)
{
    bool almondsI = true;
}


void MainWindow::on_actiongithub_triggered()
{
    QUrl url("https://github.com/AdamTCollins/CS4076_PROJECT");
            QDesktopServices::openUrl(url);
}


void MainWindow::on_actionLinkedIn_triggered()
{
    QUrl url("https://www.linkedin.com/in/adam-collins-17a32724a/");
            QDesktopServices::openUrl(url);
}


void MainWindow::on_actionYoutube_triggered()
{
    QUrl url("https://www.youtube.com/channel/UCUSD6gUPV9lmfQ234lXSQZQ");
            QDesktopServices::openUrl(url);
}

