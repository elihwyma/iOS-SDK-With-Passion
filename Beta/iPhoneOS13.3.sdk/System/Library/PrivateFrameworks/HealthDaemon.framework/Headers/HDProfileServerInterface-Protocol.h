/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/Swift-Protocol.h>

@protocol HDProfileServerInterface <Swift>

- (unsigned short)remote_setDisplayFirstName:lastName:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_createProfileOfType:displayName:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_deleteProfile:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_getAllProfilesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_profileIdentifierForNRDeviceUUID:completion: /* Error: Ran out of types for this method. */;

@end
