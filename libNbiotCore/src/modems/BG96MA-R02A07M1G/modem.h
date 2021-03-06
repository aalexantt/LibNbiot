
/* ========================================================================
 * LibNbiot: modem.h
 *
 * Copyright (c) 2018, Edgar Hindemith, Yassine Amraue, Thorsten
 * Krautscheid, Kolja Vornholt, T-Systems International GmbH
 * contact: libnbiot@t-systems.com, opensource@telekom.de
 *
 * This file is distributed under the conditions of the Apache License,
 * Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * For details see the file LICENSE at the toplevel.
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * ========================================================================
*/

#ifndef MODEM_H
#define MODEM_H

#include "nbiotstring.h"
#include "modembase.h"

/*!
 * \brief The Modem class
 */
class Modem : public ModemBase
{
public:
    /*!
     * \brief C'tor
     * \param serial
     */
    explicit Modem(Serial& serial) : 
        ModemBase(serial)
    {}
    
    /*!
     * \brief D'tor
     */
    virtual ~Modem() = default;

    /*!
     * \brief reboot 
     * \return
     */
    virtual bool reboot();

    virtual bool attach();

    /*!
     * \brief initialize
     * \return
     */
    virtual bool initialize();

    //! @todo error struct and lastError() method

private:

    Modem() = delete;
    Modem(const Modem&) = delete;
    Modem& operator=(const Modem&) = delete;

    static const char* cmdCGATT1;
    static const char* cmdATE0;

};

#endif // MODEM_H

