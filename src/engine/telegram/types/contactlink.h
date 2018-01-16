// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CONTACTLINK
#define LQTG_TYPE_CONTACTLINK

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "../coretypes.h"

#include <QDataStream>


class LIBQTELEGRAMSHARED_EXPORT ContactLink : public TelegramTypeObject
{
public:
    enum ContactLinkClassType {
        typeContactLinkUnknown = 0x5f4f9247,
        typeContactLinkNone = 0xfeedd3ad,
        typeContactLinkHasPhone = 0x268f3f59,
        typeContactLinkContact = 0xd502c2d0
    };

    ContactLink(ContactLinkClassType classType = typeContactLinkUnknown, InboundPkt *in = 0);
    ContactLink(InboundPkt *in);
    ContactLink(const Null&);
    ContactLink(const ContactLink &another);
    virtual ~ContactLink();

    void setClassType(ContactLinkClassType classType);
    ContactLinkClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static ContactLink fromMap(const QMap<QString, QVariant> &map);
    static ContactLink fromJson(const QString &json);

    bool operator ==(const ContactLink &b) const;
    ContactLink &operator =(const ContactLink &b);

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    ContactLinkClassType m_classType;
};

Q_DECLARE_METATYPE(ContactLink)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const ContactLink &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, ContactLink &item);

QDebug LIBQTELEGRAMSHARED_EXPORT operator<<(QDebug debug,  const ContactLink &item);

#endif // LQTG_TYPE_CONTACTLINK