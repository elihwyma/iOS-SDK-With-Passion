/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKOperation.h>

@class NSArray;

@interface CKFetchWhitelistedBundleIDsOperation : CKOperation

{
    CDUnknownBlockType _fetchWhitelistedBundleIDsCompletionBlock;
    NSArray *_bundleIDs;
}

@property (copy, nonatomic) NSArray *bundleIDs;
@property (copy, nonatomic) CDUnknownBlockType fetchWhitelistedBundleIDsCompletionBlock;

- (_Bool)hasCKOperationCallbacksSet;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (Class)operationInfoClass;
- (void)_handleCompletionCallback:(id)arg1;

@end
