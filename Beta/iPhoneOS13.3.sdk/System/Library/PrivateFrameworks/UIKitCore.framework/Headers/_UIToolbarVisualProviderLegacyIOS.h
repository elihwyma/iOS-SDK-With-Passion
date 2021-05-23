/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIToolbarVisualProvider.h>

@class UIView, _UIBarBackground, _UIBarBackgroundLayoutLegacy;

__attribute__((visibility("hidden")))
@interface _UIToolbarVisualProviderLegacyIOS : _UIToolbarVisualProvider

{
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayoutLegacy *_backgroundViewLayout;
    UIView *_customBackgroundView;
}

- (void)layoutSubviews;
- (void)setCustomBackgroundView:(id)arg1;
- (struct CGSize)defaultSizeForOrientation:(long long)arg1;
- (void)updateBackgroundGroupName;
- (struct CGRect)backgroundFrame;
- (id)currentBackgroundView;
- (void)updateBarForStyle:(long long)arg1;
- (void)updateItemsForNewFrame:(id)arg1;
- (void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(_Bool)arg3;
- (void)customViewChangedForButtonItem:(id)arg1;
- (void)positionToolbarButtonsAndResetFontScaleAdjustment:(_Bool)arg1;
- (_Bool)toolbarIsSmall;
- (void)updateBarBackgroundSize;
- (void)updateBarBackground;
- (void)drawBackgroundViewInRect:(struct CGRect)arg1;
- (double)_edgeMarginForBorderedItem:(_Bool)arg1 isText:(_Bool)arg2;
- (id)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2 resetFontScaleAdjustment:(_Bool)arg3 actuallyRepositionButtons:(_Bool)arg4;
- (id)_repositionedItemsFromItems:(id)arg1 withBarButtonFrames:(id *)arg2 withHitRects:(id *)arg3 buttonIndexes:(id *)arg4 textButtonIndexes:(id *)arg5;
- (void)_createViewsForItems:(id)arg1;
- (id)_currentCustomBackground;

@end
