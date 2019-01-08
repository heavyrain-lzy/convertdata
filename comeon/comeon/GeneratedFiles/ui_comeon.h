/********************************************************************************
** Form generated from reading UI file 'comeon.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMEON_H
#define UI_COMEON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_comeonClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *comeonClass)
    {
        if (comeonClass->objectName().isEmpty())
            comeonClass->setObjectName(QStringLiteral("comeonClass"));
        comeonClass->resize(327, 267);
        centralWidget = new QWidget(comeonClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(120, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(120, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        horizontalLayout_2->addWidget(widget);

        comeonClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(comeonClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 327, 23));
        comeonClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(comeonClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        comeonClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(comeonClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        comeonClass->setStatusBar(statusBar);

        retranslateUi(comeonClass);
		QObject::connect(pushButton, SIGNAL(clicked()), comeonClass, SLOT(slot_convert()));
        QMetaObject::connectSlotsByName(comeonClass);
    } // setupUi

    void retranslateUi(QMainWindow *comeonClass)
    {
        comeonClass->setWindowTitle(QApplication::translate("comeonClass", "comeon", Q_NULLPTR));
        pushButton->setText(QApplication::translate("comeonClass", "Convert", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class comeonClass: public Ui_comeonClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMEON_H
