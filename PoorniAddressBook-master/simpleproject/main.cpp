#include <QApplication>
#include<QtWidgets>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget window;

    window.setFixedSize(300,200);
    QPushButton *welcomeButton=new QPushButton("Welcome to Qt",&window);
    QRadioButton *rbutton=new QRadioButton("yes","No");

    welcomeButton->setToolTip("Tool tip for welcome Buuton");
    welcomeButton->setGeometry(20,20,100,30);
    window.show();

    return app.exec();
}
