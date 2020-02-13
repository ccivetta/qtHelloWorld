#include <QApplication>
#include <QDebug>

#include <qapplication.h>
#include <qpushbutton.h>


int main( int argc, char **argv )
{
    QApplication a( argc, argv );

    QPushButton hello( "Hello world!", 0 );
    hello.resize( 1000, 300 );

    hello.show();
    return a.exec();
}