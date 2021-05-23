/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBHomeGesturePanGestureRecognizer.h>

@protocol SBBarSwipeScreenEdgePanGestureRecognizerDelegate;

@interface SBBarSwipeScreenEdgePanGestureRecognizer : SBHomeGesturePanGestureRecognizer

{
    id <SBBarSwipeScreenEdgePanGestureRecognizerDelegate> _interfaceDelegate;
}

@property (weak, nonatomic) id <SBBarSwipeScreenEdgePanGestureRecognizerDelegate> interfaceDelegate;

- (long long)_touchInterfaceOrientation;

@end
