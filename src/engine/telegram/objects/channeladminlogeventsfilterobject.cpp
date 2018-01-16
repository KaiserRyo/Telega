// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "channeladminlogeventsfilterobject.h"

ChannelAdminLogEventsFilterObject::ChannelAdminLogEventsFilterObject(const ChannelAdminLogEventsFilter &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

ChannelAdminLogEventsFilterObject::ChannelAdminLogEventsFilterObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

ChannelAdminLogEventsFilterObject::~ChannelAdminLogEventsFilterObject() {
}

void ChannelAdminLogEventsFilterObject::setBan(bool ban) {
    if(m_core.ban() == ban) return;
    m_core.setBan(ban);
    Q_EMIT banChanged();
    Q_EMIT coreChanged();
}

bool ChannelAdminLogEventsFilterObject::ban() const {
    return m_core.ban();
}

void ChannelAdminLogEventsFilterObject::setDeleteValue(bool deleteValue) {
    if(m_core.deleteValue() == deleteValue) return;
    m_core.setDeleteValue(deleteValue);
    Q_EMIT deleteValueChanged();
    Q_EMIT coreChanged();
}

bool ChannelAdminLogEventsFilterObject::deleteValue() const {
    return m_core.deleteValue();
}

void ChannelAdminLogEventsFilterObject::setDemote(bool demote) {
    if(m_core.demote() == demote) return;
    m_core.setDemote(demote);
    Q_EMIT demoteChanged();
    Q_EMIT coreChanged();
}

bool ChannelAdminLogEventsFilterObject::demote() const {
    return m_core.demote();
}

void ChannelAdminLogEventsFilterObject::setEdit(bool edit) {
    if(m_core.edit() == edit) return;
    m_core.setEdit(edit);
    Q_EMIT editChanged();
    Q_EMIT coreChanged();
}

bool ChannelAdminLogEventsFilterObject::edit() const {
    return m_core.edit();
}

void ChannelAdminLogEventsFilterObject::setFlags(qint32 flags) {
    if(m_core.flags() == flags) return;
    m_core.setFlags(flags);
    Q_EMIT flagsChanged();
    Q_EMIT coreChanged();
}

qint32 ChannelAdminLogEventsFilterObject::flags() const {
    return m_core.flags();
}

void ChannelAdminLogEventsFilterObject::setInfo(bool info) {
    if(m_core.info() == info) return;
    m_core.setInfo(info);
    Q_EMIT infoChanged();
    Q_EMIT coreChanged();
}

bool ChannelAdminLogEventsFilterObject::info() const {
    return m_core.info();
}

void ChannelAdminLogEventsFilterObject::setInvite(bool invite) {
    if(m_core.invite() == invite) return;
    m_core.setInvite(invite);
    Q_EMIT inviteChanged();
    Q_EMIT coreChanged();
}

bool ChannelAdminLogEventsFilterObject::invite() const {
    return m_core.invite();
}

void ChannelAdminLogEventsFilterObject::setJoin(bool join) {
    if(m_core.join() == join) return;
    m_core.setJoin(join);
    Q_EMIT joinChanged();
    Q_EMIT coreChanged();
}

bool ChannelAdminLogEventsFilterObject::join() const {
    return m_core.join();
}

void ChannelAdminLogEventsFilterObject::setKick(bool kick) {
    if(m_core.kick() == kick) return;
    m_core.setKick(kick);
    Q_EMIT kickChanged();
    Q_EMIT coreChanged();
}

bool ChannelAdminLogEventsFilterObject::kick() const {
    return m_core.kick();
}

void ChannelAdminLogEventsFilterObject::setLeave(bool leave) {
    if(m_core.leave() == leave) return;
    m_core.setLeave(leave);
    Q_EMIT leaveChanged();
    Q_EMIT coreChanged();
}

bool ChannelAdminLogEventsFilterObject::leave() const {
    return m_core.leave();
}

void ChannelAdminLogEventsFilterObject::setPinned(bool pinned) {
    if(m_core.pinned() == pinned) return;
    m_core.setPinned(pinned);
    Q_EMIT pinnedChanged();
    Q_EMIT coreChanged();
}

bool ChannelAdminLogEventsFilterObject::pinned() const {
    return m_core.pinned();
}

void ChannelAdminLogEventsFilterObject::setPromote(bool promote) {
    if(m_core.promote() == promote) return;
    m_core.setPromote(promote);
    Q_EMIT promoteChanged();
    Q_EMIT coreChanged();
}

bool ChannelAdminLogEventsFilterObject::promote() const {
    return m_core.promote();
}

void ChannelAdminLogEventsFilterObject::setSettings(bool settings) {
    if(m_core.settings() == settings) return;
    m_core.setSettings(settings);
    Q_EMIT settingsChanged();
    Q_EMIT coreChanged();
}

bool ChannelAdminLogEventsFilterObject::settings() const {
    return m_core.settings();
}

void ChannelAdminLogEventsFilterObject::setUnban(bool unban) {
    if(m_core.unban() == unban) return;
    m_core.setUnban(unban);
    Q_EMIT unbanChanged();
    Q_EMIT coreChanged();
}

bool ChannelAdminLogEventsFilterObject::unban() const {
    return m_core.unban();
}

void ChannelAdminLogEventsFilterObject::setUnkick(bool unkick) {
    if(m_core.unkick() == unkick) return;
    m_core.setUnkick(unkick);
    Q_EMIT unkickChanged();
    Q_EMIT coreChanged();
}

bool ChannelAdminLogEventsFilterObject::unkick() const {
    return m_core.unkick();
}

ChannelAdminLogEventsFilterObject &ChannelAdminLogEventsFilterObject::operator =(const ChannelAdminLogEventsFilter &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT banChanged();
    Q_EMIT deleteValueChanged();
    Q_EMIT demoteChanged();
    Q_EMIT editChanged();
    Q_EMIT flagsChanged();
    Q_EMIT infoChanged();
    Q_EMIT inviteChanged();
    Q_EMIT joinChanged();
    Q_EMIT kickChanged();
    Q_EMIT leaveChanged();
    Q_EMIT pinnedChanged();
    Q_EMIT promoteChanged();
    Q_EMIT settingsChanged();
    Q_EMIT unbanChanged();
    Q_EMIT unkickChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool ChannelAdminLogEventsFilterObject::operator ==(const ChannelAdminLogEventsFilter &b) const {
    return m_core == b;
}

void ChannelAdminLogEventsFilterObject::setClassType(quint32 classType) {
    ChannelAdminLogEventsFilter::ChannelAdminLogEventsFilterClassType result;
    switch(classType) {
    case TypeChannelAdminLogEventsFilter:
        result = ChannelAdminLogEventsFilter::typeChannelAdminLogEventsFilter;
        break;
    default:
        result = ChannelAdminLogEventsFilter::typeChannelAdminLogEventsFilter;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 ChannelAdminLogEventsFilterObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case ChannelAdminLogEventsFilter::typeChannelAdminLogEventsFilter:
        result = TypeChannelAdminLogEventsFilter;
        break;
    default:
        result = TypeChannelAdminLogEventsFilter;
        break;
    }

    return result;
}

void ChannelAdminLogEventsFilterObject::setCore(const ChannelAdminLogEventsFilter &core) {
    operator =(core);
}

ChannelAdminLogEventsFilter ChannelAdminLogEventsFilterObject::core() const {
    return m_core;
}
