/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKBubbleFlowContainerView.h>

@class GKBubbleSet;

@interface GKBubbleFlowOverlayView : GKBubbleFlowContainerView

@property (nonatomic, readonly) GKBubbleSet *secondaryBubbleControls;

+ (id)sharedBubbleOverlayView;
+ (id)sharedBubbleOverlayViewForWindow:(id)arg1;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)defaultRectForBubbleOfType:(long long)arg1;
- (void)willBeginTransition;

@end
