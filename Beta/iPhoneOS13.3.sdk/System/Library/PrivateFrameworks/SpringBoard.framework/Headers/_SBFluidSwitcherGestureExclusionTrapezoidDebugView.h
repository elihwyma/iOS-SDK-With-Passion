/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class SBFluidSwitcherGestureExclusionTrapezoid;

@interface _SBFluidSwitcherGestureExclusionTrapezoidDebugView : UIView

{
    SBFluidSwitcherGestureExclusionTrapezoid *_exclusionTrapezoid;
}

@property (retain, nonatomic) SBFluidSwitcherGestureExclusionTrapezoid *exclusionTrapezoid;

- (void)drawRect:(struct CGRect)arg1;

@end
