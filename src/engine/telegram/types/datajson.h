// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_DATAJSON
#define LQTG_TYPE_DATAJSON

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "../coretypes.h"

#include <QDataStream>

#include <QString>

class LIBQTELEGRAMSHARED_EXPORT DataJSON : public TelegramTypeObject
{
public:
    enum DataJSONClassType {
        typeDataJSON = 0x7d748d04
    };

    DataJSON(DataJSONClassType classType = typeDataJSON, InboundPkt *in = 0);
    DataJSON(InboundPkt *in);
    DataJSON(const Null&);
    DataJSON(const DataJSON &another);
    virtual ~DataJSON();

    void setData(const QString &data);
    QString data() const;

    void setClassType(DataJSONClassType classType);
    DataJSONClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static DataJSON fromMap(const QMap<QString, QVariant> &map);
    static DataJSON fromJson(const QString &json);

    bool operator ==(const DataJSON &b) const;
    DataJSON &operator =(const DataJSON &b);

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    QString m_data;
    DataJSONClassType m_classType;
};

Q_DECLARE_METATYPE(DataJSON)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const DataJSON &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, DataJSON &item);

QDebug LIBQTELEGRAMSHARED_EXPORT operator<<(QDebug debug,  const DataJSON &item);

#endif // LQTG_TYPE_DATAJSON