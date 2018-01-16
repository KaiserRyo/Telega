// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTBOTINLINEMESSAGE_OBJECT
#define LQTG_TYPE_INPUTBOTINLINEMESSAGE_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/inputbotinlinemessage.h"

#include <QPointer>
#include "inputgeopointobject.h"
#include "replymarkupobject.h"

class LIBQTELEGRAMSHARED_EXPORT InputBotInlineMessageObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(InputBotInlineMessageClassType)
    Q_PROPERTY(QString address READ address WRITE setAddress NOTIFY addressChanged)
    Q_PROPERTY(QString caption READ caption WRITE setCaption NOTIFY captionChanged)
    Q_PROPERTY(QList<MessageEntity> entities READ entities WRITE setEntities NOTIFY entitiesChanged)
    Q_PROPERTY(QString firstName READ firstName WRITE setFirstName NOTIFY firstNameChanged)
    Q_PROPERTY(qint32 flags READ flags WRITE setFlags NOTIFY flagsChanged)
    Q_PROPERTY(InputGeoPointObject* geoPoint READ geoPoint WRITE setGeoPoint NOTIFY geoPointChanged)
    Q_PROPERTY(QString lastName READ lastName WRITE setLastName NOTIFY lastNameChanged)
    Q_PROPERTY(QString message READ message WRITE setMessage NOTIFY messageChanged)
    Q_PROPERTY(bool noWebpage READ noWebpage WRITE setNoWebpage NOTIFY noWebpageChanged)
    Q_PROPERTY(QString phoneNumber READ phoneNumber WRITE setPhoneNumber NOTIFY phoneNumberChanged)
    Q_PROPERTY(QString provider READ provider WRITE setProvider NOTIFY providerChanged)
    Q_PROPERTY(ReplyMarkupObject* replyMarkup READ replyMarkup WRITE setReplyMarkup NOTIFY replyMarkupChanged)
    Q_PROPERTY(QString title READ title WRITE setTitle NOTIFY titleChanged)
    Q_PROPERTY(QString venueId READ venueId WRITE setVenueId NOTIFY venueIdChanged)
    Q_PROPERTY(InputBotInlineMessage core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum InputBotInlineMessageClassType {
        TypeInputBotInlineMessageMediaAuto,
        TypeInputBotInlineMessageText,
        TypeInputBotInlineMessageMediaGeo,
        TypeInputBotInlineMessageMediaVenue,
        TypeInputBotInlineMessageMediaContact,
        TypeInputBotInlineMessageGame
    };

    InputBotInlineMessageObject(const InputBotInlineMessage &core, QObject *parent = 0);
    InputBotInlineMessageObject(QObject *parent = 0);
    virtual ~InputBotInlineMessageObject();

    void setAddress(const QString &address);
    QString address() const;

    void setCaption(const QString &caption);
    QString caption() const;

    void setEntities(const QList<MessageEntity> &entities);
    QList<MessageEntity> entities() const;

    void setFirstName(const QString &firstName);
    QString firstName() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setGeoPoint(InputGeoPointObject* geoPoint);
    InputGeoPointObject* geoPoint() const;

    void setLastName(const QString &lastName);
    QString lastName() const;

    void setMessage(const QString &message);
    QString message() const;

    void setNoWebpage(bool noWebpage);
    bool noWebpage() const;

    void setPhoneNumber(const QString &phoneNumber);
    QString phoneNumber() const;

    void setProvider(const QString &provider);
    QString provider() const;

    void setReplyMarkup(ReplyMarkupObject* replyMarkup);
    ReplyMarkupObject* replyMarkup() const;

    void setTitle(const QString &title);
    QString title() const;

    void setVenueId(const QString &venueId);
    QString venueId() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const InputBotInlineMessage &core);
    InputBotInlineMessage core() const;

    InputBotInlineMessageObject &operator =(const InputBotInlineMessage &b);
    bool operator ==(const InputBotInlineMessage &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void addressChanged();
    void captionChanged();
    void entitiesChanged();
    void firstNameChanged();
    void flagsChanged();
    void geoPointChanged();
    void lastNameChanged();
    void messageChanged();
    void noWebpageChanged();
    void phoneNumberChanged();
    void providerChanged();
    void replyMarkupChanged();
    void titleChanged();
    void venueIdChanged();

private Q_SLOTS:
    void coreGeoPointChanged();
    void coreReplyMarkupChanged();

private:
    QPointer<InputGeoPointObject> m_geoPoint;
    QPointer<ReplyMarkupObject> m_replyMarkup;
    InputBotInlineMessage m_core;
};

#endif // LQTG_TYPE_INPUTBOTINLINEMESSAGE_OBJECT