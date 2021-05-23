/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBScreenEdgePanGestureRecognizer.h>

@protocol SBDashBoardDelegatingScreenEdgePanGestureRecognizerDelegate;

@interface SBDashBoardDelegatingScreenEdgePanGestureRecognizer : SBScreenEdgePanGestureRecognizer

{
    id <SBDashBoardDelegatingScreenEdgePanGestureRecognizerDelegate> _interfaceDelegate;
}

@property (weak, nonatomic) id <SBDashBoardDelegatingScreenEdgePanGestureRecognizerDelegate> interfaceDelegate;

- (long long)_touchInterfaceOrientation;

@end
