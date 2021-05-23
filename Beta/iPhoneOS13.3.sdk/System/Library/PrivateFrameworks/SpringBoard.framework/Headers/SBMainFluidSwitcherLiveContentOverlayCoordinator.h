/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, SBMainDisplaySceneLayoutViewController, SBSceneLayoutLiveContentOverlay;

@protocol SBSwitcherLiveContentOverlayCoordinatorDelegate;

@interface SBMainFluidSwitcherLiveContentOverlayCoordinator : NSObject

{
    _Bool _liveContentOverlayUpdatesSuspended;
    long long _containerOrientation;
    id <SBSwitcherLiveContentOverlayCoordinatorDelegate> _delegate;
    NSMutableDictionary *_animationWrapperViewOverlays;
    SBMainDisplaySceneLayoutViewController *_sceneLayoutViewController;
    SBSceneLayoutLiveContentOverlay *_sceneLayoutLiveContentOverlay;
}

@property (retain, nonatomic) NSMutableDictionary *animationWrapperViewOverlays;
@property (weak, nonatomic, readonly) SBMainDisplaySceneLayoutViewController *sceneLayoutViewController;
@property (retain, nonatomic) SBSceneLayoutLiveContentOverlay *sceneLayoutLiveContentOverlay;
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
- (id)initWithSceneLayoutViewController:(id)arg1;
- (_Bool)_shouldAnimateAddingSceneLayoutLiveContentOverlayForTransitionContext:(id)arg1;
- (_Bool)_layoutStateContainsElementBlockedForScreenTimeExpiration:(id)arg1;

@end
