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

RecipeConfirmation::RecipeConfirmation(QString recipeName,QString instructions,
                                       bool vegetarian, int value,
                                       bool gluten, bool peanuts,
                                       bool fish, bool eggsA,
                                       bool milkA, bool almondsA,
                                       bool flour, bool sugar,
                                       bool butter, bool eggsI,
                                       bool milkI, bool almondsI):

    ui(new Ui::RecipeConfirmation)
{
    ui->setupUi(this);
    this->setWindowTitle("Recipe Confirmation");

    ui->label->setText("Recipe '" + recipeName + "' added to Cookbook! :)");
    ui->label_2->setText("Instructions: \n" + instructions);

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


    ui->label_5->setText("Allergies Included");

    if (gluten == true){
        ui->label_6->setText("Gluten");
    } else {
        ui->label_6->setText(" ");
    }

    if (peanuts == true){
        ui->label_7->setText("Peanuts");
    } else {
        ui->label_7->setText(" ");
    }

    if (fish == true){
        ui->label_8->setText("Fish");
    } else {
        ui->label_8->setText(" ");
    }

    if (eggsA == true){
        ui->label_9->setText("Eggs");
    } else {
        ui->label_9->setText(" ");
    }

    if (milkA == true){
        ui->label_10->setText("Milk");
    } else {
        ui->label_10->setText(" ");
    }

    if (almondsA == true){
        ui->label_11->setText("Almonds");
    } else {
        ui->label_11->setText(" ");
    }


    ui->label_12->setText("Ingredients Included");

    if (flour == true){
        ui->label_13->setText("Flour");
    } else {
        ui->label_13->setText(" ");
    }

    if (sugar == true){
        ui->label_14->setText("Sugar");
    } else {
        ui->label_14->setText(" ");
    }

    if (butter == true){
        ui->label_15->setText("Butter");
    } else {
        ui->label_15->setText(" ");
    }

    if (eggsI == true){
        ui->label_16->setText("Eggs");
    } else {
        ui->label_16->setText(" ");
    }

    if (milkI == true){
        ui->label_17->setText("Milk");
    } else {
        ui->label_17->setText(" ");
    }

    if (almondsI == true){
        ui->label_18->setText("Almonds");
    } else {
        ui->label_18->setText(" ");
    }

}


void RecipeConfirmation::on_pushButton_clicked()
{
    this->close();
}
