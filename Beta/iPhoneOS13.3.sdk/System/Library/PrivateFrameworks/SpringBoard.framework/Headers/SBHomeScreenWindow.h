/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBWindow.h>

@class SBHomeScreenViewController;

@interface SBHomeScreenWindow : SBWindow

@property (nonatomic, readonly) SBHomeScreenViewController *homeScreenViewController;

+ (struct CGRect)constrainFrameToScreen:(struct CGRect)arg1;
+ (_Bool)sb_autorotates;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_canBecomeKeyWindow;
- (id)_initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 rootViewController:(id)arg4 scene:(id)arg5;

@end
