/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, SBFloatingApplicationLiveContentWindow;

@protocol SBSwitcherLiveContentOverlayCoordinatorDelegate;

@interface SBFloatingFluidSwitcherLiveContentOverlayCoordinator : NSObject

{
    _Bool _liveContentOverlayUpdatesSuspended;
    long long _containerOrientation;
    id <SBSwitcherLiveContentOverlayCoordinatorDelegate> _delegate;
    NSString *_keyboardFocusSceneID;
    SBFloatingApplicationLiveContentWindow *_recycledApplicationSceneLiveContentWindow;
    NSMutableDictionary *_liveContentOverlays;
}

@property (copy, nonatomic) NSString *keyboardFocusSceneID;
@property (retain, nonatomic) SBFloatingApplicationLiveContentWindow *recycledApplicationSceneLiveContentWindow;
@property (retain, nonatomic) NSMutableDictionary *liveContentOverlays;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=areLiveContentOverlayUpdatesSuspended) _Bool liveContentOverlayUpdatesSuspended;
@property (nonatomic) long long containerOrientation;
@property (weak, nonatomic) id <SBSwitcherLiveContentOverlayCoordinatorDelegate> delegate;

- (id)init;
- (id)animationControllerForTransitionRequest:(id)arg1;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionWillEndWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
- (void)_removeLiveContentOverlayForAppLayout:(id)arg1;
- (id)_newApplicationLiveContentOverlayViewForTransitionContext:(id)arg1;
- (void)_addLiveContentOverlay:(id)arg1 forAppLayout:(id)arg2 animated:(_Bool)arg3;
- (_Bool)_shouldAnimateAddingLiveContentOverlayForTransitionContext:(id)arg1;
- (id)_newLiveContentOverlayViewForTransitionContext:(id)arg1;
- (void)_configureLiveContentOverlayView:(id)arg1 forTransitionContext:(id)arg2;
- (void)_updateDisplayLayoutElementsForActiveAppLayout:(id)arg1;
- (id)_newInlineLiveContentOverlayViewForTransitionContext:(id)arg1;
- (void)_addApplicationSceneLiveContentOverlay:(id)arg1 forAppLayout:(id)arg2 animated:(_Bool)arg3;
- (void)_addInlineAppExposeLiveContentOverlay:(id)arg1 forAppLayout:(id)arg2 animated:(_Bool)arg3;
- (void)_removeApplicationSceneLiveContentOverlay:(id)arg1 forAppLayout:(id)arg2;
- (void)_removeInlineAppExposeLiveContentOverlay:(id)arg1 forAppLayout:(id)arg2;
- (_Bool)_isLayoutElementBlockedForScreenTimeExpiration:(id)arg1;

@end
