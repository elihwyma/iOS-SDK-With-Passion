/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBAppLayout, SBDeviceApplicationSceneViewController, SBInlineAppExposeLiveContentOverlayView;

@protocol SBSwitcherLiveContentOverlayCoordinatorDelegate;

@interface SBInlineAppExposeLiveContentOverlayCoordinator : NSObject

{
    SBDeviceApplicationSceneViewController *_deviceApplicationSceneViewController;
    long long _environment;
    long long _layoutRole;
    _Bool _overlay;
    SBAppLayout *_liveContentAppLayout;
    SBInlineAppExposeLiveContentOverlayView *_liveContentOverlayView;
    _Bool _liveContentOverlayUpdatesSuspended;
    long long _containerOrientation;
    id <SBSwitcherLiveContentOverlayCoordinatorDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=areLiveContentOverlayUpdatesSuspended) _Bool liveContentOverlayUpdatesSuspended;
@property (nonatomic) long long containerOrientation;
@property (weak, nonatomic) id <SBSwitcherLiveContentOverlayCoordinatorDelegate> delegate;

- (id)animationControllerForTransitionRequest:(id)arg1;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
- (void)updateSceneViewController:(id)arg1 environment:(long long)arg2 layoutRole:(long long)arg3 overlay:(_Bool)arg4;
- (void)_addLiveContentOverlay:(id)arg1 forAppLayout:(id)arg2 animated:(_Bool)arg3;
- (id)_appLayoutFromLayoutState:(id)arg1;
- (void)_removeLiveContentOverlay;

@end
