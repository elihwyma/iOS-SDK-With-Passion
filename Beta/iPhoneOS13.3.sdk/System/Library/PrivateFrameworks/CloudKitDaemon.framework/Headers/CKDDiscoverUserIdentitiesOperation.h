/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray;

@interface CKDDiscoverUserIdentitiesOperation : CKDOperation

{
    CDUnknownBlockType _discoverUserIdentitiesProgressBlock;
    NSArray *_userIdentityLookupInfos;
}

@property (retain, nonatomic) NSArray *userIdentityLookupInfos;
@property (copy, nonatomic) CDUnknownBlockType discoverUserIdentitiesProgressBlock;

- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)_handleDiscoveredIdentity:(id)arg1 lookupInfo:(id)arg2 responseCode:(id)arg3;
- (void)_discoverIdentitiesWithLookupInfos:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
