// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "inputchatphoto.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

InputChatPhoto::InputChatPhoto(InputChatPhotoClassType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

InputChatPhoto::InputChatPhoto(InboundPkt *in) :
    m_classType(typeInputChatPhotoEmpty)
{
    fetch(in);
}

InputChatPhoto::InputChatPhoto(const InputChatPhoto &another) :
    TelegramTypeObject(),
    m_classType(typeInputChatPhotoEmpty)
{
    operator=(another);
}

InputChatPhoto::InputChatPhoto(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeInputChatPhotoEmpty)
{
}

InputChatPhoto::~InputChatPhoto() {
    
}

void InputChatPhoto::setFile(const InputFile &file) {
    m_file = file;
}

InputFile InputChatPhoto::file() const {
    return m_file;
}

void InputChatPhoto::setId(const InputPhoto &id) {
    m_id = id;
}

InputPhoto InputChatPhoto::id() const {
    return m_id;
}

bool InputChatPhoto::operator ==(const InputChatPhoto &b) const {
    return m_classType == b.m_classType &&
           m_file == b.m_file &&
           m_id == b.m_id;
}

InputChatPhoto &InputChatPhoto::operator =(const InputChatPhoto &b) {
    m_classType = b.m_classType;
    m_file = b.m_file;
    m_id = b.m_id;
    setNull(b.isNull());
    return *this;
}

void InputChatPhoto::setClassType(InputChatPhoto::InputChatPhotoClassType classType) {
    m_classType = classType;
}

InputChatPhoto::InputChatPhotoClassType InputChatPhoto::classType() const {
    return m_classType;
}

bool InputChatPhoto::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeInputChatPhotoEmpty: {
        m_classType = static_cast<InputChatPhotoClassType>(x);
        return true;
    }
        break;
    
    case typeInputChatUploadedPhoto: {
        m_file.fetch(in);
        m_classType = static_cast<InputChatPhotoClassType>(x);
        return true;
    }
        break;
    
    case typeInputChatPhoto: {
        m_id.fetch(in);
        m_classType = static_cast<InputChatPhotoClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool InputChatPhoto::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputChatPhotoEmpty: {
        return true;
    }
        break;
    
    case typeInputChatUploadedPhoto: {
        m_file.push(out);
        return true;
    }
        break;
    
    case typeInputChatPhoto: {
        m_id.push(out);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QMap<QString, QVariant> InputChatPhoto::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeInputChatPhotoEmpty: {
        result["classType"] = "InputChatPhoto::typeInputChatPhotoEmpty";
        return result;
    }
        break;
    
    case typeInputChatUploadedPhoto: {
        result["classType"] = "InputChatPhoto::typeInputChatUploadedPhoto";
        if( !m_file.isNull() ) result["file"] = m_file.toMap();
        return result;
    }
        break;
    
    case typeInputChatPhoto: {
        result["classType"] = "InputChatPhoto::typeInputChatPhoto";
        if( !m_id.isNull() ) result["id"] = m_id.toMap();
        return result;
    }
        break;
    
    default:
        return result;
    }
}

InputChatPhoto InputChatPhoto::fromMap(const QMap<QString, QVariant> &map) {
    InputChatPhoto result;
    if(map.value("classType").toString() == "InputChatPhoto::typeInputChatPhotoEmpty") {
        result.setClassType(typeInputChatPhotoEmpty);
        return result;
    }
    if(map.value("classType").toString() == "InputChatPhoto::typeInputChatUploadedPhoto") {
        result.setClassType(typeInputChatUploadedPhoto);
        QVariant _file_var = map.value("file");
        if( !_file_var.isNull() )
            result.setFile( InputFile::fromMap(_file_var.toMap()) );
        
        return result;
    }
    if(map.value("classType").toString() == "InputChatPhoto::typeInputChatPhoto") {
        result.setClassType(typeInputChatPhoto);
        QVariant _id_var = map.value("id");
        if( !_id_var.isNull() )
            result.setId( InputPhoto::fromMap(_id_var.toMap()) );
        
        return result;
    }
    return result;
}

InputChatPhoto InputChatPhoto::fromJson(const QString &json) {
    return InputChatPhoto::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray InputChatPhoto::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const InputChatPhoto &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case InputChatPhoto::typeInputChatPhotoEmpty:
        
        break;
    case InputChatPhoto::typeInputChatUploadedPhoto:
        stream << item.file();
        break;
    case InputChatPhoto::typeInputChatPhoto:
        stream << item.id();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, InputChatPhoto &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<InputChatPhoto::InputChatPhotoClassType>(type));
    switch(type) {
    case InputChatPhoto::typeInputChatPhotoEmpty: {
        
    }
        break;
    case InputChatPhoto::typeInputChatUploadedPhoto: {
        InputFile m_file;
        stream >> m_file;
        item.setFile(m_file);
    }
        break;
    case InputChatPhoto::typeInputChatPhoto: {
        InputPhoto m_id;
        stream >> m_id;
        item.setId(m_id);
    }
        break;
    }
    return stream;
}

QDebug operator<<(QDebug debug,  const InputChatPhoto &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.InputChatPhoto(";
    switch(item.classType()) {
    case InputChatPhoto::typeInputChatPhotoEmpty:
        debug.nospace() << "classType: typeInputChatPhotoEmpty";
        break;
    case InputChatPhoto::typeInputChatUploadedPhoto:
        debug.nospace() << "classType: typeInputChatUploadedPhoto";
        debug.nospace() << ", file: " << item.file();
        break;
    case InputChatPhoto::typeInputChatPhoto:
        debug.nospace() << "classType: typeInputChatPhoto";
        debug.nospace() << ", id: " << item.id();
        break;
    }
    debug.nospace() << ")";
    return debug;
}
