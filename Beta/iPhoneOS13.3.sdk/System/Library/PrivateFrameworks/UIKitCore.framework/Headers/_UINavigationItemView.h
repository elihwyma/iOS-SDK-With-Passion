/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UILabel, UINavigationItem;

__attribute__((visibility("hidden")))
@interface _UINavigationItemView : UIView

{
    UINavigationItem *_item;
    struct CGSize _titleSize;
    UIView *_topCrossView;
    UIView *_bottomCrossView;
    _Bool _isCrossFading;
    _Bool _customFontSet;
    UILabel *_label;
    _Bool __isFadingInFromCustomAlpha;
}

@property (nonatomic, setter=_setFadingInFromCustomAlpha:) _Bool _isFadingInFromCustomAlpha;

- (id)description;
- (id)title;
- (void)setFrame:(struct CGRect)arg1;
- (void)setFont:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)font;
- (void)_setFont:(id)arg1;
- (void)_updateLabelColor;
- (void)setTitleAutoresizesToFit:(_Bool)arg1;
- (_Bool)titleAutoresizesToFit;
- (void)_resetTitleSize;
- (void)_setLineBreakMode:(long long)arg1;
- (id)initWithNavigationItem:(id)arg1;
- (id)navigationItem;
- (struct CGRect)_labelFrame;
- (id)_defaultFont;
- (struct CGSize)_titleSize;
- (id)_currentTextColorForBarStyle:(long long)arg1;
- (struct CGSize)_currentTextShadowOffsetForBarStyle:(long long)arg1;
- (id)_currentTextShadowColorForBarStyle:(long long)arg1;
- (double)_titleYAdjustmentCustomization;
- (void)_updateLabel;
- (void)_updateLabelContents;
- (void)_cleanUpCrossView;
- (void)_prepareCrossViewsForNewSize:(struct CGSize)arg1;
- (void)_crossFadeHiddingButton:(_Bool)arg1;

@end
