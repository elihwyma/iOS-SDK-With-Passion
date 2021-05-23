/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class BSTransaction, NSError, NSHashTable, NSMutableArray, NSMutableDictionary, NSString, SBRemoteTransientOverlayViewController, SBSRemoteAlertDefinition;

@protocol SBRemoteTransientOverlaySessionHostDelegate;

@interface SBRemoteTransientOverlaySession : NSObject

{
    BSTransaction *_activeTransaction;
    SBRemoteTransientOverlayViewController *_containerViewController;
    _Bool _hasInitiatedPresentation;
    _Bool _hasPresented;
    NSMutableDictionary *_identifierToHandlingButtonEvents;
    NSHashTable *_observers;
    NSMutableArray *_pendingTransactions;
    _Bool _activated;
    _Bool _prepared;
    _Bool _valid;
    _Bool _pendingInvalidation;
    SBSRemoteAlertDefinition *_definition;
    NSError *_error;
    NSString *_sessionID;
    id <SBRemoteTransientOverlaySessionHostDelegate> _hostDelegate;
}

@property (weak, nonatomic) id <SBRemoteTransientOverlaySessionHostDelegate> hostDelegate;
@property (copy, nonatomic, readonly) SBSRemoteAlertDefinition *definition;
@property (copy, nonatomic, readonly) NSError *error;
@property (copy, nonatomic, readonly) NSString *sessionID;
@property (nonatomic, readonly, getter=isActivated) _Bool activated;
@property (nonatomic, readonly, getter=isPrepared) _Bool prepared;
@property (nonatomic, readonly, getter=isSwitcherEligible) _Bool switcherEligible;
@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (nonatomic, readonly, getter=isPendingInvalidation) _Bool pendingInvalidation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)deactivate;
- (void)activateWithContext:(id)arg1;
- (void)_didActivate;
- (void)_didDeactivate;
- (_Bool)hasPendingButtonEvents:(unsigned long long)arg1;
- (_Bool)hasServiceProcessIdentifier:(int)arg1;
- (id)_initWithSessionID:(id)arg1 definition:(id)arg2;
- (void)prepareWithConfigurationContext:(id)arg1;
- (void)getActionForHandlingButtonEvents:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remoteTransientOverlayViewController:(id)arg1 didAppearAnimated:(_Bool)arg2;
- (void)remoteTransientOverlayViewController:(id)arg1 didDisappearAnimated:(_Bool)arg2;
- (void)remoteTransientOverlayViewController:(id)arg1 willAppearAnimated:(_Bool)arg2;
- (void)remoteTransientOverlayViewControllerRequestsDeactivation:(id)arg1;
- (void)remoteTransientOverlayViewControllerRequestsInvalidation:(id)arg1;
- (void)remoteTransientOverlayViewController:(id)arg1 didTerminateWithError:(id)arg2;
- (id)remoteTransientOverlayViewController:(id)arg1 requestsActionForHandlingButtonEvents:(unsigned long long)arg2;
- (_Bool)remoteTransientOverlayViewController:(id)arg1 prefersStatusBarActivityItemVisibleForServiceBundleIdentifier:(id)arg2;
- (void)addSessionObserver:(id)arg1;
- (void)removeSessionObserver:(id)arg1;
- (id)_actionForHandlingButtonEvents:(unsigned long long)arg1;
- (void)_invalidateWithReason:(long long)arg1 error:(id)arg2;
- (void)_requestInvalidationWithReason:(long long)arg1 error:(id)arg2;
- (void)_addTransaction:(id)arg1;
- (void)_registerObserversForTransaction:(id)arg1;
- (void)_processPendingTransactions;
- (void)remoteTransientOverlayViewControllerDidInvalidate:(id)arg1;

@end
