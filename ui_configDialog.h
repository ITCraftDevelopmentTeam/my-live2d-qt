/********************************************************************************
** Form generated from reading UI file 'configDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGDIALOG_H
#define UI_CONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *labelWidgetSize;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *widgetHeight;
    QLabel *labelX;
    QSpinBox *widgetWidth;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(670, 232);
        gridLayoutWidget = new QWidget(Dialog);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 671, 172));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMargin(10);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox = new QComboBox(gridLayoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        labelWidgetSize = new QLabel(gridLayoutWidget);
        labelWidgetSize->setObjectName(QString::fromUtf8("labelWidgetSize"));
        labelWidgetSize->setMargin(10);

        gridLayout->addWidget(labelWidgetSize, 2, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMargin(10);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(30, 16777215));
        QFont font;
        font.setPointSize(8);
        pushButton->setFont(font);

        horizontalLayout->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        widgetHeight = new QSpinBox(gridLayoutWidget);
        widgetHeight->setObjectName(QString::fromUtf8("widgetHeight"));
        widgetHeight->setMinimum(200);
        widgetHeight->setMaximum(10000);

        horizontalLayout_2->addWidget(widgetHeight);

        labelX = new QLabel(gridLayoutWidget);
        labelX->setObjectName(QString::fromUtf8("labelX"));
        labelX->setMaximumSize(QSize(20, 20));
        labelX->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labelX);

        widgetWidth = new QSpinBox(gridLayoutWidget);
        widgetWidth->setObjectName(QString::fromUtf8("widgetWidth"));
        widgetWidth->setMinimum(200);
        widgetWidth->setMaximum(10000);

        horizontalLayout_2->addWidget(widgetWidth);


        gridLayout->addLayout(horizontalLayout_2, 2, 1, 1, 1);

        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(540, 190, 106, 35));
        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(410, 190, 106, 35));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Settings", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Model: ", nullptr));
        labelWidgetSize->setText(QCoreApplication::translate("Dialog", "Widget Size:", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "ResourcesDir: ", nullptr));
        label_3->setText(QString());
        pushButton->setText(QCoreApplication::translate("Dialog", "...", nullptr));
        labelX->setText(QCoreApplication::translate("Dialog", "x", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "OK", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGDIALOG_H
