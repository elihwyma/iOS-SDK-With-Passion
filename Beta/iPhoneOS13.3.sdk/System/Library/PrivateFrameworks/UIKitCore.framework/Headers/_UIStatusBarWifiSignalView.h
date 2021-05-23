/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarSignalView.h>

@class _UIStatusBarCycleAnimation;

@interface _UIStatusBarWifiSignalView : _UIStatusBarSignalView

{
    _Bool _needsCycleAnimationUpdate;
    _UIStatusBarCycleAnimation *_cycleAnimation;
}

@property (nonatomic) _Bool needsCycleAnimationUpdate;
@property (retain, nonatomic) _UIStatusBarCycleAnimation *cycleAnimation;

+ (double)_interspaceForIconSize:(long long)arg1;
+ (struct CGSize)_intrinsicContentSizeForNumberOfBars:(long long)arg1 iconSize:(long long)arg2;
+ (double)_barThicknessAtIndex:(unsigned long long)arg1 iconSize:(long long)arg2;
+ (id)_barImageWithSize:(struct CGSize)arg1 forScale:(double)arg2 distance:(double)arg3 angle:(double)arg4 centerPoint:(struct CGPoint)arg5 cornerRadius:(double)arg6 thickness:(double)arg7;
+ (double)_totalWidthForIconSize:(long long)arg1;

- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)accessibilityHUDRepresentation;
- (void)_updateBars;
- (void)_setNeedsUpdateCycleAnimation;
- (void)_updateCycleAnimationNow;
- (void)_updateActiveBars;
- (void)_updateCycleAnimationIfNeeded;
- (void)_colorsDidChange;
- (void)_iconSizeDidChange;
- (void)_updateFromMode:(long long)arg1;
- (double)_barCornerRadius;

@end
