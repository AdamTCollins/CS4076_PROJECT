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

RecipeConfirmation::RecipeConfirmation(QString recipeName, QString instructions, bool vegetarian):
    ui(new Ui::RecipeConfirmation)
{
    ui->setupUi(this);
    this->setWindowTitle("Recipe Confirmation");
    ui->label->setText("Recipe '" + recipeName + "' added to Cookbook! :)");
    ui->label_2->setText("Instructions: " + instructions);
    if(vegetarian){
      ui->label_3->setText("Vegetarian: true");
    }else{
      ui->label_3->setText("Vegetarian: false");
    }
}

void RecipeConfirmation::on_pushButton_clicked()
{
    this->close();
}
