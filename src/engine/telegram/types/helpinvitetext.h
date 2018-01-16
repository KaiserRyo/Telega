// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_HELPINVITETEXT
#define LQTG_TYPE_HELPINVITETEXT

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "../coretypes.h"

#include <QDataStream>

#include <QString>

class LIBQTELEGRAMSHARED_EXPORT HelpInviteText : public TelegramTypeObject
{
public:
    enum HelpInviteTextClassType {
        typeHelpInviteText = 0x18cb9f78
    };

    HelpInviteText(HelpInviteTextClassType classType = typeHelpInviteText, InboundPkt *in = 0);
    HelpInviteText(InboundPkt *in);
    HelpInviteText(const Null&);
    HelpInviteText(const HelpInviteText &another);
    virtual ~HelpInviteText();

    void setMessage(const QString &message);
    QString message() const;

    void setClassType(HelpInviteTextClassType classType);
    HelpInviteTextClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static HelpInviteText fromMap(const QMap<QString, QVariant> &map);
    static HelpInviteText fromJson(const QString &json);

    bool operator ==(const HelpInviteText &b) const;
    HelpInviteText &operator =(const HelpInviteText &b);

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    QString m_message;
    HelpInviteTextClassType m_classType;
};

Q_DECLARE_METATYPE(HelpInviteText)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const HelpInviteText &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, HelpInviteText &item);

QDebug LIBQTELEGRAMSHARED_EXPORT operator<<(QDebug debug,  const HelpInviteText &item);

#endif // LQTG_TYPE_HELPINVITETEXT