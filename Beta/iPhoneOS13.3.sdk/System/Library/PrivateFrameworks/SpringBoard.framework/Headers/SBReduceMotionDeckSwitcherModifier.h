/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBDeckSwitcherModifier.h>

@protocol SBFluidSwitcherScrollProvidingDelegate;

@interface SBReduceMotionDeckSwitcherModifier : SBDeckSwitcherModifier

{
    id <SBFluidSwitcherScrollProvidingDelegate> _scrollDelegate;
}

- (id)scrollDelegate;
- (void)setScrollDelegate:(id)arg1;
- (struct CGPoint)pagingOrigin;
- (double)_cardWidth;
- (double)wallpaperScale;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)homeScreenScale;
- (_Bool)scrollViewPagingEnabled;
- (struct CGSize)interpageSpacingForPaging;
- (double)homeScreenAlpha;
- (void)resetAdjustedScrollingState;
- (struct CGPoint)adjustedOffsetForOffset:(struct CGPoint)arg1 translation:(struct CGPoint)arg2 startPoint:(struct CGPoint)arg3 locationInView:(struct CGPoint)arg4 horizontalVelocity:(inout double *)arg5 verticalVelocity:(inout double *)arg6;
- (double)scrollProgressForIndex:(unsigned long long)arg1;
- (double)scrollProgressForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 frameOrigin:(double)arg3;
- (double)titleOpacityForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2;
- (double)opacityForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2;
- (double)depthForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 scrollProgress:(double)arg3;
- (double)leadingOffsetForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 scrollProgress:(double)arg3;

@end
