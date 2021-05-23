/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDOperation.h>

__attribute__((visibility("hidden")))
@interface CKDDatabaseOperation : CKDOperation

{
    long long _databaseScope;
}

@property (nonatomic) long long databaseScope;

- (id)activityCreate;
- (id)flowControlKey;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 spawnQueue:(id)arg3 operationConfigurationBlock:(CDUnknownBlockType)arg4;
- (id)CKStatusReportProperties;
- (id)analyticsPayload;
- (void)setPCSData:(id)arg1 forFetchedZoneID:(id)arg2;
- (void)setPCSData:(id)arg1 forFetchedShareID:(id)arg2;
- (void)setPCSData:(id)arg1 forFetchedRecordID:(id)arg2;

@end
