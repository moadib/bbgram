#include "ChatList.h"

using namespace bb::cascades;

ChatList::ChatList(QListDataModel<Chat*>* dialogs)
    : m_filter(3), m_dialogs(dialogs)
{
    m_model = new GroupDataModel(this);
    m_model->setGrouping(ItemGrouping::None);
    m_model->setSortedAscending(true);

    connect(m_dialogs, SIGNAL(itemAdded(QVariantList)), SLOT(updateContent()));
    //connect(m_telegramContacts, SIGNAL(itemMoved(QVariantList, QVariantList)), SLOT(updateContent()));
    connect(m_dialogs, SIGNAL(itemRemoved(QVariantList)), SLOT(updateContent()));
    connect(m_dialogs, SIGNAL(itemUpdated(QVariantList)), SLOT(updateContent()));
    connect(this, SIGNAL(filterChanged()), SLOT(updateContent()));

    updateContent();
}

ChatList::~ChatList()
{
}

GroupDataModel* ChatList::model() const
{
    return m_model;
}

int ChatList::filter() const
{
    return m_filter;
}

void ChatList::setFilter(int filter, const QString& text)
{
    m_filter = filter;
    m_searchText = text;
    emit filterChanged();
}

void ChatList::updateContent()
{
    m_model->clear();
    if (m_filter & 1)
    {
        for (int i = 0; i < m_dialogs->size(); i++)
        {
            //Chat* chat = m_dialogs->value(i);
            m_model->insert(m_dialogs->value(i));
        }
    }

    if ((m_filter & 2) && m_model->size() && m_searchText.size())
    {
        QVariantList it = m_model->last();

        while(!it.empty())
        {
            Chat* contact =  (Chat*)m_model->data(it).value<QObject*>();
            if (contact->title().indexOf(m_searchText) == -1)
            {
                QVariantList toRemove = it;
                it = m_model->before(it);
                m_model->removeAt(toRemove);
                continue;
            }
            else
                it = m_model->before(it);
        }
    }
    emit contentUpdated();
}
