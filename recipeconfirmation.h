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
    RecipeConfirmation(QString recipeName, QString instructions, bool vegetarian);
    ~RecipeConfirmation();

private slots:
    void on_pushButton_clicked();

private:
    Ui::RecipeConfirmation *ui;
};

#endif // RECIPECONFIRMATION_H
