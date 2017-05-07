/********************************************************************************
** Form generated from reading UI file 'QtDatasetConverter.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDATASETCONVERTER_H
#define UI_QTDATASETCONVERTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtDatasetConverterClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *directoryEdit;
    QPushButton *openDirectoryButton;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *openDatasetButton;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QTabWidget *processingOptionsTab;
    QWidget *pictureResizerTab;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *pictureResizerCheck;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *pictureWidthEdit;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QLineEdit *pictureHeightEdit;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_5;
    QLabel *datasetNameLabel;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *aboutButton;
    QPushButton *startButton;

    void setupUi(QMainWindow *QtDatasetConverterClass)
    {
        if (QtDatasetConverterClass->objectName().isEmpty())
            QtDatasetConverterClass->setObjectName(QStringLiteral("QtDatasetConverterClass"));
        QtDatasetConverterClass->resize(1317, 751);
        centralWidget = new QWidget(QtDatasetConverterClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        directoryEdit = new QLineEdit(centralWidget);
        directoryEdit->setObjectName(QStringLiteral("directoryEdit"));

        horizontalLayout_5->addWidget(directoryEdit);

        openDirectoryButton = new QPushButton(centralWidget);
        openDirectoryButton->setObjectName(QStringLiteral("openDirectoryButton"));

        horizontalLayout_5->addWidget(openDirectoryButton);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        openDatasetButton = new QPushButton(centralWidget);
        openDatasetButton->setObjectName(QStringLiteral("openDatasetButton"));

        horizontalLayout_4->addWidget(openDatasetButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout_3);


        verticalLayout->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout_4->addWidget(label_3);

        processingOptionsTab = new QTabWidget(centralWidget);
        processingOptionsTab->setObjectName(QStringLiteral("processingOptionsTab"));
        pictureResizerTab = new QWidget();
        pictureResizerTab->setObjectName(QStringLiteral("pictureResizerTab"));
        verticalLayout_5 = new QVBoxLayout(pictureResizerTab);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pictureResizerCheck = new QCheckBox(pictureResizerTab);
        pictureResizerCheck->setObjectName(QStringLiteral("pictureResizerCheck"));

        horizontalLayout_2->addWidget(pictureResizerCheck);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_4 = new QLabel(pictureResizerTab);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_6->addWidget(label_4);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_5 = new QLabel(pictureResizerTab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(90, 0));

        horizontalLayout_7->addWidget(label_5);

        pictureWidthEdit = new QLineEdit(pictureResizerTab);
        pictureWidthEdit->setObjectName(QStringLiteral("pictureWidthEdit"));
        pictureWidthEdit->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_7->addWidget(pictureWidthEdit);

        label_6 = new QLabel(pictureResizerTab);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_7->addWidget(label_6);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_7 = new QLabel(pictureResizerTab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(90, 0));

        horizontalLayout_8->addWidget(label_7);

        pictureHeightEdit = new QLineEdit(pictureResizerTab);
        pictureHeightEdit->setObjectName(QStringLiteral("pictureHeightEdit"));
        pictureHeightEdit->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_8->addWidget(pictureHeightEdit);

        label_8 = new QLabel(pictureResizerTab);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_8->addWidget(label_8);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);


        verticalLayout_5->addLayout(horizontalLayout_8);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        processingOptionsTab->addTab(pictureResizerTab, QString());

        verticalLayout_4->addWidget(processingOptionsTab);


        verticalLayout->addLayout(verticalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);

        horizontalLayout_9->addWidget(label_9);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);

        datasetNameLabel = new QLabel(centralWidget);
        datasetNameLabel->setObjectName(QStringLiteral("datasetNameLabel"));

        horizontalLayout_9->addWidget(datasetNameLabel);


        verticalLayout_6->addLayout(horizontalLayout_9);


        verticalLayout->addLayout(verticalLayout_6);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        aboutButton = new QPushButton(centralWidget);
        aboutButton->setObjectName(QStringLiteral("aboutButton"));

        horizontalLayout_3->addWidget(aboutButton);

        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QStringLiteral("startButton"));

        horizontalLayout_3->addWidget(startButton);


        verticalLayout->addLayout(horizontalLayout_3);

        QtDatasetConverterClass->setCentralWidget(centralWidget);

        retranslateUi(QtDatasetConverterClass);
        QObject::connect(openDirectoryButton, SIGNAL(clicked()), QtDatasetConverterClass, SLOT(SelectDatasetDirectoryClick()));
        QObject::connect(startButton, SIGNAL(clicked()), QtDatasetConverterClass, SLOT(StartClick()));
        QObject::connect(openDatasetButton, SIGNAL(clicked()), QtDatasetConverterClass, SLOT(OpenDatasetClick()));
        QObject::connect(aboutButton, SIGNAL(clicked()), QtDatasetConverterClass, SLOT(AboutClick()));

        processingOptionsTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QtDatasetConverterClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtDatasetConverterClass)
    {
        QtDatasetConverterClass->setWindowTitle(QApplication::translate("QtDatasetConverterClass", "QtDatasetConverter", Q_NULLPTR));
        label->setText(QApplication::translate("QtDatasetConverterClass", "1. Open dataset", Q_NULLPTR));
        label_2->setText(QApplication::translate("QtDatasetConverterClass", "Select dataset root directory then click \"Open dataset\"", Q_NULLPTR));
        directoryEdit->setText(QApplication::translate("QtDatasetConverterClass", "Z:\\ML\\English-Handwritten\\Img", Q_NULLPTR));
        openDirectoryButton->setText(QApplication::translate("QtDatasetConverterClass", "....", Q_NULLPTR));
        openDatasetButton->setText(QApplication::translate("QtDatasetConverterClass", "Open dataset", Q_NULLPTR));
        label_3->setText(QApplication::translate("QtDatasetConverterClass", "2. Configure processing options", Q_NULLPTR));
        pictureResizerCheck->setText(QApplication::translate("QtDatasetConverterClass", "Enable picture resizer", Q_NULLPTR));
        label_4->setText(QApplication::translate("QtDatasetConverterClass", "Target image dimensions :", Q_NULLPTR));
        label_5->setText(QApplication::translate("QtDatasetConverterClass", "Width", Q_NULLPTR));
        label_6->setText(QApplication::translate("QtDatasetConverterClass", "pixels", Q_NULLPTR));
        label_7->setText(QApplication::translate("QtDatasetConverterClass", "Height", Q_NULLPTR));
        label_8->setText(QApplication::translate("QtDatasetConverterClass", "pixels", Q_NULLPTR));
        processingOptionsTab->setTabText(processingOptionsTab->indexOf(pictureResizerTab), QApplication::translate("QtDatasetConverterClass", "Picture resizer", Q_NULLPTR));
        label_9->setText(QApplication::translate("QtDatasetConverterClass", "Current dataset:", Q_NULLPTR));
        datasetNameLabel->setText(QApplication::translate("QtDatasetConverterClass", "No dataset loaded", Q_NULLPTR));
        aboutButton->setText(QApplication::translate("QtDatasetConverterClass", "About this program", Q_NULLPTR));
        startButton->setText(QApplication::translate("QtDatasetConverterClass", "Start", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtDatasetConverterClass: public Ui_QtDatasetConverterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDATASETCONVERTER_H
