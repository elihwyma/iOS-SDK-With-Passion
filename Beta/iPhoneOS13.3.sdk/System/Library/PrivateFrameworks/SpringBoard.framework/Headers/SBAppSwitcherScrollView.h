/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <BaseBoardUI/BSUIScrollView.h>

@interface SBAppSwitcherScrollView : BSUIScrollView

{
    struct CGPoint _previousContentOffset;
    double _previousScrollTime;
    struct CGPoint _rawContentOffsetVelocity;
}

- (void)setContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)contentOffsetVelocityConsideringNextContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)contentOffsetVelocity;

@end
