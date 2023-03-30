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

RecipeConfirmation::RecipeConfirmation(QString recipeName, QString instructions, bool vegetarian, int value):
    ui(new Ui::RecipeConfirmation)
{
    ui->setupUi(this);
    this->setWindowTitle("Recipe Confirmation");

    ui->label->setText("Recipe '" + recipeName + "' added to Cookbook! :)");
    ui->label_2->setText("Instructions: " + instructions);

    if (vegetarian) {
      ui->label_3->setText("Suitable for Vegetarians");
    }
    else {
      ui->label_3->setText("Not suitable for Vegetarians");
    }

    if (value == 0){
        ui->label_4->setText("Difficulty: Easy");
    }
    else if (value == 1){
        ui->label_4->setText("Difficulty: Medium");
    } else {
        ui->label_4->setText("Difficulty: Hard");
    }

}

void RecipeConfirmation::on_pushButton_clicked()
{
    this->close();
}
