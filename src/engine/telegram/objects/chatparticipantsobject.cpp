// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "chatparticipantsobject.h"

ChatParticipantsObject::ChatParticipantsObject(const ChatParticipants &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_selfParticipant(0),
    m_core(core)
{
    m_selfParticipant = new ChatParticipantObject(m_core.selfParticipant(), this);
    connect(m_selfParticipant.data(), &ChatParticipantObject::coreChanged, this, &ChatParticipantsObject::coreSelfParticipantChanged);
}

ChatParticipantsObject::ChatParticipantsObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_selfParticipant(0),
    m_core()
{
    m_selfParticipant = new ChatParticipantObject(m_core.selfParticipant(), this);
    connect(m_selfParticipant.data(), &ChatParticipantObject::coreChanged, this, &ChatParticipantsObject::coreSelfParticipantChanged);
}

ChatParticipantsObject::~ChatParticipantsObject() {
}

void ChatParticipantsObject::setChatId(qint32 chatId) {
    if(m_core.chatId() == chatId) return;
    m_core.setChatId(chatId);
    Q_EMIT chatIdChanged();
    Q_EMIT coreChanged();
}

qint32 ChatParticipantsObject::chatId() const {
    return m_core.chatId();
}

void ChatParticipantsObject::setFlags(qint32 flags) {
    if(m_core.flags() == flags) return;
    m_core.setFlags(flags);
    Q_EMIT flagsChanged();
    Q_EMIT coreChanged();
}

qint32 ChatParticipantsObject::flags() const {
    return m_core.flags();
}

void ChatParticipantsObject::setParticipants(const QList<ChatParticipant> &participants) {
    if(m_core.participants() == participants) return;
    m_core.setParticipants(participants);
    Q_EMIT participantsChanged();
    Q_EMIT coreChanged();
}

QList<ChatParticipant> ChatParticipantsObject::participants() const {
    return m_core.participants();
}

void ChatParticipantsObject::setSelfParticipant(ChatParticipantObject* selfParticipant) {
    if(m_selfParticipant == selfParticipant) return;
    if(m_selfParticipant) delete m_selfParticipant;
    m_selfParticipant = selfParticipant;
    if(m_selfParticipant) {
        m_selfParticipant->setParent(this);
        m_core.setSelfParticipant(m_selfParticipant->core());
        connect(m_selfParticipant.data(), &ChatParticipantObject::coreChanged, this, &ChatParticipantsObject::coreSelfParticipantChanged);
    }
    Q_EMIT selfParticipantChanged();
    Q_EMIT coreChanged();
}

ChatParticipantObject*  ChatParticipantsObject::selfParticipant() const {
    return m_selfParticipant;
}

void ChatParticipantsObject::setVersion(qint32 version) {
    if(m_core.version() == version) return;
    m_core.setVersion(version);
    Q_EMIT versionChanged();
    Q_EMIT coreChanged();
}

qint32 ChatParticipantsObject::version() const {
    return m_core.version();
}

ChatParticipantsObject &ChatParticipantsObject::operator =(const ChatParticipants &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_selfParticipant->setCore(b.selfParticipant());

    Q_EMIT chatIdChanged();
    Q_EMIT flagsChanged();
    Q_EMIT participantsChanged();
    Q_EMIT selfParticipantChanged();
    Q_EMIT versionChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool ChatParticipantsObject::operator ==(const ChatParticipants &b) const {
    return m_core == b;
}

void ChatParticipantsObject::setClassType(quint32 classType) {
    ChatParticipants::ChatParticipantsClassType result;
    switch(classType) {
    case TypeChatParticipantsForbidden:
        result = ChatParticipants::typeChatParticipantsForbidden;
        break;
    case TypeChatParticipants:
        result = ChatParticipants::typeChatParticipants;
        break;
    default:
        result = ChatParticipants::typeChatParticipantsForbidden;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 ChatParticipantsObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case ChatParticipants::typeChatParticipantsForbidden:
        result = TypeChatParticipantsForbidden;
        break;
    case ChatParticipants::typeChatParticipants:
        result = TypeChatParticipants;
        break;
    default:
        result = TypeChatParticipantsForbidden;
        break;
    }

    return result;
}

void ChatParticipantsObject::setCore(const ChatParticipants &core) {
    operator =(core);
}

ChatParticipants ChatParticipantsObject::core() const {
    return m_core;
}

void ChatParticipantsObject::coreSelfParticipantChanged() {
    if(m_core.selfParticipant() == m_selfParticipant->core()) return;
    m_core.setSelfParticipant(m_selfParticipant->core());
    Q_EMIT selfParticipantChanged();
    Q_EMIT coreChanged();
}
