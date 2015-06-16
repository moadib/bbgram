#pragma once

class DateTimeFormatter : public QObject
{
    Q_OBJECT
public:
    Q_INVOKABLE QString format(const QDateTime& dateTime);
};
