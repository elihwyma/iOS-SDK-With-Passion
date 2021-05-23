/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol SBSwitcherLiveContentOverlayCoordinatorDelegate;

@protocol SBSwitcherLiveContentOverlayCoordinating <Swift>

@property (nonatomic, getter=areLiveContentOverlayUpdatesSuspended) _Bool liveContentOverlayUpdatesSuspended;
@property (nonatomic) long long containerOrientation;
@property (weak, nonatomic) id <SBSwitcherLiveContentOverlayCoordinatorDelegate> delegate;

- (unsigned short)animationControllerForTransitionRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)noteKeyboardFocusDidChangeToSceneID: /* Error: Ran out of types for this method. */;

@end
