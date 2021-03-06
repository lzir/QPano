/********************************************************************************
** Form generated from reading UI file 'QPano3MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QPANO3MAINWINDOW_H
#define UI_QPANO3MAINWINDOW_H

#include <GwLabelPanel.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QPano3MainWindow
{
public:
    QAction *actionNewProject;
    QAction *actionOpenProject;
    QAction *actionSaveProject;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionOption;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionHelp;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_4;
    QGridLayout *gridLayout_4;
    QTabWidget *tabWidgetSrcMain;
    QWidget *tabPageAssist;
    QGridLayout *gridLayout;
    QGroupBox *groupBoxCameraParam;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonStitchImg;
    QPushButton *pushButtonInputImg;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButtonOutputImg;
    QPushButton *pushButtonAdvancedOpts;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *toolButtonSpinN;
    QToolButton *toolButtonSpinP;
    QSpacerItem *verticalSpacer_4;
    GwLabelPanel *labelImagePanel;
    QWidget *tabPageSrcImg;
    QVBoxLayout *verticalLayout;
    QLabel *labelSrcTabpage;
    QFrame *lineSrcTabpage;
    QTableWidget *tableWidgetSrcImage;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButton_6;
    QToolButton *toolButton_8;
    QToolButton *toolButton_7;
    QFrame *line_3;
    QToolButton *toolButton_5;
    QToolButton *toolButton_9;
    QFrame *line_4;
    QToolButton *toolButton_4;
    QToolButton *toolButton_10;
    QSpacerItem *horizontalSpacer_5;
    QWidget *tabPageEditImg;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidgetEditImage;
    QLabel *label;
    QFrame *line;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_2;
    QCheckBox *checkBox;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_5;
    QPushButton *pushButton;
    QLabel *label_9;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_8;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLabel *label_19;
    QLabel *label_20;
    QWidget *tabPageSvaePano;
    QGridLayout *gridLayout_3;
    QCheckBox *checkBox_2;
    QLabel *label_15;
    QLabel *label_13;
    QLabel *label_17;
    QFrame *line_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_10;
    QLabel *label_18;
    QPushButton *pushButton_7;
    QLabel *label_11;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QCheckBox *checkBox_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_5;
    QLabel *label_14;
    QLabel *label_12;
    QComboBox *comboBox_3;
    QComboBox *comboBox_2;
    QPushButton *pushButton_4;
    QLabel *label_16;
    QMenuBar *menubar;
    QMenu *menu_F;
    QMenu *menu_E;
    QMenu *menu_V;
    QMenu *menu_I;
    QMenu *menu_T;
    QMenu *menu_P;
    QMenu *menu_H;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *QPano3MainWindow)
    {
        if (QPano3MainWindow->objectName().isEmpty())
            QPano3MainWindow->setObjectName(QStringLiteral("QPano3MainWindow"));
        QPano3MainWindow->resize(842, 526);
        actionNewProject = new QAction(QPano3MainWindow);
        actionNewProject->setObjectName(QStringLiteral("actionNewProject"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/regular-icons/Resources/fontawesome-free-5.3.1-desktop/svgs/regular/file.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionNewProject->setIcon(icon);
        actionOpenProject = new QAction(QPano3MainWindow);
        actionOpenProject->setObjectName(QStringLiteral("actionOpenProject"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/regular-icons/Resources/fontawesome-free-5.3.1-desktop/svgs/regular/folder-open.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionOpenProject->setIcon(icon1);
        actionSaveProject = new QAction(QPano3MainWindow);
        actionSaveProject->setObjectName(QStringLiteral("actionSaveProject"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/regular-icons/Resources/fontawesome-free-5.3.1-desktop/svgs/regular/save.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionSaveProject->setIcon(icon2);
        actionUndo = new QAction(QPano3MainWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/solid-icons/Resources/fontawesome-free-5.3.1-desktop/svgs/solid/undo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QStringLiteral(":/solid-icons/Resources/fontawesome-free-5.3.1-desktop/svgs/solid/reply.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionUndo->setIcon(icon3);
        actionRedo = new QAction(QPano3MainWindow);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/solid-icons/Resources/fontawesome-free-5.3.1-desktop/svgs/solid/redo.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionRedo->setIcon(icon4);
        actionOption = new QAction(QPano3MainWindow);
        actionOption->setObjectName(QStringLiteral("actionOption"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/solid-icons/Resources/fontawesome-free-5.3.1-desktop/svgs/solid/wrench.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionOption->setIcon(icon5);
        actionZoomIn = new QAction(QPano3MainWindow);
        actionZoomIn->setObjectName(QStringLiteral("actionZoomIn"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/solid-icons/Resources/fontawesome-free-5.3.1-desktop/svgs/solid/search-minus.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionZoomIn->setIcon(icon6);
        actionZoomOut = new QAction(QPano3MainWindow);
        actionZoomOut->setObjectName(QStringLiteral("actionZoomOut"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/solid-icons/Resources/fontawesome-free-5.3.1-desktop/svgs/solid/search-plus.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionZoomOut->setIcon(icon7);
        actionHelp = new QAction(QPano3MainWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/solid-icons/Resources/fontawesome-free-5.3.1-desktop/svgs/solid/book.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionHelp->setIcon(icon8);
        centralwidget = new QWidget(QPano3MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout_4 = new QHBoxLayout(centralwidget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        tabWidgetSrcMain = new QTabWidget(centralwidget);
        tabWidgetSrcMain->setObjectName(QStringLiteral("tabWidgetSrcMain"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(7);
        sizePolicy.setHeightForWidth(tabWidgetSrcMain->sizePolicy().hasHeightForWidth());
        tabWidgetSrcMain->setSizePolicy(sizePolicy);
        tabPageAssist = new QWidget();
        tabPageAssist->setObjectName(QStringLiteral("tabPageAssist"));
        gridLayout = new QGridLayout(tabPageAssist);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBoxCameraParam = new QGroupBox(tabPageAssist);
        groupBoxCameraParam->setObjectName(QStringLiteral("groupBoxCameraParam"));

        gridLayout->addWidget(groupBoxCameraParam, 5, 0, 1, 4);

        horizontalSpacer_2 = new QSpacerItem(585, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        pushButtonStitchImg = new QPushButton(tabPageAssist);
        pushButtonStitchImg->setObjectName(QStringLiteral("pushButtonStitchImg"));
        pushButtonStitchImg->setMinimumSize(QSize(120, 25));
        pushButtonStitchImg->setMaximumSize(QSize(120, 25));

        gridLayout->addWidget(pushButtonStitchImg, 6, 0, 1, 1, Qt::AlignLeft|Qt::AlignVCenter);

        pushButtonInputImg = new QPushButton(tabPageAssist);
        pushButtonInputImg->setObjectName(QStringLiteral("pushButtonInputImg"));
        pushButtonInputImg->setMinimumSize(QSize(120, 25));
        pushButtonInputImg->setMaximumSize(QSize(120, 25));

        gridLayout->addWidget(pushButtonInputImg, 0, 0, 1, 1, Qt::AlignLeft|Qt::AlignVCenter);

        horizontalSpacer = new QSpacerItem(672, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 7, 1, 1, 3);

        verticalSpacer_2 = new QSpacerItem(798, 16777215, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 8, 0, 1, 4);

        pushButtonOutputImg = new QPushButton(tabPageAssist);
        pushButtonOutputImg->setObjectName(QStringLiteral("pushButtonOutputImg"));
        pushButtonOutputImg->setMinimumSize(QSize(120, 25));
        pushButtonOutputImg->setMaximumSize(QSize(120, 25));

        gridLayout->addWidget(pushButtonOutputImg, 7, 0, 1, 1, Qt::AlignLeft|Qt::AlignVCenter);

        pushButtonAdvancedOpts = new QPushButton(tabPageAssist);
        pushButtonAdvancedOpts->setObjectName(QStringLiteral("pushButtonAdvancedOpts"));

        gridLayout->addWidget(pushButtonAdvancedOpts, 0, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(672, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 6, 1, 1, 3);

        toolButtonSpinN = new QToolButton(tabPageAssist);
        toolButtonSpinN->setObjectName(QStringLiteral("toolButtonSpinN"));

        gridLayout->addWidget(toolButtonSpinN, 2, 3, 1, 1);

        toolButtonSpinP = new QToolButton(tabPageAssist);
        toolButtonSpinP->setObjectName(QStringLiteral("toolButtonSpinP"));
        toolButtonSpinP->setAutoFillBackground(true);
        toolButtonSpinP->setCheckable(false);
        toolButtonSpinP->setAutoRepeat(false);
        toolButtonSpinP->setAutoRaise(false);

        gridLayout->addWidget(toolButtonSpinP, 1, 3, 1, 1);

        verticalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 4, 3, 1, 1);

        labelImagePanel = new GwLabelPanel(tabPageAssist);
        labelImagePanel->setObjectName(QStringLiteral("labelImagePanel"));
        labelImagePanel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelImagePanel, 1, 0, 4, 2);

        tabWidgetSrcMain->addTab(tabPageAssist, QString());
        tabPageSrcImg = new QWidget();
        tabPageSrcImg->setObjectName(QStringLiteral("tabPageSrcImg"));
        tabPageSrcImg->setEnabled(true);
        verticalLayout = new QVBoxLayout(tabPageSrcImg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelSrcTabpage = new QLabel(tabPageSrcImg);
        labelSrcTabpage->setObjectName(QStringLiteral("labelSrcTabpage"));

        verticalLayout->addWidget(labelSrcTabpage);

        lineSrcTabpage = new QFrame(tabPageSrcImg);
        lineSrcTabpage->setObjectName(QStringLiteral("lineSrcTabpage"));
        lineSrcTabpage->setFrameShape(QFrame::HLine);
        lineSrcTabpage->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(lineSrcTabpage);

        tableWidgetSrcImage = new QTableWidget(tabPageSrcImg);
        tableWidgetSrcImage->setObjectName(QStringLiteral("tableWidgetSrcImage"));

        verticalLayout->addWidget(tableWidgetSrcImage);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        toolButton_6 = new QToolButton(tabPageSrcImg);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));

        horizontalLayout_2->addWidget(toolButton_6);

        toolButton_8 = new QToolButton(tabPageSrcImg);
        toolButton_8->setObjectName(QStringLiteral("toolButton_8"));

        horizontalLayout_2->addWidget(toolButton_8);

        toolButton_7 = new QToolButton(tabPageSrcImg);
        toolButton_7->setObjectName(QStringLiteral("toolButton_7"));

        horizontalLayout_2->addWidget(toolButton_7);

        line_3 = new QFrame(tabPageSrcImg);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_3);

        toolButton_5 = new QToolButton(tabPageSrcImg);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));

        horizontalLayout_2->addWidget(toolButton_5);

        toolButton_9 = new QToolButton(tabPageSrcImg);
        toolButton_9->setObjectName(QStringLiteral("toolButton_9"));

        horizontalLayout_2->addWidget(toolButton_9);

        line_4 = new QFrame(tabPageSrcImg);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_4);

        toolButton_4 = new QToolButton(tabPageSrcImg);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));

        horizontalLayout_2->addWidget(toolButton_4);

        toolButton_10 = new QToolButton(tabPageSrcImg);
        toolButton_10->setObjectName(QStringLiteral("toolButton_10"));

        horizontalLayout_2->addWidget(toolButton_10);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        tabWidgetSrcMain->addTab(tabPageSrcImg, QString());
        tabPageEditImg = new QWidget();
        tabPageEditImg->setObjectName(QStringLiteral("tabPageEditImg"));
        gridLayout_2 = new QGridLayout(tabPageEditImg);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tabWidgetEditImage = new QTabWidget(tabPageEditImg);
        tabWidgetEditImage->setObjectName(QStringLiteral("tabWidgetEditImage"));
        tabWidgetEditImage->setAutoFillBackground(true);

        gridLayout_2->addWidget(tabWidgetEditImage, 2, 0, 14, 1);

        label = new QLabel(tabPageEditImg);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        line = new QFrame(tabPageEditImg);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 1, 0, 1, 3);

        label_6 = new QLabel(tabPageEditImg);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 2, 1, 1, 1);

        label_3 = new QLabel(tabPageEditImg);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 6, 1, 1, 1);

        label_2 = new QLabel(tabPageEditImg);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 5, 1, 1, 1);

        checkBox = new QCheckBox(tabPageEditImg);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout_2->addWidget(checkBox, 11, 1, 1, 2);

        verticalSpacer_3 = new QSpacerItem(122, 119, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 13, 1, 1, 2);

        label_5 = new QLabel(tabPageEditImg);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 4, 1, 1, 1);

        pushButton = new QPushButton(tabPageEditImg);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_2->addWidget(pushButton, 12, 1, 1, 2);

        label_9 = new QLabel(tabPageEditImg);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 14, 1, 1, 1);

        comboBox = new QComboBox(tabPageEditImg);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_2->addWidget(comboBox, 14, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        toolButton = new QToolButton(tabPageEditImg);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        horizontalLayout->addWidget(toolButton);

        toolButton_2 = new QToolButton(tabPageEditImg);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));

        horizontalLayout->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(tabPageEditImg);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));

        horizontalLayout->addWidget(toolButton_3);


        gridLayout_2->addLayout(horizontalLayout, 15, 1, 1, 2);

        label_7 = new QLabel(tabPageEditImg);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 10, 1, 1, 1);

        label_4 = new QLabel(tabPageEditImg);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 8, 1, 1, 1);

        label_8 = new QLabel(tabPageEditImg);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 9, 1, 1, 1);

        lineEdit_4 = new QLineEdit(tabPageEditImg);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setMaximumSize(QSize(80, 16777215));

        gridLayout_2->addWidget(lineEdit_4, 4, 2, 1, 1);

        lineEdit_5 = new QLineEdit(tabPageEditImg);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setMaximumSize(QSize(80, 16777215));

        gridLayout_2->addWidget(lineEdit_5, 5, 2, 1, 1);

        lineEdit_6 = new QLineEdit(tabPageEditImg);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setMaximumSize(QSize(80, 16777215));

        gridLayout_2->addWidget(lineEdit_6, 6, 2, 1, 1);

        lineEdit_7 = new QLineEdit(tabPageEditImg);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setMaximumSize(QSize(80, 16777215));

        gridLayout_2->addWidget(lineEdit_7, 8, 2, 1, 1);

        label_19 = new QLabel(tabPageEditImg);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_2->addWidget(label_19, 9, 2, 1, 1);

        label_20 = new QLabel(tabPageEditImg);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_2->addWidget(label_20, 10, 2, 1, 1);

        tabWidgetSrcMain->addTab(tabPageEditImg, QString());
        tabPageSvaePano = new QWidget();
        tabPageSvaePano->setObjectName(QStringLiteral("tabPageSvaePano"));
        gridLayout_3 = new QGridLayout(tabPageSvaePano);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        checkBox_2 = new QCheckBox(tabPageSvaePano);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        gridLayout_3->addWidget(checkBox_2, 2, 4, 1, 1);

        label_15 = new QLabel(tabPageSvaePano);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_3->addWidget(label_15, 4, 0, 1, 1);

        label_13 = new QLabel(tabPageSvaePano);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_3->addWidget(label_13, 3, 0, 1, 1);

        label_17 = new QLabel(tabPageSvaePano);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_3->addWidget(label_17, 5, 0, 1, 1);

        line_2 = new QFrame(tabPageSvaePano);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_2, 1, 0, 1, 17);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 8, 0, 1, 17);

        label_10 = new QLabel(tabPageSvaePano);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_3->addWidget(label_10, 0, 0, 1, 17);

        label_18 = new QLabel(tabPageSvaePano);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_3->addWidget(label_18, 6, 0, 1, 1);

        pushButton_7 = new QPushButton(tabPageSvaePano);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        gridLayout_3->addWidget(pushButton_7, 7, 0, 1, 1);

        label_11 = new QLabel(tabPageSvaePano);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_3->addWidget(label_11, 2, 0, 1, 1);

        lineEdit_2 = new QLineEdit(tabPageSvaePano);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(50, 0));
        lineEdit_2->setMaximumSize(QSize(50, 16777215));

        gridLayout_3->addWidget(lineEdit_2, 3, 1, 1, 1);

        lineEdit_3 = new QLineEdit(tabPageSvaePano);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout_3->addWidget(lineEdit_3, 6, 1, 1, 13);

        checkBox_3 = new QCheckBox(tabPageSvaePano);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        gridLayout_3->addWidget(checkBox_3, 6, 14, 1, 1);

        pushButton_6 = new QPushButton(tabPageSvaePano);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout_3->addWidget(pushButton_6, 6, 16, 1, 1);

        pushButton_3 = new QPushButton(tabPageSvaePano);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout_3->addWidget(pushButton_3, 3, 5, 1, 1);

        pushButton_2 = new QPushButton(tabPageSvaePano);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_3->addWidget(pushButton_2, 3, 4, 1, 1);

        lineEdit = new QLineEdit(tabPageSvaePano);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(50, 0));
        lineEdit->setMaximumSize(QSize(50, 16777215));

        gridLayout_3->addWidget(lineEdit, 2, 1, 1, 1);

        pushButton_5 = new QPushButton(tabPageSvaePano);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout_3->addWidget(pushButton_5, 6, 15, 1, 1);

        label_14 = new QLabel(tabPageSvaePano);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_3->addWidget(label_14, 3, 2, 1, 1);

        label_12 = new QLabel(tabPageSvaePano);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_3->addWidget(label_12, 2, 2, 1, 1);

        comboBox_3 = new QComboBox(tabPageSvaePano);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setMinimumSize(QSize(0, 0));
        comboBox_3->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_3->addWidget(comboBox_3, 5, 1, 1, 3);

        comboBox_2 = new QComboBox(tabPageSvaePano);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(0, 0));
        comboBox_2->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_3->addWidget(comboBox_2, 4, 1, 1, 3);

        pushButton_4 = new QPushButton(tabPageSvaePano);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout_3->addWidget(pushButton_4, 4, 4, 1, 1);

        label_16 = new QLabel(tabPageSvaePano);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_3->addWidget(label_16, 4, 5, 1, 1);

        tabWidgetSrcMain->addTab(tabPageSvaePano, QString());

        gridLayout_4->addWidget(tabWidgetSrcMain, 0, 1, 1, 1);


        horizontalLayout_4->addLayout(gridLayout_4);

        QPano3MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(QPano3MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 842, 23));
        menu_F = new QMenu(menubar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        menu_E = new QMenu(menubar);
        menu_E->setObjectName(QStringLiteral("menu_E"));
        menu_V = new QMenu(menubar);
        menu_V->setObjectName(QStringLiteral("menu_V"));
        menu_I = new QMenu(menubar);
        menu_I->setObjectName(QStringLiteral("menu_I"));
        menu_T = new QMenu(menubar);
        menu_T->setObjectName(QStringLiteral("menu_T"));
        menu_P = new QMenu(menubar);
        menu_P->setObjectName(QStringLiteral("menu_P"));
        menu_H = new QMenu(menubar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        QPano3MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(QPano3MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        QPano3MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(QPano3MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setEnabled(true);
        toolBar->setMovable(false);
        toolBar->setIconSize(QSize(32, 26));
        toolBar->setFloatable(false);
        QPano3MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu_F->menuAction());
        menubar->addAction(menu_E->menuAction());
        menubar->addAction(menu_V->menuAction());
        menubar->addAction(menu_I->menuAction());
        menubar->addAction(menu_T->menuAction());
        menubar->addAction(menu_P->menuAction());
        menubar->addAction(menu_H->menuAction());
        toolBar->addAction(actionNewProject);
        toolBar->addAction(actionOpenProject);
        toolBar->addAction(actionSaveProject);
        toolBar->addSeparator();
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);
        toolBar->addSeparator();
        toolBar->addAction(actionOption);
        toolBar->addSeparator();
        toolBar->addAction(actionZoomIn);
        toolBar->addAction(actionZoomOut);
        toolBar->addAction(actionHelp);
        toolBar->addSeparator();

        retranslateUi(QPano3MainWindow);
        QObject::connect(pushButtonInputImg, SIGNAL(clicked(bool)), QPano3MainWindow, SLOT(setInputFile()));

        tabWidgetSrcMain->setCurrentIndex(0);
        tabWidgetEditImage->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(QPano3MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QPano3MainWindow)
    {
        QPano3MainWindow->setWindowTitle(QApplication::translate("QPano3MainWindow", "MainWindow", nullptr));
        actionNewProject->setText(QApplication::translate("QPano3MainWindow", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
#ifndef QT_NO_TOOLTIP
        actionNewProject->setToolTip(QApplication::translate("QPano3MainWindow", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
#endif // QT_NO_TOOLTIP
        actionOpenProject->setText(QApplication::translate("QPano3MainWindow", "\346\211\223\345\274\200\351\241\271\347\233\256", nullptr));
#ifndef QT_NO_TOOLTIP
        actionOpenProject->setToolTip(QApplication::translate("QPano3MainWindow", "\346\211\223\345\274\200\351\241\271\347\233\256", nullptr));
#endif // QT_NO_TOOLTIP
        actionSaveProject->setText(QApplication::translate("QPano3MainWindow", "\344\277\235\345\255\230\351\241\271\347\233\256", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSaveProject->setToolTip(QApplication::translate("QPano3MainWindow", "\344\277\235\345\255\230\351\241\271\347\233\256", nullptr));
#endif // QT_NO_TOOLTIP
        actionUndo->setText(QApplication::translate("QPano3MainWindow", "\346\222\244\351\224\200", nullptr));
#ifndef QT_NO_TOOLTIP
        actionUndo->setToolTip(QApplication::translate("QPano3MainWindow", "\346\222\244\351\224\200", nullptr));
#endif // QT_NO_TOOLTIP
        actionRedo->setText(QApplication::translate("QPano3MainWindow", "\351\207\215\345\201\232", nullptr));
#ifndef QT_NO_TOOLTIP
        actionRedo->setToolTip(QApplication::translate("QPano3MainWindow", "\351\207\215\345\201\232", nullptr));
#endif // QT_NO_TOOLTIP
        actionOption->setText(QApplication::translate("QPano3MainWindow", "\350\256\276\347\275\256", nullptr));
#ifndef QT_NO_TOOLTIP
        actionOption->setToolTip(QApplication::translate("QPano3MainWindow", "\350\256\276\347\275\256", nullptr));
#endif // QT_NO_TOOLTIP
        actionZoomIn->setText(QApplication::translate("QPano3MainWindow", "\347\274\251\345\260\217", nullptr));
#ifndef QT_NO_TOOLTIP
        actionZoomIn->setToolTip(QApplication::translate("QPano3MainWindow", "\347\274\251\345\260\217", nullptr));
#endif // QT_NO_TOOLTIP
        actionZoomOut->setText(QApplication::translate("QPano3MainWindow", "\346\224\276\345\244\247", nullptr));
#ifndef QT_NO_TOOLTIP
        actionZoomOut->setToolTip(QApplication::translate("QPano3MainWindow", "\346\224\276\345\244\247", nullptr));
#endif // QT_NO_TOOLTIP
        actionHelp->setText(QApplication::translate("QPano3MainWindow", "\345\270\256\345\212\251", nullptr));
#ifndef QT_NO_TOOLTIP
        actionHelp->setToolTip(QApplication::translate("QPano3MainWindow", "\345\270\256\345\212\251", nullptr));
#endif // QT_NO_TOOLTIP
        groupBoxCameraParam->setTitle(QApplication::translate("QPano3MainWindow", "\347\233\270\346\234\272/\351\225\234\345\244\264\345\217\202\346\225\260", nullptr));
        pushButtonStitchImg->setText(QApplication::translate("QPano3MainWindow", "2.\345\257\271\345\207\206\345\233\276\345\203\217...", nullptr));
        pushButtonInputImg->setText(QApplication::translate("QPano3MainWindow", "1.\345\212\240\350\275\275\345\233\276\345\203\217...", nullptr));
        pushButtonOutputImg->setText(QApplication::translate("QPano3MainWindow", "3.\345\210\233\345\273\272\345\205\250\346\231\257\345\233\276...", nullptr));
        pushButtonAdvancedOpts->setText(QApplication::translate("QPano3MainWindow", "\351\253\230\347\272\247 >>", nullptr));
        toolButtonSpinN->setText(QApplication::translate("QPano3MainWindow", "...", nullptr));
        toolButtonSpinP->setText(QApplication::translate("QPano3MainWindow", "...", nullptr));
        labelImagePanel->setText(QApplication::translate("QPano3MainWindow", "\346\213\226\346\213\275\345\233\276\347\211\207\345\210\260\346\255\244", nullptr));
        tabWidgetSrcMain->setTabText(tabWidgetSrcMain->indexOf(tabPageAssist), QApplication::translate("QPano3MainWindow", "\351\241\271\347\233\256\345\212\251\346\211\213", nullptr));
        labelSrcTabpage->setText(QApplication::translate("QPano3MainWindow", "\347\202\271\345\207\273\344\273\245\344\270\213\346\267\273\345\212\240\346\214\211\351\222\256\344\270\272\346\202\250\347\232\204\345\205\250\346\231\257\345\233\276\351\200\211\346\213\251\345\233\276\345\203\217\343\200\202\346\202\250\344\271\237\350\203\275\345\244\237\344\273\216\350\265\204\346\272\220\347\256\241\347\220\206\345\231\250\346\213\226\345\212\250\346\226\207\344\273\266\345\210\260\350\257\245\347\252\227\345\217\243\343\200\202", nullptr));
        toolButton_6->setText(QApplication::translate("QPano3MainWindow", "...", nullptr));
        toolButton_8->setText(QApplication::translate("QPano3MainWindow", "...", nullptr));
        toolButton_7->setText(QApplication::translate("QPano3MainWindow", "...", nullptr));
        toolButton_5->setText(QApplication::translate("QPano3MainWindow", "...", nullptr));
        toolButton_9->setText(QApplication::translate("QPano3MainWindow", "...", nullptr));
        toolButton_4->setText(QApplication::translate("QPano3MainWindow", "...", nullptr));
        toolButton_10->setText(QApplication::translate("QPano3MainWindow", "...", nullptr));
        tabWidgetSrcMain->setTabText(tabWidgetSrcMain->indexOf(tabPageSrcImg), QApplication::translate("QPano3MainWindow", "\346\272\220\345\233\276\345\203\217", nullptr));
        label->setText(QApplication::translate("QPano3MainWindow", "\345\246\202\346\236\234\346\202\250\347\232\204\345\233\276\345\203\217\351\234\200\350\246\201\345\211\252\350\243\201\357\274\214\345\217\257\344\273\245\345\234\250\344\270\213\351\235\242\346\223\215\344\275\234\343\200\202\345\211\252\350\243\201\344\270\215\344\274\232\346\224\271\345\217\230\345\216\237\345\247\213\345\233\276\345\203\217\346\226\207\344\273\266\343\200\202", nullptr));
        label_6->setText(QApplication::translate("QPano3MainWindow", "\345\211\252\350\243\201", nullptr));
        label_3->setText(QApplication::translate("QPano3MainWindow", "\344\270\212\357\274\232", nullptr));
        label_2->setText(QApplication::translate("QPano3MainWindow", "\345\217\263\357\274\232", nullptr));
        checkBox->setText(QApplication::translate("QPano3MainWindow", "\344\270\252\345\210\253\345\211\252\350\243\201", nullptr));
        label_5->setText(QApplication::translate("QPano3MainWindow", "\345\267\246\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("QPano3MainWindow", "\344\270\215\345\211\252\350\243\201", nullptr));
        label_9->setText(QApplication::translate("QPano3MainWindow", "\347\274\251\346\224\276\357\274\232", nullptr));
        toolButton->setText(QApplication::translate("QPano3MainWindow", "...", nullptr));
        toolButton_2->setText(QApplication::translate("QPano3MainWindow", "...", nullptr));
        toolButton_3->setText(QApplication::translate("QPano3MainWindow", "...", nullptr));
        label_7->setText(QApplication::translate("QPano3MainWindow", "\351\253\230\345\272\246\357\274\232", nullptr));
        label_4->setText(QApplication::translate("QPano3MainWindow", "\344\270\213\357\274\232", nullptr));
        label_8->setText(QApplication::translate("QPano3MainWindow", "\345\256\275\345\272\246\357\274\232", nullptr));
        label_19->setText(QApplication::translate("QPano3MainWindow", "3460", nullptr));
        label_20->setText(QApplication::translate("QPano3MainWindow", "3460", nullptr));
        tabWidgetSrcMain->setTabText(tabWidgetSrcMain->indexOf(tabPageEditImg), QApplication::translate("QPano3MainWindow", "\345\211\252\350\243\201", nullptr));
        checkBox_2->setText(QApplication::translate("QPano3MainWindow", "\344\277\235\346\214\201\346\250\252\347\272\265\346\257\224", nullptr));
        label_15->setText(QApplication::translate("QPano3MainWindow", "\346\226\207\344\273\266\346\240\274\345\274\217\357\274\232", nullptr));
        label_13->setText(QApplication::translate("QPano3MainWindow", "\351\253\230\345\272\246\357\274\232", nullptr));
        label_17->setText(QApplication::translate("QPano3MainWindow", "\345\233\276\345\261\202\357\274\232", nullptr));
        label_10->setText(QApplication::translate("QPano3MainWindow", "\347\216\260\345\234\250\346\202\250\345\217\257\344\273\245\345\234\250\350\277\231\351\207\214\350\256\276\347\275\256\351\234\200\350\246\201\346\213\274\346\216\245\347\232\204\345\217\202\346\225\260\343\200\202", nullptr));
        label_18->setText(QApplication::translate("QPano3MainWindow", "\350\276\223\345\207\272\346\226\207\344\273\266\357\274\232", nullptr));
        pushButton_7->setText(QApplication::translate("QPano3MainWindow", "\345\210\233\345\273\272\345\205\250\346\231\257\345\233\276", nullptr));
        label_11->setText(QApplication::translate("QPano3MainWindow", "\345\256\275\345\272\246\357\274\232", nullptr));
        checkBox_3->setText(QApplication::translate("QPano3MainWindow", "\344\275\277\347\224\250\351\273\230\350\256\244", nullptr));
        pushButton_6->setText(QApplication::translate("QPano3MainWindow", "\346\237\245\347\234\213...", nullptr));
        pushButton_3->setText(QApplication::translate("QPano3MainWindow", "\345\205\203\346\225\260\346\215\256", nullptr));
        pushButton_2->setText(QApplication::translate("QPano3MainWindow", "\350\256\276\347\275\256\344\274\230\345\214\226\345\260\272\345\257\270", nullptr));
        pushButton_5->setText(QApplication::translate("QPano3MainWindow", "\346\265\217\350\247\210...", nullptr));
        label_14->setText(QApplication::translate("QPano3MainWindow", "\345\203\217\347\264\240", nullptr));
        label_12->setText(QApplication::translate("QPano3MainWindow", "\345\203\217\347\264\240", nullptr));
        pushButton_4->setText(QApplication::translate("QPano3MainWindow", "\350\256\276\347\275\256", nullptr));
        label_16->setText(QApplication::translate("QPano3MainWindow", "\345\223\201\350\264\250\357\274\232100%", nullptr));
        tabWidgetSrcMain->setTabText(tabWidgetSrcMain->indexOf(tabPageSvaePano), QApplication::translate("QPano3MainWindow", "\345\210\233\345\273\272\345\205\250\346\231\257\345\233\276", nullptr));
        menu_F->setTitle(QApplication::translate("QPano3MainWindow", "\346\226\207\344\273\266(F)", nullptr));
        menu_E->setTitle(QApplication::translate("QPano3MainWindow", "\347\274\226\350\276\221(E)", nullptr));
        menu_V->setTitle(QApplication::translate("QPano3MainWindow", "\350\247\206\345\233\276(V)", nullptr));
        menu_I->setTitle(QApplication::translate("QPano3MainWindow", "\345\233\276\345\203\217(I)", nullptr));
        menu_T->setTitle(QApplication::translate("QPano3MainWindow", "\345\267\245\345\205\267(T)", nullptr));
        menu_P->setTitle(QApplication::translate("QPano3MainWindow", "\351\241\271\347\233\256(P)", nullptr));
        menu_H->setTitle(QApplication::translate("QPano3MainWindow", "\345\270\256\345\212\251(H)", nullptr));
        toolBar->setWindowTitle(QApplication::translate("QPano3MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QPano3MainWindow: public Ui_QPano3MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPANO3MAINWINDOW_H
