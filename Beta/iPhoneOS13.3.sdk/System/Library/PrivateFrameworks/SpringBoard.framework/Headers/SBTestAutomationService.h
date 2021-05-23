/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class FBServiceClientAuthenticator, NSHashTable, NSString;

@protocol BSInvalidatable;

@interface SBTestAutomationService : NSObject

{
    FBServiceClientAuthenticator *_clientAuthenticator;
    id <BSInvalidatable> _idleTimerAssertion;
    NSHashTable *_inFlightAnimationTransactions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)_authenticateClient:(id)arg1;
- (void)systemServiceServer:(id)arg1 suspendAllDisplaysForClient:(id)arg2;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setAlertsEnabled:(_Bool)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setIdleTimerEnabled:(_Bool)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setOrientationLockEnabled:(_Bool)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 resetToHomeScreenAnimated:(_Bool)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 port:(id)arg3 acquireHUDHiddenAssertionForIdentifier:(id)arg4;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setApplicationBundleIdentifier:(id)arg3 blockedForScreenTime:(_Bool)arg4;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setTestRunnerRecoveryApplicationBundleIdentifier:(id)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 countScenesForBundleIdentifier:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;

@end
