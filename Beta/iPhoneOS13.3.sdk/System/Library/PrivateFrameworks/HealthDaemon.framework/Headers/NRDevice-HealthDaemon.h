/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <NanoRegistry/NRDevice.h>

@interface NRDevice (HealthDaemon)

- (id)hd_shortDescription;
- (id)hd_pairingID;
- (id)hd_name;
- (_Bool)hd_isActive;
- (id)hd_productType;
- (id)hd_systemBuildVersion;
- (id)hd_lastActiveDate;
- (id)hd_lastInactiveDate;

@end
