// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_KEYBOARDBUTTONROW
#define LQTG_TYPE_KEYBOARDBUTTONROW

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "../coretypes.h"

#include <QDataStream>

#include <QList>
#include "keyboardbutton.h"

class LIBQTELEGRAMSHARED_EXPORT KeyboardButtonRow : public TelegramTypeObject
{
public:
    enum KeyboardButtonRowClassType {
        typeKeyboardButtonRow = 0x77608b83
    };

    KeyboardButtonRow(KeyboardButtonRowClassType classType = typeKeyboardButtonRow, InboundPkt *in = 0);
    KeyboardButtonRow(InboundPkt *in);
    KeyboardButtonRow(const Null&);
    KeyboardButtonRow(const KeyboardButtonRow &another);
    virtual ~KeyboardButtonRow();

    void setButtons(const QList<KeyboardButton> &buttons);
    QList<KeyboardButton> buttons() const;

    void setClassType(KeyboardButtonRowClassType classType);
    KeyboardButtonRowClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static KeyboardButtonRow fromMap(const QMap<QString, QVariant> &map);
    static KeyboardButtonRow fromJson(const QString &json);

    bool operator ==(const KeyboardButtonRow &b) const;
    KeyboardButtonRow &operator =(const KeyboardButtonRow &b);

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    QList<KeyboardButton> m_buttons;
    KeyboardButtonRowClassType m_classType;
};

Q_DECLARE_METATYPE(KeyboardButtonRow)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const KeyboardButtonRow &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, KeyboardButtonRow &item);

QDebug LIBQTELEGRAMSHARED_EXPORT operator<<(QDebug debug,  const KeyboardButtonRow &item);

#endif // LQTG_TYPE_KEYBOARDBUTTONROW