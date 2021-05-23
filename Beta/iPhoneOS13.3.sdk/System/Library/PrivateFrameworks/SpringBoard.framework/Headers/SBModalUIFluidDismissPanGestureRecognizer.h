/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBHomeGesturePanGestureRecognizer.h>

@protocol SBModalUIFluidDismissPanGestureRecognizerDelegate;

@interface SBModalUIFluidDismissPanGestureRecognizer : SBHomeGesturePanGestureRecognizer

@property (weak, nonatomic) id <SBModalUIFluidDismissPanGestureRecognizerDelegate> delegate;

- (long long)_touchInterfaceOrientation;

@end
