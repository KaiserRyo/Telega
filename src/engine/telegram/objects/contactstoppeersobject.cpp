// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "contactstoppeersobject.h"

ContactsTopPeersObject::ContactsTopPeersObject(const ContactsTopPeers &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

ContactsTopPeersObject::ContactsTopPeersObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

ContactsTopPeersObject::~ContactsTopPeersObject() {
}

void ContactsTopPeersObject::setCategories(const QList<TopPeerCategoryPeers> &categories) {
    if(m_core.categories() == categories) return;
    m_core.setCategories(categories);
    Q_EMIT categoriesChanged();
    Q_EMIT coreChanged();
}

QList<TopPeerCategoryPeers> ContactsTopPeersObject::categories() const {
    return m_core.categories();
}

void ContactsTopPeersObject::setChats(const QList<Chat> &chats) {
    if(m_core.chats() == chats) return;
    m_core.setChats(chats);
    Q_EMIT chatsChanged();
    Q_EMIT coreChanged();
}

QList<Chat> ContactsTopPeersObject::chats() const {
    return m_core.chats();
}

void ContactsTopPeersObject::setUsers(const QList<User> &users) {
    if(m_core.users() == users) return;
    m_core.setUsers(users);
    Q_EMIT usersChanged();
    Q_EMIT coreChanged();
}

QList<User> ContactsTopPeersObject::users() const {
    return m_core.users();
}

ContactsTopPeersObject &ContactsTopPeersObject::operator =(const ContactsTopPeers &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT categoriesChanged();
    Q_EMIT chatsChanged();
    Q_EMIT usersChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool ContactsTopPeersObject::operator ==(const ContactsTopPeers &b) const {
    return m_core == b;
}

void ContactsTopPeersObject::setClassType(quint32 classType) {
    ContactsTopPeers::ContactsTopPeersClassType result;
    switch(classType) {
    case TypeContactsTopPeersNotModified:
        result = ContactsTopPeers::typeContactsTopPeersNotModified;
        break;
    case TypeContactsTopPeers:
        result = ContactsTopPeers::typeContactsTopPeers;
        break;
    default:
        result = ContactsTopPeers::typeContactsTopPeersNotModified;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 ContactsTopPeersObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case ContactsTopPeers::typeContactsTopPeersNotModified:
        result = TypeContactsTopPeersNotModified;
        break;
    case ContactsTopPeers::typeContactsTopPeers:
        result = TypeContactsTopPeers;
        break;
    default:
        result = TypeContactsTopPeersNotModified;
        break;
    }

    return result;
}

void ContactsTopPeersObject::setCore(const ContactsTopPeers &core) {
    operator =(core);
}

ContactsTopPeers ContactsTopPeersObject::core() const {
    return m_core;
}
