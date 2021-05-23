/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class FBSScene, NSArray, NSHashTable, NSMutableArray, NSMutableSet, NSString, NSXPCConnection, UIScreen, UIView, UIWindow, UIWindowScene, _UIKeyboardChangedInformation;

@protocol _UIKeyboardArbitration;

@interface _UIRemoteKeyboards : NSObject

{
    NSHashTable *_windowControllers;
    int _ignoreLayoutSubviews;
    FBSScene *_requiredScene;
    double _requiredLevel;
    NSMutableArray *_activePIDs;
    UIView *_keyboardSnapshot;
    _Bool _expectingInitialState;
    int _hostedCount;
    NSString *_focusedSceneIdentifier;
    _Bool _hadFocusBeforeOverlay;
    UIWindowScene *_suppressedScene;
    _Bool _expectedSuppression;
    int _externalSuppression;
    int _recursionCheck;
    NSMutableSet *_pendingKeyboardGrabs;
    _Bool _takingSnapshot;
    _Bool _windowEnabled;
    UIScreen *_lastScreen;
    _Bool _disablingKeyboard;
    double _iavHeight;
    _Bool _enableMultiscreenHack;
    _Bool _currentKeyboard;
    _Bool _updatingHeight;
    _Bool _handlingRemoteEvent;
    _Bool _shouldFence;
    long long _lastEventSource;
    NSXPCConnection *_connection;
    _UIKeyboardChangedInformation *_currentState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain) NSXPCConnection *connection;
@property (retain) _UIKeyboardChangedInformation *currentState;
@property _Bool currentKeyboard;
@property (retain, readonly) NSArray *currentHostedPIDs;
@property (retain, readonly) FBSScene *requiredScene;
@property (copy, nonatomic) NSString *focusedSceneIdentifier;
@property (readonly) _Bool keyboardVisible;
@property (readonly) UIWindow *keyboardWindow;
@property (readonly) double intersectionHeight;
@property (readonly) double iavHeight;
@property (readonly) _Bool keyboardActive;
@property (readonly) _Bool remoteKeyboardUndocked;
@property (nonatomic) _Bool isSnapshotting;
@property (readonly) _Bool oldPathForSnapshot;
@property (readonly) _Bool updatingHeight;
@property (readonly) _Bool handlingRemoteEvent;
@property (nonatomic) _Bool shouldFence;
@property (nonatomic, readonly) long long lastEventSource;
@property (readonly) id <_UIKeyboardArbitration> proxy;
@property _Bool disableBecomeFirstResponder;
@property (nonatomic) _Bool enableMultiscreenHack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)enabled;
+ (id)serviceName;
+ (id)sharedRemoteKeyboards;
+ (_Bool)useSystemService;
+ (id)createArbiterConnection;

- (id)init;
- (void)dealloc;
- (void)setSuppressingKeyboard:(_Bool)arg1 forScene:(id)arg2;
- (void)performOnControllers:(CDUnknownBlockType)arg1;
- (void)willResume:(id)arg1;
- (_Bool)hasAnyHostedViews;
- (void)setWindowLevel:(double)arg1 sceneLevel:(double)arg2 forResponder:(id)arg3;
- (void)prepareToMoveKeyboard:(struct CGRect)arg1 withIAV:(struct CGRect)arg2 isIAVRelevant:(_Bool)arg3 showing:(_Bool)arg4 forScene:(id)arg5;
- (_Bool)shouldAllowInputViewsRestoredForId:(id)arg1;
- (void)didSuspend:(id)arg1;
- (_Bool)isOnScreenRotating;
- (void)controllerDidLayoutSubviews:(id)arg1;
- (void)startConnection;
- (void)ignoreLayoutNotifications:(CDUnknownBlockType)arg1;
- (void)sceneUpdated;
- (void)completeMoveKeyboardForWindow:(id)arg1;
- (void)setPlacement:(id)arg1 quietly:(_Bool)arg2 animated:(_Bool)arg3 generateSplitNotification:(_Bool)arg4;
- (void)registerController:(id)arg1;
- (void)unregisterController:(id)arg1;
- (void)updateTransition:(id)arg1 withInfo:(id)arg2;
- (void)performOnDistributedControllers:(CDUnknownBlockType)arg1;
- (void)startTransition:(id)arg1 withInfo:(id)arg2;
- (void)completeTransition:(id)arg1 withInfo:(id)arg2;
- (void)updateLastEventSource:(long long)arg1;
- (void)_lostWindow:(id)arg1;
- (void)setWindowEnabled:(_Bool)arg1;
- (void)checkConnection;
- (void)willResignActive:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (void)willAddDeactivationReason:(id)arg1;
- (void)didRemoveDeactivationReason:(id)arg1;
- (void)applicationResume:(id)arg1;
- (void)stopConnection;
- (void)resetSnapshotWithWindowCheck:(_Bool)arg1;
- (_Bool)didHandleKeyboardChange:(id)arg1 shouldConsiderSnapshottingKeyboard:(_Bool)arg2 isLocalEvent:(_Bool)arg3;
- (void)cleanSuppression;
- (void)queue_failedConnection:(id)arg1;
- (void)keyboardChangedCompleted;
- (_Bool)allowedToShowKeyboard;
- (void)reloadForSnapshotting;
- (void)setWindowEnabled:(_Bool)arg1 force:(_Bool)arg2;
- (_Bool)wantsToShowKeyboardForWindow:(id)arg1;
- (_Bool)wantsToShowKeyboardForViewServiceHostWindow:(id)arg1;
- (id)viewHostForWindow:(id)arg1;
- (Class)keyboardWindowClass;
- (_Bool)needsToShowKeyboardForWindow:(id)arg1;
- (_Bool)needsToShowKeyboardForViewServiceHostWindow:(id)arg1;
- (void)_performOnDistributedControllersExceptSelf:(CDUnknownBlockType)arg1;
- (id)_activeScreen;
- (void)userSelectedProcessIdentifier:(int)arg1 sceneDeferringToken:(id)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (void)userSelectedApp:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)queue_keyboardChanged:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)queue_keyboardChangedWithCompletion:(CDUnknownBlockType)arg1;
- (void)queue_keyboardIAVChanged:(double)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)queue_keyboardTransition:(id)arg1 event:(unsigned long long)arg2 withInfo:(id)arg3 onComplete:(CDUnknownBlockType)arg4;
- (void)queue_keyboardSuppressed:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)queue_sceneBecameFocused:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)queue_getDebugInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)queue_setKeyboardDisabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)queue_setLastEventSource:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)checkState;
- (id)prepareForHostedWindowWithScene:(id)arg1;
- (void)finishWithHostedWindow;
- (void)addHostedWindowView:(id)arg1 fromPID:(int)arg2;
- (void)forceKeyboardAway;
- (void)userSelectedSceneWithToken:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)peekApplicationEvent:(id)arg1;
- (void)restorePreservedInputViewsIfNecessary;

@end
