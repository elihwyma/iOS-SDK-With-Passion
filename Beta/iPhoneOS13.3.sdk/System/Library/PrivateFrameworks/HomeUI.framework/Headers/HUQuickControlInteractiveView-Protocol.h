/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/Swift-Protocol.h>

@protocol HUQuickControlViewInteractionDelegate;

@protocol HUQuickControlInteractiveView <Swift>

@property (weak, nonatomic) id <HUQuickControlViewInteractionDelegate> interactionDelegate;
@property (nonatomic, readonly, getter=isUserInteractionActive) _Bool userInteractionActive;

- (unsigned short)beginUserInteractionWithFirstTouchGestureRecognizer: /* Error: Ran out of types for this method. */;

@end
