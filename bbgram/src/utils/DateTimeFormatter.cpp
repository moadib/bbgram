#include "DateTimeFormatter.h"
#include <QDate>
#include <QLocale>


QString DateTimeFormatter::format(const QDateTime& dateTime)
{
    QLocale locale(QLocale::English);
    QString str;
    QDate date = dateTime.date();
    QDateTime currentDate = QDateTime::currentDateTime();
    if (dateTime.secsTo(currentDate) < 12*60*60)
        str = locale.toString(dateTime, "hh:mm");
    else
    {
        if (dateTime.daysTo(currentDate) < 7)
            str = locale.toString(dateTime, "ddd");
        else
            str = locale.toString(dateTime, "MMM dd");
    }
    return str;
}
