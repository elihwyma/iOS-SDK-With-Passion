/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKOperation.h>

@class NSMutableArray;

@interface CKDiscoverAllContactsOperation : CKOperation

{
    CDUnknownBlockType _discoverAllContactsCompletionBlock;
    NSMutableArray *_discoveredUserInfos;
}

@property (retain, nonatomic) NSMutableArray *discoveredUserInfos;
@property (copy, nonatomic) CDUnknownBlockType discoverAllContactsCompletionBlock;

- (id)init;
- (_Bool)hasCKOperationCallbacksSet;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;
- (Class)operationInfoClass;

@end
