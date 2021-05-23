/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <IDS/IDSDevice.h>

@interface IDSDevice (HealthDaemon)

- (id)hd_deviceIdentifier;
- (id)hd_destinationIdentifier;
- (_Bool)hd_isEquivalentToDevice:(id)arg1;
- (id)hd_shortDescription;

@end
