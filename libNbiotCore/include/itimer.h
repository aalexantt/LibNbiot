/* ========================================================================
 * LibNbiot: itimer.h
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
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either expressed or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * ========================================================================
*/

#ifndef ITIMER_H
#define ITIMER_H

/*!
 * \brief The ITimer class
 */
class ITimer
{
public:
    virtual ~ITimer() {}

    /*!
     * \brief start
     */
    virtual void start(unsigned long) = 0;
    /*!
     * \brief expired
     * \return
     */
    virtual unsigned long expired() const = 0;
    /*!
     * \brief remaining
     * \return
     */
    virtual unsigned long remaining() const = 0;
    /*!
     * \brief clear
     */
    virtual void clear() = 0;
    /*!
     * \brief valid
     * \return
     */
    virtual bool valid() const = 0;
};

#endif // ITIMER_H

