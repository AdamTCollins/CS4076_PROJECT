#include "recipeconfirmation.h"
#include "ui_recipeconfirmation.h"

RecipeConfirmation::RecipeConfirmation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RecipeConfirmation)
{
    ui->setupUi(this);
}

RecipeConfirmation::~RecipeConfirmation()
{

    delete ui;
}

RecipeConfirmation::RecipeConfirmation(QString recipeName) :
    ui(new Ui::RecipeConfirmation)
{
    ui->setupUi(this);
    ui->label->setText("Recipe: " + recipeName + " added to cookbook");

}
