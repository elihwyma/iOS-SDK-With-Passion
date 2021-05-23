/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class BSServiceConnectionListener, FBServiceClientAuthenticator, NSMutableSet, NSString, SBFAuthenticationAssertion, SBLockScreenManager, SBMainWorkspace, SBRemoteTransientOverlaySessionManager, SBSpuriousScreenUndimmingAssertion;

@protocol SBFAuthenticationAssertionProviding;

@interface SBLockScreenService : NSObject

{
    SBLockScreenManager *_lockScreenManager;
    SBMainWorkspace *_mainWorkspace;
    id <SBFAuthenticationAssertionProviding> _authenticationAssertionProvider;
    SBRemoteTransientOverlaySessionManager *_remoteTransientOverlaySessionManager;
    FBServiceClientAuthenticator *_requestDeviceUnlockAuthenticator;
    BSServiceConnectionListener *_listener;
    NSMutableSet *_connections;
    NSMutableSet *_connectionsPreventingPasscodeLock;
    SBFAuthenticationAssertion *_preventPasscodeLockAssertion;
    NSMutableSet *_connectionsPreventingSpuriousScreenUndim;
    SBSpuriousScreenUndimmingAssertion *_preventSpuriousScreenUndimAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (oneway void)setPreventPasscodeLock:(id)arg1;
- (oneway void)setPreventSpuriousScreenUndim:(id)arg1;
- (oneway void)launchEmergencyDialerWithCompletion:(CDUnknownBlockType)arg1;
- (oneway void)requestPasscodeUnlockUIWithOptions:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithLockScreenManager:(id)arg1 workspace:(id)arg2 authenticationAssertionProvider:(id)arg3 remoteTransientOverlaySessionManager:(id)arg4;
- (void)requestPasscodeUnlockUIForClient:(id)arg1 options:(id)arg2 description:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;

@end
