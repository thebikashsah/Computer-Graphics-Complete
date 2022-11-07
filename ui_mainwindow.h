/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <my_label.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    my_label *frame;
    QLabel *mouse_movement;
    QLabel *label_3;
    QLabel *mouse_pressed;
    QLabel *label_5;
    QFrame *x_axis;
    QFrame *y_axis;
    QCheckBox *show_axes;
    QPushButton *resetButton;
    QSpinBox *gridspinbox;
    QPushButton *setgridbutton;
    QGroupBox *tranformation;
    QLabel *label_15;
    QSpinBox *anglespinbox;
    QPushButton *shearing;
    QLabel *label_17;
    QPushButton *translation;
    QLabel *label_13;
    QSpinBox *xtranslate;
    QLabel *label_16;
    QLabel *label_11;
    QPushButton *scaling;
    QLabel *label_14;
    QLabel *label_12;
    QSpinBox *ytranslate;
    QPushButton *rotation;
    QDoubleSpinBox *xscale;
    QDoubleSpinBox *yscale;
    QDoubleSpinBox *xshear;
    QDoubleSpinBox *yshear;
    QGroupBox *filling;
    QPushButton *scanlinefill;
    QPushButton *floodfill;
    QPushButton *boundaryfill;
    QLabel *label_10;
    QPushButton *setvertex;
    QPushButton *clearvertex;
    QGroupBox *drawellipse;
    QPushButton *ellipse;
    QSpinBox *r2spinbox;
    QSpinBox *r1spinbox;
    QLabel *label_7;
    QLabel *label_6;
    QPushButton *bresenhamLine_2;
    QPushButton *bresenhamLine_3;
    QLabel *label_18;
    QLabel *label_19;
    QGroupBox *drawcircle;
    QPushButton *bresenhamCircle;
    QSpinBox *radiusspinbox;
    QPushButton *midPointCircle;
    QLabel *label_2;
    QPushButton *bresenhamCircle_2;
    QLabel *label_4;
    QLabel *label_9;
    QGroupBox *drawline;
    QPushButton *bresenhamLine;
    QPushButton *set_point2;
    QPushButton *set_point1;
    QPushButton *DDALine;
    QLabel *label;
    QLabel *label_8;
    QGroupBox *clipping;
    QPushButton *lineclipping;
    QPushButton *setcorner1;
    QPushButton *setcorner2;
    QPushButton *polygonclipping;
    QPushButton *reflection;
    QPushButton *reflection_2;
    QPushButton *reflection_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1257, 678);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        frame = new my_label(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 601, 600));
        frame->setMouseTracking(true);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        frame->setFrameShape(QFrame::Box);
        frame->setLineWidth(1);
        mouse_movement = new QLabel(centralWidget);
        mouse_movement->setObjectName(QString::fromUtf8("mouse_movement"));
        mouse_movement->setGeometry(QRect(610, 20, 111, 31));
        mouse_movement->setFrameShape(QFrame::Panel);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(600, 0, 131, 20));
        mouse_pressed = new QLabel(centralWidget);
        mouse_pressed->setObjectName(QString::fromUtf8("mouse_pressed"));
        mouse_pressed->setGeometry(QRect(850, 20, 111, 31));
        mouse_pressed->setFrameShape(QFrame::Panel);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(860, 0, 101, 20));
        x_axis = new QFrame(centralWidget);
        x_axis->setObjectName(QString::fromUtf8("x_axis"));
        x_axis->setGeometry(QRect(0, 225, 600, 1));
        x_axis->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 255);"));
        x_axis->setFrameShape(QFrame::HLine);
        x_axis->setFrameShadow(QFrame::Sunken);
        y_axis = new QFrame(centralWidget);
        y_axis->setObjectName(QString::fromUtf8("y_axis"));
        y_axis->setGeometry(QRect(225, 0, 1, 600));
        y_axis->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(85, 255, 255);"));
        y_axis->setFrameShape(QFrame::VLine);
        y_axis->setFrameShadow(QFrame::Sunken);
        show_axes = new QCheckBox(centralWidget);
        show_axes->setObjectName(QString::fromUtf8("show_axes"));
        show_axes->setGeometry(QRect(740, 20, 91, 21));
        resetButton = new QPushButton(centralWidget);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setGeometry(QRect(1120, 510, 111, 41));
        resetButton->setStyleSheet(QString::fromUtf8(""));
        gridspinbox = new QSpinBox(centralWidget);
        gridspinbox->setObjectName(QString::fromUtf8("gridspinbox"));
        gridspinbox->setGeometry(QRect(980, 480, 41, 22));
        gridspinbox->setMinimum(1);
        setgridbutton = new QPushButton(centralWidget);
        setgridbutton->setObjectName(QString::fromUtf8("setgridbutton"));
        setgridbutton->setGeometry(QRect(980, 510, 111, 41));
        tranformation = new QGroupBox(centralWidget);
        tranformation->setObjectName(QString::fromUtf8("tranformation"));
        tranformation->setGeometry(QRect(600, 420, 361, 191));
        label_15 = new QLabel(tranformation);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(240, 150, 16, 16));
        anglespinbox = new QSpinBox(tranformation);
        anglespinbox->setObjectName(QString::fromUtf8("anglespinbox"));
        anglespinbox->setGeometry(QRect(190, 120, 51, 22));
        anglespinbox->setMinimum(-999);
        anglespinbox->setValue(0);
        shearing = new QPushButton(tranformation);
        shearing->setObjectName(QString::fromUtf8("shearing"));
        shearing->setGeometry(QRect(20, 150, 75, 31));
        label_17 = new QLabel(tranformation);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(130, 150, 16, 16));
        translation = new QPushButton(tranformation);
        translation->setObjectName(QString::fromUtf8("translation"));
        translation->setGeometry(QRect(20, 30, 75, 31));
        label_13 = new QLabel(tranformation);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(240, 70, 16, 16));
        xtranslate = new QSpinBox(tranformation);
        xtranslate->setObjectName(QString::fromUtf8("xtranslate"));
        xtranslate->setGeometry(QRect(150, 30, 51, 22));
        xtranslate->setMinimum(-999);
        xtranslate->setMaximum(999);
        label_16 = new QLabel(tranformation);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(130, 70, 16, 16));
        label_11 = new QLabel(tranformation);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(130, 30, 16, 16));
        scaling = new QPushButton(tranformation);
        scaling->setObjectName(QString::fromUtf8("scaling"));
        scaling->setGeometry(QRect(20, 70, 75, 31));
        label_14 = new QLabel(tranformation);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(130, 120, 41, 16));
        label_12 = new QLabel(tranformation);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(240, 30, 16, 16));
        ytranslate = new QSpinBox(tranformation);
        ytranslate->setObjectName(QString::fromUtf8("ytranslate"));
        ytranslate->setGeometry(QRect(260, 30, 51, 22));
        ytranslate->setMinimum(-999);
        ytranslate->setMaximum(999);
        rotation = new QPushButton(tranformation);
        rotation->setObjectName(QString::fromUtf8("rotation"));
        rotation->setGeometry(QRect(20, 110, 75, 31));
        xscale = new QDoubleSpinBox(tranformation);
        xscale->setObjectName(QString::fromUtf8("xscale"));
        xscale->setGeometry(QRect(150, 70, 62, 22));
        yscale = new QDoubleSpinBox(tranformation);
        yscale->setObjectName(QString::fromUtf8("yscale"));
        yscale->setGeometry(QRect(260, 70, 62, 22));
        xshear = new QDoubleSpinBox(tranformation);
        xshear->setObjectName(QString::fromUtf8("xshear"));
        xshear->setGeometry(QRect(150, 150, 62, 22));
        yshear = new QDoubleSpinBox(tranformation);
        yshear->setObjectName(QString::fromUtf8("yshear"));
        yshear->setGeometry(QRect(260, 150, 62, 22));
        filling = new QGroupBox(centralWidget);
        filling->setObjectName(QString::fromUtf8("filling"));
        filling->setGeometry(QRect(600, 290, 361, 131));
        scanlinefill = new QPushButton(filling);
        scanlinefill->setObjectName(QString::fromUtf8("scanlinefill"));
        scanlinefill->setGeometry(QRect(230, 92, 111, 31));
        floodfill = new QPushButton(filling);
        floodfill->setObjectName(QString::fromUtf8("floodfill"));
        floodfill->setGeometry(QRect(230, 30, 111, 31));
        boundaryfill = new QPushButton(filling);
        boundaryfill->setObjectName(QString::fromUtf8("boundaryfill"));
        boundaryfill->setGeometry(QRect(230, 62, 111, 31));
        label_10 = new QLabel(filling);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 30, 101, 16));
        setvertex = new QPushButton(filling);
        setvertex->setObjectName(QString::fromUtf8("setvertex"));
        setvertex->setGeometry(QRect(20, 60, 91, 31));
        clearvertex = new QPushButton(filling);
        clearvertex->setObjectName(QString::fromUtf8("clearvertex"));
        clearvertex->setGeometry(QRect(20, 92, 91, 31));
        drawellipse = new QGroupBox(centralWidget);
        drawellipse->setObjectName(QString::fromUtf8("drawellipse"));
        drawellipse->setGeometry(QRect(970, 10, 271, 161));
        ellipse = new QPushButton(drawellipse);
        ellipse->setObjectName(QString::fromUtf8("ellipse"));
        ellipse->setGeometry(QRect(10, 100, 101, 41));
        r2spinbox = new QSpinBox(drawellipse);
        r2spinbox->setObjectName(QString::fromUtf8("r2spinbox"));
        r2spinbox->setGeometry(QRect(40, 60, 51, 22));
        r1spinbox = new QSpinBox(drawellipse);
        r1spinbox->setObjectName(QString::fromUtf8("r1spinbox"));
        r1spinbox->setGeometry(QRect(40, 30, 51, 22));
        label_7 = new QLabel(drawellipse);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 60, 46, 20));
        label_6 = new QLabel(drawellipse);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 30, 46, 20));
        bresenhamLine_2 = new QPushButton(drawellipse);
        bresenhamLine_2->setObjectName(QString::fromUtf8("bresenhamLine_2"));
        bresenhamLine_2->setGeometry(QRect(140, 30, 111, 31));
        bresenhamLine_3 = new QPushButton(drawellipse);
        bresenhamLine_3->setObjectName(QString::fromUtf8("bresenhamLine_3"));
        bresenhamLine_3->setGeometry(QRect(140, 70, 111, 31));
        label_18 = new QLabel(drawellipse);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(160, 130, 81, 21));
        label_18->setFrameShape(QFrame::Box);
        label_18->setFrameShadow(QFrame::Plain);
        label_19 = new QLabel(drawellipse);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(160, 100, 101, 20));
        drawcircle = new QGroupBox(centralWidget);
        drawcircle->setObjectName(QString::fromUtf8("drawcircle"));
        drawcircle->setGeometry(QRect(600, 180, 361, 111));
        bresenhamCircle = new QPushButton(drawcircle);
        bresenhamCircle->setObjectName(QString::fromUtf8("bresenhamCircle"));
        bresenhamCircle->setGeometry(QRect(120, 50, 81, 31));
        radiusspinbox = new QSpinBox(drawcircle);
        radiusspinbox->setObjectName(QString::fromUtf8("radiusspinbox"));
        radiusspinbox->setGeometry(QRect(10, 50, 71, 22));
        midPointCircle = new QPushButton(drawcircle);
        midPointCircle->setObjectName(QString::fromUtf8("midPointCircle"));
        midPointCircle->setGeometry(QRect(120, 20, 81, 31));
        label_2 = new QLabel(drawcircle);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 61, 16));
        bresenhamCircle_2 = new QPushButton(drawcircle);
        bresenhamCircle_2->setObjectName(QString::fromUtf8("bresenhamCircle_2"));
        bresenhamCircle_2->setGeometry(QRect(120, 80, 81, 31));
        label_4 = new QLabel(drawcircle);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(240, 50, 81, 21));
        label_4->setFrameShape(QFrame::Box);
        label_4->setFrameShadow(QFrame::Plain);
        label_9 = new QLabel(drawcircle);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(240, 30, 101, 20));
        drawline = new QGroupBox(centralWidget);
        drawline->setObjectName(QString::fromUtf8("drawline"));
        drawline->setGeometry(QRect(600, 90, 361, 91));
        bresenhamLine = new QPushButton(drawline);
        bresenhamLine->setObjectName(QString::fromUtf8("bresenhamLine"));
        bresenhamLine->setGeometry(QRect(140, 20, 111, 31));
        set_point2 = new QPushButton(drawline);
        set_point2->setObjectName(QString::fromUtf8("set_point2"));
        set_point2->setGeometry(QRect(20, 52, 101, 31));
        set_point1 = new QPushButton(drawline);
        set_point1->setObjectName(QString::fromUtf8("set_point1"));
        set_point1->setGeometry(QRect(20, 22, 101, 31));
        DDALine = new QPushButton(drawline);
        DDALine->setObjectName(QString::fromUtf8("DDALine"));
        DDALine->setGeometry(QRect(140, 50, 111, 31));
        label = new QLabel(drawline);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 50, 81, 21));
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Plain);
        label_8 = new QLabel(drawline);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(270, 20, 101, 20));
        clipping = new QGroupBox(centralWidget);
        clipping->setObjectName(QString::fromUtf8("clipping"));
        clipping->setGeometry(QRect(980, 190, 251, 121));
        lineclipping = new QPushButton(clipping);
        lineclipping->setObjectName(QString::fromUtf8("lineclipping"));
        lineclipping->setGeometry(QRect(20, 82, 91, 31));
        setcorner1 = new QPushButton(clipping);
        setcorner1->setObjectName(QString::fromUtf8("setcorner1"));
        setcorner1->setGeometry(QRect(20, 32, 91, 41));
        setcorner2 = new QPushButton(clipping);
        setcorner2->setObjectName(QString::fromUtf8("setcorner2"));
        setcorner2->setGeometry(QRect(130, 32, 101, 41));
        polygonclipping = new QPushButton(clipping);
        polygonclipping->setObjectName(QString::fromUtf8("polygonclipping"));
        polygonclipping->setGeometry(QRect(130, 82, 101, 31));
        reflection = new QPushButton(centralWidget);
        reflection->setObjectName(QString::fromUtf8("reflection"));
        reflection->setGeometry(QRect(990, 330, 75, 31));
        reflection_2 = new QPushButton(centralWidget);
        reflection_2->setObjectName(QString::fromUtf8("reflection_2"));
        reflection_2->setGeometry(QRect(990, 370, 141, 31));
        reflection_3 = new QPushButton(centralWidget);
        reflection_3->setObjectName(QString::fromUtf8("reflection_3"));
        reflection_3->setGeometry(QRect(990, 400, 141, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1257, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        frame->setText(QString());
        mouse_movement->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "    Mouse Movement", nullptr));
        mouse_pressed->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Mouse Pressed", nullptr));
        show_axes->setText(QCoreApplication::translate("MainWindow", "Show Axes", nullptr));
        resetButton->setText(QCoreApplication::translate("MainWindow", "RESET", nullptr));
        setgridbutton->setText(QCoreApplication::translate("MainWindow", "Set Grid", nullptr));
        tranformation->setTitle(QCoreApplication::translate("MainWindow", "Transformation", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "y:", nullptr));
        shearing->setText(QCoreApplication::translate("MainWindow", "Shearing", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "x:", nullptr));
        translation->setText(QCoreApplication::translate("MainWindow", "Translation", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "y:", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "x:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "x:", nullptr));
        scaling->setText(QCoreApplication::translate("MainWindow", "Scaling", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "angle: ", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "y:", nullptr));
        rotation->setText(QCoreApplication::translate("MainWindow", "Rotation", nullptr));
        filling->setTitle(QCoreApplication::translate("MainWindow", "Polygon", nullptr));
        scanlinefill->setText(QCoreApplication::translate("MainWindow", "Scanline Fill", nullptr));
        floodfill->setText(QCoreApplication::translate("MainWindow", "Flood Fill", nullptr));
        boundaryfill->setText(QCoreApplication::translate("MainWindow", "Boundary Fill", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Polygon Drawing", nullptr));
        setvertex->setText(QCoreApplication::translate("MainWindow", "Set vertex", nullptr));
        clearvertex->setText(QCoreApplication::translate("MainWindow", "Clear vertex", nullptr));
        drawellipse->setTitle(QCoreApplication::translate("MainWindow", "Ellpse", nullptr));
        ellipse->setText(QCoreApplication::translate("MainWindow", "Draw Ellipse", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "R2 :", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "R1 :", nullptr));
        bresenhamLine_2->setText(QCoreApplication::translate("MainWindow", "Midpoint", nullptr));
        bresenhamLine_3->setText(QCoreApplication::translate("MainWindow", "Polar", nullptr));
        label_18->setText(QString());
        label_19->setText(QCoreApplication::translate("MainWindow", "Time is ms:", nullptr));
        drawcircle->setTitle(QCoreApplication::translate("MainWindow", "Circle", nullptr));
        bresenhamCircle->setText(QCoreApplication::translate("MainWindow", "Bresenham", nullptr));
        midPointCircle->setText(QCoreApplication::translate("MainWindow", "Mid-Point", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", " Radius", nullptr));
        bresenhamCircle_2->setText(QCoreApplication::translate("MainWindow", "Polar", nullptr));
        label_4->setText(QString());
        label_9->setText(QCoreApplication::translate("MainWindow", "Time is ms:", nullptr));
        drawline->setTitle(QCoreApplication::translate("MainWindow", "Line", nullptr));
        bresenhamLine->setText(QCoreApplication::translate("MainWindow", "Bresenham", nullptr));
        set_point2->setText(QCoreApplication::translate("MainWindow", "Second Point", nullptr));
        set_point1->setText(QCoreApplication::translate("MainWindow", "First Point", nullptr));
        DDALine->setText(QCoreApplication::translate("MainWindow", "DDA", nullptr));
        label->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "Time is ms:", nullptr));
        clipping->setTitle(QCoreApplication::translate("MainWindow", "Clipping", nullptr));
        lineclipping->setText(QCoreApplication::translate("MainWindow", "LINE CLIP", nullptr));
        setcorner1->setText(QCoreApplication::translate("MainWindow", "Set Corner 1", nullptr));
        setcorner2->setText(QCoreApplication::translate("MainWindow", "Set Corner 2", nullptr));
        polygonclipping->setText(QCoreApplication::translate("MainWindow", "POLY CLIP", nullptr));
        reflection->setText(QCoreApplication::translate("MainWindow", "Reflection", nullptr));
        reflection_2->setText(QCoreApplication::translate("MainWindow", "Reflection on X-axis", nullptr));
        reflection_3->setText(QCoreApplication::translate("MainWindow", "Reflection on Y-axis", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
