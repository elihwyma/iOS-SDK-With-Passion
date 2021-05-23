/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@class SBDeviceApplicationSceneHandle, SBHomeGrabberView;

@protocol SBDeviceApplicationSceneViewControlling <Swift>

@property (nonatomic, readonly) SBDeviceApplicationSceneHandle *sceneHandle;
@property (nonatomic, readonly) SBHomeGrabberView *homeGrabberView;

- (unsigned short)statusBarAssertionWithStatusBarHidden:atLevel: /* Error: Ran out of types for this method. */;

@end
