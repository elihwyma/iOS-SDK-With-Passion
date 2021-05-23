/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKOperation.h>

@interface CKSyncRequestOperation : CKOperation

{
    CDUnknownBlockType _willBeginSyncRequestWithClientsBlock;
    CDUnknownBlockType _clientSyncStartedBlock;
    CDUnknownBlockType _clientSyncProgressedBlock;
    CDUnknownBlockType _clientSyncCompletedBlock;
    CDUnknownBlockType _syncRequestCompletionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType willBeginSyncRequestWithClientsBlock;
@property (copy, nonatomic) CDUnknownBlockType clientSyncStartedBlock;
@property (copy, nonatomic) CDUnknownBlockType clientSyncProgressedBlock;
@property (copy, nonatomic) CDUnknownBlockType clientSyncCompletedBlock;
@property (copy, nonatomic) CDUnknownBlockType syncRequestCompletionBlock;

- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;
- (Class)operationInfoClass;

@end
