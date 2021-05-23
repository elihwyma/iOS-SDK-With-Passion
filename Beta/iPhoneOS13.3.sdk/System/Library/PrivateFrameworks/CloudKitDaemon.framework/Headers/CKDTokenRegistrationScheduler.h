/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@protocol CKDAccountInfoProvider, OS_dispatch_queue;

@interface CKDTokenRegistrationScheduler : NSObject

{
    _Bool _schedulerIsAvailable;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_callbackBlocks;
    NSMutableDictionary *_callbackTimers;
    NSMutableSet *_operations;
    id <CKDAccountInfoProvider> _unitTestingAccountInfoProvider;
    NSMutableDictionary *_unitTestingPushTokens;
}

@property (nonatomic) _Bool schedulerIsAvailable;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *callbackBlocks;
@property (retain, nonatomic) NSMutableDictionary *callbackTimers;
@property (retain, nonatomic) NSMutableSet *operations;
@property (retain, nonatomic) id <CKDAccountInfoProvider> unitTestingAccountInfoProvider;
@property (retain, nonatomic) NSMutableDictionary *unitTestingPushTokens;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedScheduler;
+ (id)sharedSchedulerWithUnitTestingContextInfoProvider:(id)arg1 accountInfoProvider:(id)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)canRunGivenAvailabilityState:(unsigned long long)arg1;
- (void)unregisterTokenForAppContainerAccountTuple:(id)arg1;
- (void)unregisterAllTokensForAccountID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)systemAvailabilityChanged:(unsigned long long)arg1;
- (void)forceTokenRefreshForAllClients;
- (void)ensureTokenRefreshForAppContainerAccountTuple:(id)arg1 contextInfoProvider:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithAccountInfoProvider:(id)arg1;
- (void)handlePublicPushTokenDidUpdate:(id)arg1;
- (void)setSchedulerAvailable:(_Bool)arg1;
- (void)refreshAllClientsNow:(_Bool)arg1;
- (void)registerTokenRefreshActivity;
- (void)_handlePushToken:(id)arg1 forAppContainerAccountTuple:(id)arg2 applicationMetadata:(id)arg3 appContainerIntersectionMetadata:(id)arg4;
- (void)_refreshApsToken:(id)arg1 appContainerAccountTuple:(id)arg2 apsEnvironmentString:(id)arg3 pushBundleIdentifier:(id)arg4 isCKSystemService:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)_removeApsToken:(id)arg1 appContainerAccountTuple:(id)arg2 apsEnvironmentString:(id)arg3 pushBundleIdentifier:(id)arg4 isCKSystemService:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)tokenRefreshChanged;

@end
