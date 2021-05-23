/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/Swift-Protocol.h>

@protocol HDMedicalIDServerInterface <Swift>

- (unsigned short)remote_fetchMedicalIDWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_medicalIDDataCreateIfNecessary:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_medicalIDEmergencyContactsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_updateMedicalIDData:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_deleteMedicalIDDataWithCompletion: /* Error: Ran out of types for this method. */;

@end
