#include "mainwindow.h"
#include <QApplication>
#include <QStyleFactory>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QPalette palette;
    // Set color roles for the dark theme
    QString style = R"(
            QMainWindow {
                    background-color:#1e1d23;
            }
            QGroupBox::title {
                color: #04b97f;
            }
            QDialog {
                background-color:#1e1d23;
            }
            QColorDialog {
                background-color:#1e1d23;
            }
            QTextEdit {
                background-color:#1e1d23;
                color: #a9b7c6;
            }
            QPlainTextEdit {
                selection-background-color:#007b50;
                background-color:#1e1d23;
                border-style: solid;
                border-top-color: transparent;
                border-right-color: transparent;
                border-left-color: transparent;
                border-bottom-color: transparent;
                border-width: 1px;
                color: #a9b7c6;
            }
            /*
            Neon Style Sheet for QT Applications (QpushButton)
            Author: Jaime A. Quiroga P.
            Company: GTRONICK
            Last updated: 24/10/2020, 15:42.
            Available at: https://github.com/GTRONICK/QSS/blob/master/NeonButtons.qss
            */
            QPushButton{
                border-style: solid;
                border-color: #050a0e;
                border-width: 1px;
                border-radius: 5px;
                color: #d3dae3;
                padding: 2px;
                background-color: #100E19;
            }
            QPushButton::default{
                border-style: solid;
                border-color: #050a0e;
                border-width: 1px;
                border-radius: 5px;
                color: #FFFFFF;
                padding: 2px;
                background-color: #151a1e;
            }
            QPushButton:hover{
                border-style: solid;
                border-top-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:1, stop:0 #C0DB50, stop:0.4 #C0DB50, stop:0.5 #100E19, stop:1 #100E19);
                border-bottom-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:1, stop:0 #100E19, stop:0.5 #100E19, stop:0.6 #C0DB50, stop:1 #C0DB50);
                border-left-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #C0DB50, stop:0.3 #C0DB50, stop:0.7 #100E19, stop:1 #100E19);
                border-right-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 #C0DB50, stop:0.3 #C0DB50, stop:0.7 #100E19, stop:1 #100E19);
                border-width: 2px;
                border-radius: 1px;
                color: #d3dae3;
                padding: 2px;
            }
            QPushButton:pressed{
                border-style: solid;
                border-top-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:1, stop:0 #d33af1, stop:0.4 #d33af1, stop:0.5 #100E19, stop:1 #100E19);
                border-bottom-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:1, stop:0 #100E19, stop:0.5 #100E19, stop:0.6 #d33af1, stop:1 #d33af1);
                border-left-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #d33af1, stop:0.3 #d33af1, stop:0.7 #100E19, stop:1 #100E19);
                border-right-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 #d33af1, stop:0.3 #d33af1, stop:0.7 #100E19, stop:1 #100E19);
                border-width: 2px;
                border-radius: 1px;
                color: #d3dae3;
                padding: 2px;
            }

            QPushButton:disabled{
                border-style: solid;
                border-top-color: transparent;
                border-right-color: transparent;
                border-left-color: transparent;
                border-bottom-color: #808086;
                border-bottom-width: 2px;
                border-style: solid;
                color: #808086;
                padding-bottom: 1px;
                background-color: #1e1d23;
            }


            QToolButton {
                border-style: solid;
                border-top-color: transparent;
                border-right-color: transparent;
                border-left-color: transparent;
                border-bottom-color: #04b97f;
                border-bottom-width: 1px;
                border-style: solid;
                color: #a9b7c6;
                padding: 2px;
                background-color: #1e1d23;
            }



            QLineEdit {
                border-width: 1px; border-radius: 4px;
                border-color: rgb(58, 58, 58);
                border-style: inset;
                padding: 0 8px;
                color: #a9b7c6;
                background:#1e1d23;
                selection-background-color:#007b50;
                selection-color: #FFFFFF;
            }
            QLabel {
                color: #a9b7c6;
            }
            QLCDNumber {
                color: #37e6b4;
            }
            QProgressBar {
                text-align: center;
                color: rgb(240, 240, 240);
                border-width: 1px;
                border-radius: 10px;
                border-color: rgb(58, 58, 58);
                border-style: inset;
                background-color:#1e1d23;
            }
            QProgressBar::chunk {
                background-color: #04b97f;
                border-radius: 5px;
            }
            QMenuBar {
                background-color: #1e1d23;
            }
            QMenuBar::item {
                color: #a9b7c6;
                spacing: 3px;
                padding: 1px 4px;
                background: #1e1d23;
            }

            QMenuBar::item:selected {
                background:#1e1d23;
                color: #FFFFFF;
            }
            QMenu::item:selected {
                border-style: solid;
                border-top-color: transparent;
                border-right-color: transparent;
                border-left-color: #04b97f;
                border-bottom-color: transparent;
                border-left-width: 2px;
                color: #FFFFFF;
                padding-left:15px;
                padding-top:4px;
                padding-bottom:4px;
                padding-right:7px;
                background-color: #1e1d23;
            }
            QMenu::item {
                border-style: solid;
                border-top-color: transparent;
                border-right-color: transparent;
                border-left-color: transparent;
                border-bottom-color: transparent;
                border-bottom-width: 1px;
                border-style: solid;
                color: #a9b7c6;
                padding-left:17px;
                padding-top:4px;
                padding-bottom:4px;
                padding-right:7px;
                background-color: #1e1d23;
            }
            QMenu{
                background-color:#1e1d23;
            }
            QTabWidget {
                color:rgb(0,0,0);
                background-color:#1e1d23;
            }
            QTabWidget::pane {
                    border-color: rgb(77,77,77);
                    background-color:#1e1d23;
                    border-style: solid;
                    border-width: 1px;
                    border-radius: 6px;
            }
            QTabBar::tab {
                border-style: solid;
                border-top-color: transparent;
                border-right-color: transparent;
                border-left-color: transparent;
                border-bottom-color: transparent;
                border-bottom-width: 1px;
                border-style: solid;
                color: #808086;
                padding: 3px;
                margin-left:3px;
                background-color: #1e1d23;
            }
            QTabBar::tab:selected, QTabBar::tab:last:selected, QTabBar::tab:hover {
                border-style: solid;
                border-top-color: transparent;
                border-right-color: transparent;
                border-left-color: transparent;
                border-bottom-color: #04b97f;
                border-bottom-width: 2px;
                border-style: solid;
                color: #FFFFFF;
                padding-left: 3px;
                padding-bottom: 2px;
                margin-left:3px;
                background-color: #1e1d23;
            }

            QCheckBox {
                color: #a9b7c6;
                padding: 2px;
            }
            QCheckBox:disabled {
                color: #808086;
                padding: 2px;
            }

            QCheckBox:hover {
                border-radius:4px;
                border-style:solid;
                padding-left: 1px;
                padding-right: 1px;
                padding-bottom: 1px;
                padding-top: 1px;
                border-width:1px;
                border-color: rgb(87, 97, 106);
                background-color:#1e1d23;
            }
            QCheckBox::indicator:checked {

                height: 10px;
                width: 10px;
                border-style:solid;
                border-width: 1px;
                border-color: #04b97f;
                color: #a9b7c6;
                background-color: #04b97f;
            }
            QCheckBox::indicator:unchecked {

                height: 10px;
                width: 10px;
                border-style:solid;
                border-width: 1px;
                border-color: #04b97f;
                color: #a9b7c6;
                background-color: transparent;
            }
            QRadioButton {
                color: #a9b7c6;
                background-color: #1e1d23;
                padding: 1px;
            }
            QRadioButton::indicator:checked {
                height: 10px;
                width: 10px;
                border-style:solid;
                border-radius:5px;
                border-width: 1px;
                border-color: #04b97f;
                color: #a9b7c6;
                background-color: #04b97f;
            }
            QRadioButton::indicator:!checked {
                height: 10px;
                width: 10px;
                border-style:solid;
                border-radius:5px;
                border-width: 1px;
                border-color: #04b97f;
                color: #a9b7c6;
                background-color: transparent;
            }
            QStatusBar {
                color:#027f7f;
            }
            QSpinBox {
                color: #a9b7c6;
                background-color: #1e1d23;
            }
            QDoubleSpinBox {
                color: #a9b7c6;
                background-color: #1e1d23;
            }
            QTimeEdit {
                color: #a9b7c6;
                background-color: #1e1d23;
            }
            QDateTimeEdit {
                color: #a9b7c6;
                background-color: #1e1d23;
            }
            QDateEdit {
                color: #a9b7c6;
                background-color: #1e1d23;
            }
            QComboBox {
                color: #a9b7c6;
                background: #1e1d23;
            }
            QComboBox:editable {
                background: #1e1d23;
                color: #a9b7c6;
                selection-background-color: #1e1d23;
            }
            QComboBox QAbstractItemView {
                color: #a9b7c6;
                background: #1e1d23;
                selection-color: #FFFFFF;
                selection-background-color: #1e1d23;
            }
            QComboBox:!editable:on, QComboBox::drop-down:editable:on {
                color: #a9b7c6;
                background: #1e1d23;
            }
            QFontComboBox {
                color: #a9b7c6;
                background-color: #1e1d23;
            }
            QToolBox {
                color: #a9b7c6;
                background-color: #1e1d23;
            }
            QToolBox::tab {
                color: #a9b7c6;
                background-color: #1e1d23;
            }
            QToolBox::tab:selected {
                color: #FFFFFF;
                background-color: #1e1d23;
            }
            QScrollArea {
                color: #FFFFFF;
                background-color: #1e1d23;
            }
            QSlider::groove:horizontal {
                height: 5px;
                background: #04b97f;
            }
            QSlider::groove:vertical {
                width: 5px;
                background: #04b97f;
            }
            QSlider::handle:horizontal {
                background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);
                border: 1px solid #5c5c5c;
                width: 14px;
                margin: -5px 0;
                border-radius: 7px;
            }
            QSlider::handle:vertical {
                background: qlineargradient(x1:1, y1:1, x2:0, y2:0, stop:0 #b4b4b4, stop:1 #8f8f8f);
                border: 1px solid #5c5c5c;
                height: 14px;
                margin: 0 -5px;
                border-radius: 7px;
            }
            QSlider::add-page:horizontal {
                background: white;
            }
            QSlider::add-page:vertical {
                background: white;
            }
            QSlider::sub-page:horizontal {
                background: #04b97f;
            }
            QSlider::sub-page:vertical {
                background: #04b97f;
                    QHeaderView::section {
                        background-color: #1e1d23; /* Background color for the header */
                        color: #a9b7c6; /* Text color */
                        padding: 4px;
                        border: 1px solid #04b97f; /* Border color */
                        border-radius: 4px;
                        font-size: 12px;
                        font-weight: bold;
                    }

                    QHeaderView::section:horizontal {
                        border-bottom: 2px solid #04b97f; /* Bottom border for horizontal headers */
                    }

                    QHeaderView::section:vertical {
                        border-right: 2px solid #04b97f; /* Right border for vertical headers */
                    }

                    QTableWidget {
                        background-color: #1e1d23; /* Background color for the table */
                        color: #a9b7c6; /* Text color */
                    }

                    QTableWidget::item {
                        border: 1px solid #04b97f; /* Border for each item */
                        padding: 2px;
                    }
            })";
    app.setStyleSheet(style);

    // Set background color for the main window
    palette.setColor(QPalette::Window, QColor("#1e1d23"));
    palette.setColor(QPalette::WindowText, QColor("#a9b7c6"));

    // Set background color for QTextEdit and QPlainTextEdit
    palette.setColor(QPalette::Base, QColor("#1e1d23"));
    palette.setColor(QPalette::Text, QColor("#a9b7c6"));

    // Set button colors (normal and default)
    palette.setColor(QPalette::Button, QColor("#100E19"));
    palette.setColor(QPalette::ButtonText, QColor("#d3dae3"));

    // Set color for hover (using QPalette::AlternateBase for hover-like effect)
    palette.setColor(QPalette::AlternateBase, QColor("#C0DB50")); // Hover effect color

    // Set color for selection in QTableWidget
    palette.setColor(QPalette::Highlight, QColor("#04b97f"));
    palette.setColor(QPalette::HighlightedText, QColor("white"));

    // Set header background color in QTableWidget
    palette.setColor(QPalette::ToolTipBase, QColor("#323232"));
    palette.setColor(QPalette::ToolTipText, QColor("#a9b7c6"));
    app.setPalette(palette);

    MainWindow m_MainWindow;
    m_MainWindow.show();
    return app.exec();
}



