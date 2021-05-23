/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKOperation.h>

@class NSMutableDictionary;

@interface CKDiscoverAllUserIdentitiesOperation : CKOperation

{
    CDUnknownBlockType _userIdentityDiscoveredBlock;
    CDUnknownBlockType _discoverAllUserIdentitiesCompletionBlock;
    NSMutableDictionary *_identityToContactIdentifiers;
}

@property (retain, nonatomic) NSMutableDictionary *identityToContactIdentifiers;
@property (copy, nonatomic) CDUnknownBlockType userIdentityDiscoveredBlock;
@property (copy, nonatomic) CDUnknownBlockType discoverAllUserIdentitiesCompletionBlock;

- (id)init;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;
- (Class)operationInfoClass;

@end
