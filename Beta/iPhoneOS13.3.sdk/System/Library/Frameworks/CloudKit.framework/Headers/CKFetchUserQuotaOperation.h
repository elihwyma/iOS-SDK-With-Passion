/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperation.h>

@interface CKFetchUserQuotaOperation : CKDatabaseOperation

{
    CDUnknownBlockType _fetchUserQuotaCompletionBlock;
    unsigned long long _quotaAvailable;
}

@property (nonatomic) unsigned long long quotaAvailable;
@property (copy, nonatomic) CDUnknownBlockType fetchUserQuotaCompletionBlock;

- (id)init;
- (_Bool)hasCKOperationCallbacksSet;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (Class)operationInfoClass;
- (void)_handleCompletionCallback:(id)arg1;

@end
