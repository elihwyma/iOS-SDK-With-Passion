/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class FBWorkspaceEventQueue, NSMapTable, NSMutableArray, NSString, NSXPCListener, SBStatusBarTapManager;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SBStatusBarStyleOverridesAssertionManager : NSObject <Swift>

{
    NSMutableArray *_runningUpdateTransactions;
    int _statusBarStyleOverrides;
    int _exclusiveStatusBarStyleOverrides;
    NSXPCListener *_xpcListener;
    NSMapTable *_assertionsByIdentifierByClientConnection;
    NSMapTable *_assertionsByStyleOverride;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableArray *_coordinatorConnectionsByStyleOverride;
    NSObject<OS_dispatch_source> *_assertionTimerSource;
    FBWorkspaceEventQueue *_eventQueue;
    SBStatusBarTapManager *_statusBarTapManager;
}

@property (retain, nonatomic) NSXPCListener *xpcListener;
@property (retain, nonatomic) NSMapTable *assertionsByIdentifierByClientConnection;
@property (retain, nonatomic) NSMapTable *assertionsByStyleOverride;
@property (retain, nonatomic) NSMutableArray *coordinatorConnectionsByStyleOverride;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *assertionTimerSource;
@property (retain, nonatomic) FBWorkspaceEventQueue *eventQueue;
@property (nonatomic) int statusBarStyleOverrides;
@property (nonatomic) int exclusiveStatusBarStyleOverrides;
@property (nonatomic, readonly) SBStatusBarTapManager *statusBarTapManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)activateStatusBarStyleOverridesAssertions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1;
- (void)setStatusString:(id)arg1 forAssertionWithIdentifier:(id)arg2;
- (void)setRegisteredOverrides:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)handleTapForStatusBarStyleOverride:(int)arg1;
- (void)invalidateStatusBarStyleOverridesAssertions:(id)arg1;
- (int)_internalQueue_removeAssertionByStyleOverrides:(id)arg1;
- (void)_invalidateAssertionsWithIdentifiers:(id)arg1 forClientConnection:(id)arg2;
- (void)_updateAppSceneSettingsForForegroundAppsAndPostAddedStyleOverrides:(int)arg1 removedStyleOverrides:(int)arg2;
- (void)_postStatusStringsByStyle:(id)arg1;
- (void)_mainQueue_getStatusBarStyleOverridesToSuppressAndStatusStringsByStyleForForegroundApplicationSceneHandles:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_internalQueue_deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1 forClientConnection:(id)arg2;
- (int)_internalQueue_addAssertionByStyleOverrides:(id)arg1;
- (void)updateForegroundApplicationSceneHandles:(id)arg1 withOptions:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_internalQueue_coordinatorClientForStyleOverrides:(int)arg1;
- (_Bool)_verifyCoordinatorEntitlementForStyleOverride:(id)arg1 onConnection:(id)arg2;
- (id)_internalQueue_coordinatorClientForConnection:(id)arg1;
- (id)_statusStringsByStyleForActiveAssertionsByStyleOverride:(id)arg1 inactiveAssertionsByStyleOverride:(id)arg2;
- (void)unregisterCoordinatorRegistrationForStyleOverrides:(id)arg1;

@end
