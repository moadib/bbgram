#include "Peer.h"
#include "MessagesDataModel.h"
#include "../Storage.h"

using namespace bb::cascades;

Peer::Peer(int type, int id)
    : m_type(type), m_id(id), m_loadingHistory(false)
{
    m_messages = new MessagesDataModel(this);
    m_messages->setSortingKeys(QStringList() << "date" << "dateTime");
    m_messages->setSortedAscending(false);
    connect(m_messages, SIGNAL(itemAdded(QVariantList)), this, SIGNAL(messagesChanged()));
    connect(m_messages, SIGNAL(itemRemoved(QVariantList)), this, SIGNAL(messagesChanged()));
}

Peer::~Peer()
{
}

int Peer::type() const
{
    return m_type;
}

int Peer::id() const
{
    return m_id;
}

void Peer::deserialize(QByteArray& data)
{
    QDataStream stream(&data, QIODevice::ReadOnly);

    QVariantMap map;
    stream >> map;

    load(map);
}

QByteArray Peer::serialize() const
{
    QVariantMap map;
    save(map);

    QByteArray data;
    QDataStream stream(&data, QIODevice::WriteOnly);
    stream << map;
    return data;
}

bb::cascades::DataModel* Peer::messages() const
{
    return m_messages;
}

QString Peer::title() const
{
    return QString();
}

QString Peer::status() const
{
    return QString();
}

QVariant Peer::photo() const
{
    return QVariant();
}

Message* Peer::lastMessage() const
{
    if (m_messages->size() > 0)
    {
        QVariant data = m_messages->data(QVariantList() << 0 << 0);
        return (Message*)data.value<QObject*>();
    }
    return 0;
}

QDateTime Peer::lastMessageDate() const
{
    Message* last = lastMessage();
    return last ? last->dateTime() : QDateTime();
}

void Peer::addMessage(Message* message)
{
    m_messages->insert(message);
}

void Peer::deleteMessage(Message* message)
{
    m_messages->remove(message);
}

void Peer::save(QVariantMap& map) const
{
    QList<QVariant> list;
    for (int i = 0; i < m_lapseMarkers.size(); i++)
        list.append(m_lapseMarkers[i]);
    map.insert("lapseMarkers", list);
}

void Peer::load(const QVariantMap& map)
{
    QVariantMap::const_iterator it;
    it = map.find("lapseMarkers");

    if (it != map.end())
    {
        m_lapseMarkers.clear();
        QList<QVariant> list = it.value().toList();
        for (int i = 0; i < list.size(); i++)
            m_lapseMarkers.append(list[i].toInt());
    }
}

void Peer::loadAdditionalHistory()
{
    if (!m_loadingHistory && m_lapseMarkers.length() > 0)
        Storage::instance()->loadAdditionalHistory(this);
}