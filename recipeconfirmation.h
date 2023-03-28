#ifndef RECIPECONFIRMATION_H
#define RECIPECONFIRMATION_H

#include <QDialog>

namespace Ui {
class RecipeConfirmation;
}

class RecipeConfirmation : public QDialog
{
    Q_OBJECT

public:
    explicit RecipeConfirmation(QWidget *parent = nullptr);
    RecipeConfirmation(QString recipeName);
    ~RecipeConfirmation();


private:
    Ui::RecipeConfirmation *ui;
};

#endif // RECIPECONFIRMATION_H
