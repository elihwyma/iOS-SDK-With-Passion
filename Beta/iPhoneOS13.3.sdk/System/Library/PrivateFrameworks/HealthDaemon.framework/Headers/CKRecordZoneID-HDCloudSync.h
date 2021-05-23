/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <CloudKit/CKRecordZoneID.h>

@interface CKRecordZoneID (HDCloudSync)

+ (id)hd_masterZoneIDForSyncCircleIdentifier:(id)arg1;
+ (id)hd_zoneIDWithSyncCircleIdentifier:(id)arg1 storeIdentifier:(id)arg2;

- (id)hd_storeIdentifier;
- (_Bool)hd_isMasterZoneIDForSyncCircleIdentifier:(id *)arg1;
- (_Bool)hd_splitIntoSyncCircleIdentifier:(id *)arg1 storeIdentifier:(id *)arg2;
- (id)hd_syncCircleIdentifier;

@end
