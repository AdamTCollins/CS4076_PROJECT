#include "recipeconfirmation.h"
#include "ui_recipeconfirmation.h"


RecipeConfirmation::RecipeConfirmation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RecipeConfirmation)
{
    ui->setupUi(this);
}

// Destructor
RecipeConfirmation::~RecipeConfirmation()
{
    delete ui;
}

RecipeConfirmation::RecipeConfirmation(QString recipeName) :
    ui(new Ui::RecipeConfirmation)
{
    ui->setupUi(this);
    this->setWindowTitle("Recipe Confirmation");
    ui->label->setText("Recipe '" + recipeName + "' added to Cookbook! :)");
}

void RecipeConfirmation::on_pushButton_clicked()
{
    this->close();
}
