/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDCloudSyncSubscriptionRecord.h>

@interface HDCloudSyncDataUploadRequestRecord : HDCloudSyncSubscriptionRecord

+ (id)recordIDWithZoneID:(id)arg1;
+ (id)recordWithCKRecord:(id)arg1 error:(id *)arg2;
+ (_Bool)isDataUploadRequestRecord:(id)arg1;

- (id)initForStoreRecord:(id)arg1;

@end
