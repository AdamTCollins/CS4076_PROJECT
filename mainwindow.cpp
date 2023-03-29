#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "recipeconfirmation.h"

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
    RecipeConfirmation *popup = new RecipeConfirmation(ui->textEdit_2->toPlainText(),
                                                       ui->textEdit->toPlainText(),
                                                       ui->radioButton->isChecked());
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

