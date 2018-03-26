/* ========================================================================
 * LibNbiot: nbiottime_t.h
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

#ifndef NBIOTTIME_T_H
#define NBIOTTIME_T_H
#include <time.h>
    
struct NbiotTime_t
{
    unsigned short millis;
    time_t timestamp;
};

typedef struct NbiotTime_t NbiotTime_t;

#endif /* NBIOTTIME_T_H */
/* [] END OF FILE */
