#include "quicktag.h"

#include <QFile>
#include <QTextStream>
#include <QMap>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Load the config file
    QMap<QString, QString> config;
    QFile file("/home/shiv/QuickTag/config.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        while (!in.atEnd())
        {
            QString line = in.readLine();
            QStringList parts = line.split("=");
            if (parts.size() == 2)
                config[parts[0].trimmed()] = parts[1].trimmed();
        }
    }
    /*
    else
    {
        qDebug() << "Could not open config file";
        // handle error here
    }
    */

    QFile css(config.value("stylesheet", ":/css/stylesheetShivang.css"));
    css.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(css.readAll());

    qApp->setStyleSheet(styleSheet);

    QuickTag w;
    w.show();
    return a.exec();
}
