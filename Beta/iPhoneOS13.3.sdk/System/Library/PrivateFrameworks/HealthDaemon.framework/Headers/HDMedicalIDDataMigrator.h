/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@interface HDMedicalIDDataMigrator : NSObject

+ (_Bool)migrateMedicalIDDataIfNeeded:(id)arg1;
+ (_Bool)_migrateFromVersionNoneTo1:(id)arg1;
+ (_Bool)_migrateEmergencyContactsToVersion2:(id)arg1;
+ (_Bool)_migrateEmergencyContactsToVersion3:(id)arg1;
+ (_Bool)_migrateFromVersion3ToVersion4:(id)arg1;

@end
