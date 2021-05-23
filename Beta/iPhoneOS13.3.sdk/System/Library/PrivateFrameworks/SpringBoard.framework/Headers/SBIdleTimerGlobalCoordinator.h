/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class FBSDisplayLayoutMonitor, NSMutableDictionary, NSString, PTTestRecipe, SBIdleTimerCoordinatorHelper, SBIdleTimerDescriptor, SBIdleTimerDescriptorFactory, SBIdleTimerGlobalStateMonitor, SBIdleTimerProxy;

@protocol BSInvalidatable, SBIdleTimer, SBIdleTimerGlobalCoordinatorDelegate, SBIdleTimerProviding, SBIdleTimerResetSource;

@interface SBIdleTimerGlobalCoordinator : NSObject

{
    SBIdleTimerDescriptorFactory *_idleTimerDescriptorFactory;
    SBIdleTimerGlobalStateMonitor *_globalStateMonitor;
    SBIdleTimerProxy *_idleTimerProxy;
    SBIdleTimerDescriptor *_disabledIdleTimerDescriptor;
    SBIdleTimerProxy *_enabledIdleTimerProxy;
    SBIdleTimerDescriptor *_enabledIdleTimerDescriptor;
    _Bool _idleTimerSourceEnabled;
    SBIdleTimerCoordinatorHelper *_idleTimerCoordinatorHelper;
    id <BSInvalidatable> _disableAutoDimAssertion;
    FBSDisplayLayoutMonitor *_layoutMonitor;
    _Bool _started;
    id <SBIdleTimerResetSource> _lastResetSource;
    id <BSInvalidatable> _stateCaptureAssertion;
    PTTestRecipe *_clientDisableAssertionsTestRecipe;
    PTTestRecipe *_internalDisableAssertionsTestRecipe;
    id <SBIdleTimerGlobalCoordinatorDelegate> _delegate;
    id <SBIdleTimerProviding> _idleTimerProvider;
    NSMutableDictionary *_idleTimerDisableAssertions;
}

@property (nonatomic, readonly) id <SBIdleTimer> idleTimer;
@property (weak, nonatomic, getter=_idleTimerProvider, setter=_setIdleTimerProvider:) id <SBIdleTimerProviding> idleTimerProvider;
@property (retain, nonatomic, getter=_idleTimerDisableAssertions, setter=_setIdleTimerDisableAssertions:) NSMutableDictionary *idleTimerDisableAssertions;
@property (weak, nonatomic) id <SBIdleTimerGlobalCoordinatorDelegate> delegate;
@property (nonatomic, readonly, getter=isIdleTimerDisabled) _Bool idleTimerDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNeeded:(_Bool)arg1;
+ (id)sharedInstanceIfExists;

- (id)init;
- (void)dealloc;
- (void)start;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (void)resetIdleTimer;
- (void)_addStateCaptureHandlers;
- (id)acquireIdleTimerDisableAssertionForReason:(id)arg1;
- (id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3;
- (void)resetIdleTimerForReason:(id)arg1;
- (id)_activeIdleTimerProvider;
- (void)idleTimerDidRefresh:(id)arg1;
- (void)idleTimerDidResetForUserAttention:(id)arg1;
- (void)resetIdleTimerIfNonConsecutiveSource:(id)arg1 forReason:(id)arg2;
- (id)_stateCaptureDescription;
- (_Bool)_updateIdleTimerForReason:(id)arg1;
- (void)_registerTestRecipes;
- (void)_unregisterTestRecipes;
- (void)_updateGlobalStateDisableAssertions;
- (id)_updateIdleTimerForProvider:(id)arg1 behavior:(id)arg2 forReason:(id)arg3;
- (void)_setIdleTimerSourceEnabled:(_Bool)arg1 forReason:(id)arg2;
- (_Bool)_areIdleTimerDisableAssertionsPrevented;
- (id)_updateIdleTimerForProvider:(id)arg1 behavior:(id)arg2 descriptor:(id)arg3 forReason:(id)arg4;
- (void)_applyActiveIdleTimerDescriptorForReason:(id)arg1;
- (void)_setIdleTimerWithDescriptor:(id)arg1 forReason:(id)arg2;
- (_Bool)_hasIdleTimerDisableAssertions;
- (void)_registerClientDisableAssertionsTestRecipe;
- (void)_registerInternalDisableAssertionsTestRecipe;
- (void)idleTimerGlobalStateMonitor:(id)arg1 changedForReason:(id)arg2;
- (void)_logEffectiveLockTimeout;
- (void)_idleTimerPrefsChanged;

@end
