#ifndef RECIPECONFIRMATION_H
#define RECIPECONFIRMATION_H

#include <QDialog>
#include <QPushButton>

namespace Ui {
class RecipeConfirmation;
}

class RecipeConfirmation : public QDialog
{
    Q_OBJECT

public:
    explicit RecipeConfirmation(QWidget *parent = nullptr);
    RecipeConfirmation(QString recipeName, QString instructions,
                       bool vegetarian, int value,
                       bool gluten, bool peanuts,
                       bool fish, bool eggsA,
                       bool milkA, bool almondsA,
                       bool flour, bool sugar,
                       bool butter, bool eggsI,
                       bool milkI, bool almondsI);

    ~RecipeConfirmation();

private slots:
    void on_pushButton_clicked();

private:
    Ui::RecipeConfirmation *ui;
};

#endif // RECIPECONFIRMATION_H
