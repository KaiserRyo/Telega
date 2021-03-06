/*
 * Copyright 2013 Vitaly Valtman
 * Copyright 2014 Canonical Ltd.
 * Authors:
 *      Roberto Mier
 *      Tiago Herrmann
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef NETWORKMGR_H
#define NETWORKMGR_H

#include <QObject>
#include "outboundpkt.h"
#include "inboundpkt.h"
#include "connection.h"
#include "settings.h"
#include "cryptoutils.h"

class DC :
        public Endpoint
{
public:
    enum DcState {
        error = -1,
        init,
        reqPQSent,
        reqDHSent,
        clientDHSent,
        authKeyCreated,
        userSignedIn
    };
    explicit DC(qint32 dcNum) :
        m_id(dcNum),
        m_state(init),
        m_authKeyId(0),
        m_expires(0),
        m_serverSalt(0),
        m_timeSyncFactor(0) {}
    inline qint32 id() { return m_id; }
    inline void setState(DcState dcState) { m_state = dcState; }
    inline DcState state() { return m_state; }
    inline qint64 serverSalt() { return m_serverSalt; }
    inline void setServerSalt(qint64 serverSalt) { this->m_serverSalt = serverSalt; }
    inline qint64 authKeyId() { return m_authKeyId; }
    inline void setAuthKeyId(qint64 authkeyId) { this->m_authKeyId = authkeyId; }
    inline char *authKey() { return m_authKey; }
    inline double timeSyncFactor() { return m_timeSyncFactor; }
    inline void setTimeSyncFactor(qint32 timeSyncFactor) { m_timeSyncFactor = timeSyncFactor; }
    inline qint32 expires() { return m_expires; }
    inline void setExpires(qint32 expires) { m_expires = expires; }

private:
    // DC metadata
    qint32 m_id;
    DcState m_state;

    // Auth members
    qint64 m_authKeyId;
    char m_authKey[SHARED_KEY_LENGTH];
    qint32 m_expires; // date the authorization expires

    // To be used during session
    qint64 m_serverSalt;
    qint32 m_timeSyncFactor; // difference between client and server time
};

#endif // NETWORKMGR_H
