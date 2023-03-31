#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QTextEdit>
#include <QMessageBox>
#include <QMenu>
#include <QMainWindow>
#include <QPushButton>
#include <QRadioButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // Virtual Function
    virtual void on_pushButton_clicked();

    void on_radioButton_clicked();

    void on_pushButton_2_clicked();

    void on_radioButton_2_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void on_checkBox_1_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_3_stateChanged(int arg1);

    void on_checkBox_4_stateChanged(int arg1);

    void on_checkBox_5_stateChanged(int arg1);

    void on_checkBox_6_stateChanged(int arg1);

    void on_checkBox_7_stateChanged(int arg1);

    void on_checkBox_8_stateChanged(int arg1);

    void on_checkBox_9_stateChanged(int arg1);

    void on_checkBox_10_stateChanged(int arg1);

    void on_checkBox_11_stateChanged(int arg1);

    void on_checkBox_12_stateChanged(int arg1);

    void on_actiongithub_triggered();

    void on_actionLinkedIn_triggered();

    void on_actionYoutube_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
