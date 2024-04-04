#include <QApplication>
#include <Qlabel>

int main(int argc, char *argv[])
{

    QApplication app(argc,argv);
    QLabel *label = new QLabel("Hello");
    label->setWindowTitle("My First Application");
    label->resize(400,400);
    label->show();
    return app.exec();

}
