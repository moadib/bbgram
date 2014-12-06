#pragma once

#include <QMap>
#include <bb/cascades/Image>

#include "Chat.h"

class User : public Chat
{
    Q_OBJECT

    Q_PROPERTY(QString phone READ phone NOTIFY phoneChanged)
    Q_PROPERTY(QString firstName READ firstName NOTIFY nameChanged)
    Q_PROPERTY(QString lastName READ lastName NOTIFY nameChanged)
    Q_PROPERTY(QString name READ name NOTIFY nameChanged)
    Q_PROPERTY(bool online READ online NOTIFY statusChanged)
    Q_PROPERTY(QDateTime lastSeen READ lastSeen NOTIFY statusChanged)
    Q_PROPERTY(QString lastSeenFormatted READ lastSeenFormatted NOTIFY statusChanged)
    Q_PROPERTY(QString typingStatus READ typingStatus NOTIFY typingStatusChanged)
    Q_PROPERTY(QString sortingKey READ sortingKey CONSTANT)
    Q_PROPERTY(QString color READ color CONSTANT)
public:
    User(int id = 0);
    ~User();

    void deserialize(QByteArray& data);
    QByteArray serialize() const;

    int id() const;

    const QString& phone() const;
    void setPhone(const QString& phone);

    const QString& firstName() const;
    const QString& lastName() const;
    QString name() const;
    void setName(const QString& firstName, const QString& lastName);

    bool online() const;
    const QDateTime& lastSeen() const;
    QString lastSeenFormatted() const;
    QString status() const;
    void setStatus(bool online, const QDateTime& lastSeen);

    QString title() const;

    QString typingStatus() const;
    void setTypingStatus(tgl_typing_status status);

    void setPhoto(const QString &filename);
    QVariant photo() const;
    void setPhotoId(long long photoId);
    long long getPhotoId() const;

    const QString& sortingKey() const;
    QString color() const;
public slots:
    void resetTypingStatus();
signals:
    void phoneChanged();
    void nameChanged();

    void statusChanged();
    void typingStatusChanged();
protected:
    QString     m_phone;
    QString     m_firstName;
    QString     m_lastName;

    bool        m_online;
    QDateTime   m_lastSeen;

    tgl_typing_status   m_typingStatus;

    QString                 m_photoFilename;
    bb::cascades::Image     m_photo;
    long long               m_photoId;
};

Q_DECLARE_METATYPE(User*);
