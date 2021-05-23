/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDCloudSyncFetchOperationResult, HDCloudSyncOperationConfiguration, NSProgress, NSString;

@protocol OS_dispatch_queue;

@interface HDCloudSyncDisableOperation : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    HDCloudSyncOperationConfiguration *_configuration;
    HDCloudSyncFetchOperationResult *_fetchResult;
    _Bool _queue_hasStarted;
    CDUnknownBlockType _completion;
    NSProgress *_progress;
}

@property (nonatomic, readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)startWithCompletion:(CDUnknownBlockType)arg1;
- (void)_finishWithSuccess:(_Bool)arg1 error:(id)arg2;
- (id)initWithConfiguration:(id)arg1 fetchResult:(id)arg2;
- (id)_zonesByContainerIDForZones:(id)arg1;
- (void)_updateProgressForPrimaryContainer:(_Bool)arg1 forOperationComponent:(unsigned long long)arg2;
- (void)_updateMasterZoneCreationCompletionForOperationWithError:(id)arg1 masterZoneToSave:(id)arg2 savedRecordZones:(id)arg3 isBestEffortOperation:(_Bool)arg4 container:(id)arg5 isOperationSuccessful:(_Bool *)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_updateMasterRecordCreationCompletionForOperationWithError:(id)arg1 masterRecordToSave:(id)arg2 savedRecords:(id)arg3 isBestEffortOperation:(_Bool)arg4 container:(id)arg5 isOperationSuccessful:(_Bool *)arg6 completion:(CDUnknownBlockType)arg7;

@end
