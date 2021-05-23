/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@protocol _SBProximityTouchHandlingDelegate;

@interface _SBProximityTouchHandlingView : UIView

{
    id <_SBProximityTouchHandlingDelegate> _delegate;
    double _statusBarHeight;
}

@property (nonatomic) id <_SBProximityTouchHandlingDelegate> delegate;
@property (nonatomic) double statusBarHeight;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
