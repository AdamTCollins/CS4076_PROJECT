#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "recipeconfirmation.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    RecipeConfirmation *popup = new RecipeConfirmation(ui->textEdit_2->toPlainText());
    popup->setModal(true);
    popup->exec();
    delete popup;
}

