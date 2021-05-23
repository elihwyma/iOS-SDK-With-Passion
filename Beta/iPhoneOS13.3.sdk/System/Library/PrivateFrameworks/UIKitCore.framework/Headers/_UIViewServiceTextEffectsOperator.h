/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, _UIAsyncInvocation, _UIHostedWindow;

__attribute__((visibility("hidden")))
@interface _UIViewServiceTextEffectsOperator : NSObject

{
    int __automatic_invalidation_retainCount;
    _Bool __automatic_invalidation_invalidated;
    id _remoteViewControllerProxy;
    _Bool _wasInvalidated;
    _UIAsyncInvocation *_prepareForDisconnectionInvocation;
    _UIAsyncInvocation *_invalidationInvocation;
    _UIHostedWindow *_hostedWindow;
    struct CGPoint _windowOffset;
    struct UIEdgeInsets _safeAreaInsets;
    struct CGSize _sceneSize;
    _Bool _canRestoreInputViews;
    _Bool _isRestoringInputViews;
    _Bool _didResignForDisappear;
    _Bool _localVCDisablesAutomaticBehaviors;
    NSArray *_allowedNotifications;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)XPCInterface;
+ (_Bool)_shouldAddServiceOperator;
+ (id)operatorWithRemoteViewControllerProxy:(id)arg1 hostPID:(int)arg2;

- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)invalidate;
- (id)_queue;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (int)__automatic_invalidation_logic;
- (void)__setWindowOffset:(struct CGPoint)arg1;
- (void)__setSafeAreaInsets:(struct UIEdgeInsets)arg1;
- (void)__setSceneSize:(struct CGSize)arg1;
- (void)__createHostedTextEffectsWithReplyHandler:(CDUnknownBlockType)arg1;
- (void)__setHostAllowedNotifications:(id)arg1;
- (void)__hostWillEnterForeground;
- (void)__hostDidEnterBackground;
- (void)__setNextAutomaticOrderOutDirection:(int)arg1 duration:(double)arg2;
- (void)__hostViewWillAppear:(_Bool)arg1;
- (void)__hostViewWillDisappear:(_Bool)arg1;
- (void)__prepareForDisconnectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_invalidateUnconditionallyThen:(CDUnknownBlockType)arg1;
- (void)_prepareForDisconnectionUnconditionallyThen:(CDUnknownBlockType)arg1;
- (void)forceSyncToStatusBarOrientation;
- (void)_reloadSafeInsets;
- (void)makeHostWindowKey;
- (void)_viewServiceHostWillEnterForeground:(id)arg1;
- (void)_resetSceneSize;
- (void)_restoreInputViews;
- (void)performOnRelevantWindows:(CDUnknownBlockType)arg1;
- (void)rotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)finishRotationFromInterfaceOrientation:(long long)arg1;
- (void)hostedWindow:(id)arg1 didSetFirstResponder:(id)arg2;
- (void)hostedWindow:(id)arg1 didSetResponderTargetForCalloutBar:(id)arg2;
- (void)setHostedWindow:(id)arg1 disableAutomaticBehaviors:(_Bool)arg2;

@end
