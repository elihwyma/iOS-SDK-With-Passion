/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

#import <UIKit/UIControl.h>

@class BSUIEmojiLabelView, CCUIMenuModuleItem, MTVisualStylingProvider, UIView;

@interface CCUIMenuModuleItemView : UIControl

{
    BSUIEmojiLabelView *_titleLabel;
    BSUIEmojiLabelView *_subtitleLabel;
    UIView *_separatorView;
    UIView *_highlightedBackgroundView;
    UIView *_leadingView;
    UIView *_trailingView;
    CCUIMenuModuleItem *_menuItem;
    MTVisualStylingProvider *_visualStylingProvider;
    _Bool _separatorVisible;
    _Bool _useTallLayout;
    _Bool _useTrailingCheckmarkLayout;
    _Bool _useTrailingInset;
    double _preferredMaxLayoutWidth;
    unsigned long long _indentation;
}

@property (nonatomic) _Bool separatorVisible;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (nonatomic) _Bool useTallLayout;
@property (nonatomic) _Bool useTrailingCheckmarkLayout;
@property (nonatomic) _Bool useTrailingInset;
@property (nonatomic) unsigned long long indentation;
@property (retain, nonatomic) CCUIMenuModuleItem *menuItem;
@property (retain, nonatomic) UIView *leadingView;
@property (retain, nonatomic) UIView *trailingView;

+ (double)defaultMenuItemHeightForContentSizeCategory:(id)arg1 useTallLayout:(_Bool)arg2;
+ (_Bool)_shouldLimitContentSizeCategory:(id)arg1;
+ (id)_preferredFontForTextStyle:(id)arg1 hiFontStyle:(long long)arg2 contentSizeCategory:(id)arg3;
+ (id)_titleFontForContentSizeCategory:(id)arg1;
+ (id)_subtitleFontForContentSizeCategory:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setEnabled:(_Bool)arg1;
- (id)title;
- (void)_setSubtitle:(id)arg1;
- (id)subtitle;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (id)_titleFont;
- (void)_setTitle:(id)arg1;
- (void)didMoveToWindow;
- (void)setSelected:(_Bool)arg1;
- (double)_separatorHeight;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)_subtitleFont;
- (void)_contentSizeCategoryDidChange;
- (void)_updateForStateChange;
- (id)initWithMenuItem:(id)arg1;
- (void)updateSubviewsAlpha:(double)arg1;
- (void)_stopAutomaticallyUpdatingView:(id)arg1 recursivelyIfNeeded:(_Bool)arg2;
- (void)_updateVisualStyleOfView:(id)arg1 withStyle:(long long)arg2 recursivelyIfNeeded:(_Bool)arg3;
- (void)_layoutLeadingCustomView;
- (void)_layoutTrailingCustomViews;
- (struct NSDirectionalEdgeInsets)_labelInsets;
- (double)_textHeightForEmojiLabel:(id)arg1 width:(double)arg2;
- (double)_titleBaselineToTop;
- (double)_titleBaselineToBottom;
- (_Bool)_shouldHorizontallyCenterText;
- (_Bool)_shouldUseTallLayout;
- (double)_trailingWidthForCustomViews;
- (double)_labelLeadingInset;
- (double)_labelTrailingInset;

@end
