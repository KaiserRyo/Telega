// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTWEBDOCUMENT
#define LQTG_TYPE_INPUTWEBDOCUMENT

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "../coretypes.h"

#include <QDataStream>

#include <QList>
#include "documentattribute.h"
#include <QString>
#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT InputWebDocument : public TelegramTypeObject
{
public:
    enum InputWebDocumentClassType {
        typeInputWebDocument = 0x9bed434d
    };

    InputWebDocument(InputWebDocumentClassType classType = typeInputWebDocument, InboundPkt *in = 0);
    InputWebDocument(InboundPkt *in);
    InputWebDocument(const Null&);
    InputWebDocument(const InputWebDocument &another);
    virtual ~InputWebDocument();

    void setAttributes(const QList<DocumentAttribute> &attributes);
    QList<DocumentAttribute> attributes() const;

    void setMimeType(const QString &mimeType);
    QString mimeType() const;

    void setSize(qint32 size);
    qint32 size() const;

    void setUrl(const QString &url);
    QString url() const;

    void setClassType(InputWebDocumentClassType classType);
    InputWebDocumentClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static InputWebDocument fromMap(const QMap<QString, QVariant> &map);
    static InputWebDocument fromJson(const QString &json);

    bool operator ==(const InputWebDocument &b) const;
    InputWebDocument &operator =(const InputWebDocument &b);

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    QList<DocumentAttribute> m_attributes;
    QString m_mimeType;
    qint32 m_size;
    QString m_url;
    InputWebDocumentClassType m_classType;
};

Q_DECLARE_METATYPE(InputWebDocument)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const InputWebDocument &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, InputWebDocument &item);

QDebug LIBQTELEGRAMSHARED_EXPORT operator<<(QDebug debug,  const InputWebDocument &item);

#endif // LQTG_TYPE_INPUTWEBDOCUMENT