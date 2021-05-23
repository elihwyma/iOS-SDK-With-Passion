/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <UIKit/UIWindow.h>

@interface SBFTouchPassThroughWindow : UIWindow

+ (Class)touchPassThroughRootViewControllerClass;

- (id)description;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithScreen:(id)arg1 debugName:(id)arg2;

@end
