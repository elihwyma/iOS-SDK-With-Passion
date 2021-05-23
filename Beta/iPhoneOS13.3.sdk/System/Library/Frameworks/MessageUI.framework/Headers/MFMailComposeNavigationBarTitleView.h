/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/_UINavigationBarTitleView.h>

@class NSString, UILabel;

@interface MFMailComposeNavigationBarTitleView : _UINavigationBarTitleView

{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    unsigned long long _style;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)layoutMarginsDidChange;
- (void)didMoveToWindow;
- (void)contentDidChange;
- (id)_subtitleTextColor;
- (void)_updateHeightForCurrentTraits;
- (void)setSubtitle:(id)arg1 withStyle:(unsigned long long)arg2;
- (_Bool)_needsToLayoutTitleLabel;
- (void)_updateTrailingBarButtonItemsAlpha;
- (struct UIEdgeInsets)_contentInsetsWithExclusionRects:(id)arg1 wantsUniformHorizontalInsets:(_Bool)arg2;
- (double)_titleFontSizeWhenMini:(_Bool)arg1;
- (double)_subtitleFontSizeWhenMini:(_Bool)arg1;
- (double)_verticalOffsetForSubtitleWhenMini:(_Bool)arg1;
- (double)_topPaddingForTitleWhenMini:(_Bool)arg1;

@end
