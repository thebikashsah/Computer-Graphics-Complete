/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[128];
    char stringdata0[884];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 13), // "Mouse_Pressed"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 17), // "showMousePosition"
QT_MOC_LITERAL(44, 7), // "QPoint&"
QT_MOC_LITERAL(52, 3), // "pos"
QT_MOC_LITERAL(56, 20), // "on_show_axes_clicked"
QT_MOC_LITERAL(77, 21), // "on_set_point1_clicked"
QT_MOC_LITERAL(99, 21), // "on_set_point2_clicked"
QT_MOC_LITERAL(121, 24), // "on_setgridbutton_clicked"
QT_MOC_LITERAL(146, 22), // "on_resetButton_clicked"
QT_MOC_LITERAL(169, 18), // "on_DDALine_clicked"
QT_MOC_LITERAL(188, 7), // "DDAline"
QT_MOC_LITERAL(196, 1), // "r"
QT_MOC_LITERAL(198, 1), // "g"
QT_MOC_LITERAL(200, 1), // "b"
QT_MOC_LITERAL(202, 24), // "on_bresenhamLine_clicked"
QT_MOC_LITERAL(227, 25), // "on_midPointCircle_clicked"
QT_MOC_LITERAL(253, 26), // "on_bresenhamCircle_clicked"
QT_MOC_LITERAL(280, 18), // "on_ellipse_clicked"
QT_MOC_LITERAL(299, 20), // "on_floodfill_clicked"
QT_MOC_LITERAL(320, 13), // "floodfillutil"
QT_MOC_LITERAL(334, 1), // "x"
QT_MOC_LITERAL(336, 1), // "y"
QT_MOC_LITERAL(338, 23), // "on_boundaryfill_clicked"
QT_MOC_LITERAL(362, 16), // "boundaryfillutil"
QT_MOC_LITERAL(379, 4), // "QRgb"
QT_MOC_LITERAL(384, 1), // "q"
QT_MOC_LITERAL(386, 23), // "on_scanlinefill_clicked"
QT_MOC_LITERAL(410, 13), // "initEdgeTable"
QT_MOC_LITERAL(424, 16), // "storeEdgeInTable"
QT_MOC_LITERAL(441, 2), // "x1"
QT_MOC_LITERAL(444, 2), // "y1"
QT_MOC_LITERAL(447, 2), // "x2"
QT_MOC_LITERAL(450, 2), // "y2"
QT_MOC_LITERAL(453, 20), // "on_setvertex_clicked"
QT_MOC_LITERAL(474, 22), // "on_clearvertex_clicked"
QT_MOC_LITERAL(497, 9), // "poly_draw"
QT_MOC_LITERAL(507, 31), // "std::vector<std::pair<int,int>>"
QT_MOC_LITERAL(539, 5), // "vlist"
QT_MOC_LITERAL(545, 22), // "on_translation_clicked"
QT_MOC_LITERAL(568, 18), // "on_scaling_clicked"
QT_MOC_LITERAL(587, 19), // "on_rotation_clicked"
QT_MOC_LITERAL(607, 19), // "on_shearing_clicked"
QT_MOC_LITERAL(627, 21), // "on_reflection_clicked"
QT_MOC_LITERAL(649, 21), // "on_setcorner1_clicked"
QT_MOC_LITERAL(671, 21), // "on_setcorner2_clicked"
QT_MOC_LITERAL(693, 11), // "draw_Window"
QT_MOC_LITERAL(705, 11), // "computeCode"
QT_MOC_LITERAL(717, 2), // "xa"
QT_MOC_LITERAL(720, 2), // "ya"
QT_MOC_LITERAL(723, 19), // "cohenSutherlandClip"
QT_MOC_LITERAL(743, 23), // "on_lineclipping_clicked"
QT_MOC_LITERAL(767, 11), // "x_intersect"
QT_MOC_LITERAL(779, 2), // "x3"
QT_MOC_LITERAL(782, 2), // "y3"
QT_MOC_LITERAL(785, 2), // "x4"
QT_MOC_LITERAL(788, 2), // "y4"
QT_MOC_LITERAL(791, 11), // "y_intersect"
QT_MOC_LITERAL(803, 4), // "clip"
QT_MOC_LITERAL(808, 12), // "suthHodgClip"
QT_MOC_LITERAL(821, 26), // "on_polygonclipping_clicked"
QT_MOC_LITERAL(848, 23), // "on_reflection_2_clicked"
QT_MOC_LITERAL(872, 11) // "DDAlineUtil"

    },
    "MainWindow\0Mouse_Pressed\0\0showMousePosition\0"
    "QPoint&\0pos\0on_show_axes_clicked\0"
    "on_set_point1_clicked\0on_set_point2_clicked\0"
    "on_setgridbutton_clicked\0"
    "on_resetButton_clicked\0on_DDALine_clicked\0"
    "DDAline\0r\0g\0b\0on_bresenhamLine_clicked\0"
    "on_midPointCircle_clicked\0"
    "on_bresenhamCircle_clicked\0"
    "on_ellipse_clicked\0on_floodfill_clicked\0"
    "floodfillutil\0x\0y\0on_boundaryfill_clicked\0"
    "boundaryfillutil\0QRgb\0q\0on_scanlinefill_clicked\0"
    "initEdgeTable\0storeEdgeInTable\0x1\0y1\0"
    "x2\0y2\0on_setvertex_clicked\0"
    "on_clearvertex_clicked\0poly_draw\0"
    "std::vector<std::pair<int,int>>\0vlist\0"
    "on_translation_clicked\0on_scaling_clicked\0"
    "on_rotation_clicked\0on_shearing_clicked\0"
    "on_reflection_clicked\0on_setcorner1_clicked\0"
    "on_setcorner2_clicked\0draw_Window\0"
    "computeCode\0xa\0ya\0cohenSutherlandClip\0"
    "on_lineclipping_clicked\0x_intersect\0"
    "x3\0y3\0x4\0y4\0y_intersect\0clip\0suthHodgClip\0"
    "on_polygonclipping_clicked\0"
    "on_reflection_2_clicked\0DDAlineUtil"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  260,    2, 0x0a,    1 /* Public */,
       3,    1,  261,    2, 0x0a,    2 /* Public */,
       6,    0,  264,    2, 0x08,    4 /* Private */,
       7,    0,  265,    2, 0x08,    5 /* Private */,
       8,    0,  266,    2, 0x08,    6 /* Private */,
       9,    0,  267,    2, 0x08,    7 /* Private */,
      10,    0,  268,    2, 0x08,    8 /* Private */,
      11,    0,  269,    2, 0x08,    9 /* Private */,
      12,    3,  270,    2, 0x08,   10 /* Private */,
      16,    0,  277,    2, 0x08,   14 /* Private */,
      17,    0,  278,    2, 0x08,   15 /* Private */,
      18,    0,  279,    2, 0x08,   16 /* Private */,
      19,    0,  280,    2, 0x08,   17 /* Private */,
      20,    0,  281,    2, 0x08,   18 /* Private */,
      21,    5,  282,    2, 0x08,   19 /* Private */,
      24,    0,  293,    2, 0x08,   25 /* Private */,
      25,    6,  294,    2, 0x08,   26 /* Private */,
      28,    0,  307,    2, 0x08,   33 /* Private */,
      29,    0,  308,    2, 0x08,   34 /* Private */,
      30,    4,  309,    2, 0x08,   35 /* Private */,
      35,    0,  318,    2, 0x08,   40 /* Private */,
      36,    0,  319,    2, 0x08,   41 /* Private */,
      37,    4,  320,    2, 0x08,   42 /* Private */,
      40,    0,  329,    2, 0x08,   47 /* Private */,
      41,    0,  330,    2, 0x08,   48 /* Private */,
      42,    0,  331,    2, 0x08,   49 /* Private */,
      43,    0,  332,    2, 0x08,   50 /* Private */,
      44,    0,  333,    2, 0x08,   51 /* Private */,
      45,    0,  334,    2, 0x08,   52 /* Private */,
      46,    0,  335,    2, 0x08,   53 /* Private */,
      47,    0,  336,    2, 0x08,   54 /* Private */,
      48,    2,  337,    2, 0x08,   55 /* Private */,
      51,    4,  342,    2, 0x08,   58 /* Private */,
      52,    0,  351,    2, 0x08,   63 /* Private */,
      53,    8,  352,    2, 0x08,   64 /* Private */,
      58,    8,  369,    2, 0x08,   73 /* Private */,
      59,    4,  386,    2, 0x08,   82 /* Private */,
      60,    0,  395,    2, 0x08,   87 /* Private */,
      61,    0,  396,    2, 0x08,   88 /* Private */,
      62,    0,  397,    2, 0x08,   89 /* Private */,
      63,    3,  398,    2, 0x08,   90 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   22,   23,   13,   14,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 26, QMetaType::Int, QMetaType::Int, QMetaType::Int,   22,   23,   27,   13,   14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   31,   32,   33,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 38, QMetaType::Int, QMetaType::Int, QMetaType::Int,   39,   13,   14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int, QMetaType::Int,   49,   50,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   31,   32,   33,   34,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   31,   32,   33,   34,   54,   55,   56,   57,
    QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   31,   32,   33,   34,   54,   55,   56,   57,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   31,   32,   33,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,   15,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Mouse_Pressed(); break;
        case 1: _t->showMousePosition((*reinterpret_cast< std::add_pointer_t<QPoint&>>(_a[1]))); break;
        case 2: _t->on_show_axes_clicked(); break;
        case 3: _t->on_set_point1_clicked(); break;
        case 4: _t->on_set_point2_clicked(); break;
        case 5: _t->on_setgridbutton_clicked(); break;
        case 6: _t->on_resetButton_clicked(); break;
        case 7: _t->on_DDALine_clicked(); break;
        case 8: _t->DDAline((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 9: _t->on_bresenhamLine_clicked(); break;
        case 10: _t->on_midPointCircle_clicked(); break;
        case 11: _t->on_bresenhamCircle_clicked(); break;
        case 12: _t->on_ellipse_clicked(); break;
        case 13: _t->on_floodfill_clicked(); break;
        case 14: _t->floodfillutil((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5]))); break;
        case 15: _t->on_boundaryfill_clicked(); break;
        case 16: _t->boundaryfillutil((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QRgb>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[6]))); break;
        case 17: _t->on_scanlinefill_clicked(); break;
        case 18: _t->initEdgeTable(); break;
        case 19: _t->storeEdgeInTable((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 20: _t->on_setvertex_clicked(); break;
        case 21: _t->on_clearvertex_clicked(); break;
        case 22: _t->poly_draw((*reinterpret_cast< std::add_pointer_t<std::vector<std::pair<int,int>>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 23: _t->on_translation_clicked(); break;
        case 24: _t->on_scaling_clicked(); break;
        case 25: _t->on_rotation_clicked(); break;
        case 26: _t->on_shearing_clicked(); break;
        case 27: _t->on_reflection_clicked(); break;
        case 28: _t->on_setcorner1_clicked(); break;
        case 29: _t->on_setcorner2_clicked(); break;
        case 30: _t->draw_Window(); break;
        case 31: { int _r = _t->computeCode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 32: _t->cohenSutherlandClip((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 33: _t->on_lineclipping_clicked(); break;
        case 34: { int _r = _t->x_intersect((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[8])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 35: { int _r = _t->y_intersect((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[8])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 36: _t->clip((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 37: _t->suthHodgClip(); break;
        case 38: _t->on_polygonclipping_clicked(); break;
        case 39: _t->on_reflection_2_clicked(); break;
        case 40: _t->DDAlineUtil((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QRgb, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::vector<std::pair<int,int> >, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 41;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
