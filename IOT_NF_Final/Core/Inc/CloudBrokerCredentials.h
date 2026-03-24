/*
 * CloudBrokerCredentials.h
 *
 *  Created on: October 29 2025
 *      Author: nokeeffe
 */

#ifndef INC_CLOUDBROKERCREDENTIALS_H_
#define INC_CLOUDBROKERCREDENTIALS_H_

/*
 * Add host name DNS here
 * For Adafruit use "io.adafruit.com"
 * For Ubidots use "industrial.api.ubidots.com"
 */
#define CloudBroker_HostName "industrial.api.ubidots.com"

/*
 * Port = "1883" for unencrypted communication
 * Port = "8883" for encrypted communication
 */
#define CloudBroker_Port "8883"

/*
 * For Adafruit use your username
 * For Ubidots use your device token
 */
#define CloudBroker_Username "BBUS-xACNoyTWMYJ4TUUXlXs4lFjx0FzsfT"

/*
 * For Adafruit use "your active key
 * For Ubidots use an empty password ""
 */
#define CloudBroker_Password ""

/*
 * For Adafruit use a random ID
 * For Ubidots use your Device ID
 */
#define CloudBroker_ClientID "690a0a577c85d0b8ca67b530"

#endif /* INC_CLOUDBROKERCREDENTIALS_H_ */
