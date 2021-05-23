/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarSignalView.h>

@class _UIStatusBarCycleAnimation;

@interface _UIStatusBarCellularSignalView : _UIStatusBarSignalView

{
    _Bool _needsCycleAnimationUpdate;
    _UIStatusBarCycleAnimation *_cycleAnimation;
}

@property (nonatomic) _Bool needsCycleAnimationUpdate;
@property (retain, nonatomic) _UIStatusBarCycleAnimation *cycleAnimation;

+ (double)_barWidthForIconSize:(long long)arg1;
+ (double)_heightForNormalBarAtIndex:(long long)arg1 iconSize:(long long)arg2;
+ (double)_barCornerRadiusForIconSize:(long long)arg1;
+ (double)_interspaceForIconSize:(long long)arg1;
+ (struct CGSize)_intrinsicContentSizeForNumberOfBars:(long long)arg1 iconSize:(long long)arg2;

- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)accessibilityHUDRepresentation;
- (double)_heightForBarAtIndex:(long long)arg1 mode:(long long)arg2;
- (void)_updateBars;
- (void)_setNeedsUpdateCycleAnimation;
- (void)_updateCycleAnimationNow;
- (double)_heightForBarAtIndex:(long long)arg1;
- (void)_updateActiveBars;
- (void)_updateCycleAnimationIfNeeded;
- (void)_colorsDidChange;
- (void)_iconSizeDidChange;
- (void)_updateFromMode:(long long)arg1;

@end
