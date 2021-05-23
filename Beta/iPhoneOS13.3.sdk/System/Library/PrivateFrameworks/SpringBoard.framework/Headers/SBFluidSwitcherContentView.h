/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@interface SBFluidSwitcherContentView : UIView

{
    _Bool _passesTouchesThrough;
}

@property (nonatomic) _Bool passesTouchesThrough;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
