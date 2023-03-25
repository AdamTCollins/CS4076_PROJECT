#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "CS4076_PROJECT_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    MainWindow w;
    w.show();
    return a.exec();
}


/*

QMenu ✓
QCheckBox ✓
QRadioButton ✓
QSlider ✓
QGridLayout ✓
QBoxLayout ?

Virtual functions
template classes
Multiple inheritance
namespaces
Programmer defined exceptions
Unions
Operator overloading
Abstract classes
Copy constructors (deep , shallow copy)
Bit structures
Advanced pre-processor directives ✓
C++ Object Construction Sequence
Initializer List
C++ References
Pointers
Inheritance
Destructors
Memory management
Header files (inclusion guards) ✓
Arrays and pointers
Friendship
Global variables
Private, Public, Protected

*/
