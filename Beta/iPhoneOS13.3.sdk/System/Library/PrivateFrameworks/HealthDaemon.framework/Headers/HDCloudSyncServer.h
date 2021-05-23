/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSubserver.h>

@class NSString;

@interface HDCloudSyncServer : HDSubserver

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)remote_forceCloudSyncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)remote_forceCloudSyncDataUploadForProfileWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_fetchCloudSyncStatusWithCompletion:(CDUnknownBlockType)arg1;
- (id)remote_disableCloudSyncAndDeleteAllCloudDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)remote_fetchCloudSyncProgressWithCompletion:(CDUnknownBlockType)arg1;
- (id)remote_forceCloudResetWithCompletion:(CDUnknownBlockType)arg1;
- (id)remote_fetchCloudDescriptionWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_disableCloudSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_enableCloudSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_accountConfigurationDidChangeWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_oldestSampleStartDateInHealthDatabaseWithCompletion:(CDUnknownBlockType)arg1;

@end
