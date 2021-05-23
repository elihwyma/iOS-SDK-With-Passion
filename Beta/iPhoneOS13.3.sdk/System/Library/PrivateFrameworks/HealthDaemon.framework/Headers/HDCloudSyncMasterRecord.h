/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDCloudSyncRecord.h>

@class NSSet;

@interface HDCloudSyncMasterRecord : HDCloudSyncRecord

{
    NSSet *_disabledOwnerIdentifiers;
}

@property (retain, nonatomic) NSSet *disabledOwnerIdentifiers;

+ (id)recordIDWithZoneID:(id)arg1;
+ (id)recordWithCKRecord:(id)arg1 error:(id *)arg2;
+ (_Bool)hasFutureSchema:(id)arg1;
+ (_Bool)isMasterRecord:(id)arg1;
+ (_Bool)isMasterRecordID:(id)arg1;

- (id)description;
- (id)initWithCKRecord:(id)arg1 disabledOwnerIdentifiers:(id)arg2 schemaVersion:(long long)arg3;
- (id)initInSyncCircle:(id)arg1 disabledOwnerIdentifiers:(id)arg2;

@end
