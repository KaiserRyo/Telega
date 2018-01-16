// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_KEYBOARDBUTTON
#define LQTG_TYPE_KEYBOARDBUTTON

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "../coretypes.h"

#include <QDataStream>

#include <QByteArray>
#include <QtGlobal>
#include <QString>

class LIBQTELEGRAMSHARED_EXPORT KeyboardButton : public TelegramTypeObject
{
public:
    enum KeyboardButtonClassType {
        typeKeyboardButton = 0xa2fa4880,
        typeKeyboardButtonUrl = 0x258aff05,
        typeKeyboardButtonCallback = 0x683a5e46,
        typeKeyboardButtonRequestPhone = 0xb16a6c29,
        typeKeyboardButtonRequestGeoLocation = 0xfc796b3f,
        typeKeyboardButtonSwitchInline = 0x568a748,
        typeKeyboardButtonGame = 0x50f41ccf,
        typeKeyboardButtonBuy = 0xafd93fbb
    };

    KeyboardButton(KeyboardButtonClassType classType = typeKeyboardButton, InboundPkt *in = 0);
    KeyboardButton(InboundPkt *in);
    KeyboardButton(const Null&);
    KeyboardButton(const KeyboardButton &another);
    virtual ~KeyboardButton();

    void setData(const QByteArray &data);
    QByteArray data() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setQuery(const QString &query);
    QString query() const;

    void setSamePeer(bool samePeer);
    bool samePeer() const;

    void setText(const QString &text);
    QString text() const;

    void setUrl(const QString &url);
    QString url() const;

    void setClassType(KeyboardButtonClassType classType);
    KeyboardButtonClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static KeyboardButton fromMap(const QMap<QString, QVariant> &map);
    static KeyboardButton fromJson(const QString &json);

    bool operator ==(const KeyboardButton &b) const;
    KeyboardButton &operator =(const KeyboardButton &b);

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    QByteArray m_data;
    qint32 m_flags;
    QString m_query;
    QString m_text;
    QString m_url;
    KeyboardButtonClassType m_classType;
};

Q_DECLARE_METATYPE(KeyboardButton)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const KeyboardButton &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, KeyboardButton &item);

QDebug LIBQTELEGRAMSHARED_EXPORT operator<<(QDebug debug,  const KeyboardButton &item);

#endif // LQTG_TYPE_KEYBOARDBUTTON