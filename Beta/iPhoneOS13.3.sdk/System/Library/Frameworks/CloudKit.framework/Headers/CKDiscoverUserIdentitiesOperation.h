/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKOperation.h>

@class NSArray;

@interface CKDiscoverUserIdentitiesOperation : CKOperation

{
    CDUnknownBlockType _userIdentityDiscoveredBlock;
    CDUnknownBlockType _discoverUserIdentitiesCompletionBlock;
    NSArray *_userIdentityLookupInfos;
}

@property (copy, nonatomic) NSArray *userIdentityLookupInfos;
@property (copy, nonatomic) CDUnknownBlockType userIdentityDiscoveredBlock;
@property (copy, nonatomic) CDUnknownBlockType discoverUserIdentitiesCompletionBlock;

- (id)init;
- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;
- (Class)operationInfoClass;
- (id)initWithUserIdentityLookupInfos:(id)arg1;

@end
