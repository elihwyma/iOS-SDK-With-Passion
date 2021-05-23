/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDCloudSyncRecord.h>

@class CKRecordID;

@interface HDCloudSyncSubscriptionRecord : HDCloudSyncRecord

@property (copy, nonatomic, readonly) CKRecordID *storeRecordID;

+ (id)recordIDWithZoneID:(id)arg1;
+ (id)recordWithCKRecord:(id)arg1 error:(id *)arg2;
+ (_Bool)hasFutureSchema:(id)arg1;
+ (id)recordIDsWithZoneID:(id)arg1;
+ (_Bool)isSubscriptionRecord:(id)arg1;

- (id)description;
- (id)initForStoreRecord:(id)arg1;
- (id)initWithCKRecord:(id)arg1 forStoreRecordID:(id)arg2 schemaVersion:(long long)arg3;

@end
