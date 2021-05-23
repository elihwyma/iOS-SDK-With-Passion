/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol SBMedusaDecoratedDeviceApplicationSceneViewControlling <Swift>

@property (nonatomic, readonly, getter=isBlurred) _Bool blurred;
@property (nonatomic, getter=isNubViewHidden) _Bool nubViewHidden;
@property (nonatomic, getter=isNubViewHighlighted) _Bool nubViewHighlighted;

- (unsigned short)animationControllerForTransitionRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)statusBarAssertionWithStatusBarHidden:nubViewHidden:atLevel: /* Error: Ran out of types for this method. */;
- (unsigned short)blurApplicationContent:withAnimationFactory:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setInlineAppExposeContainerViewController: /* Error: Ran out of types for this method. */;

@end
