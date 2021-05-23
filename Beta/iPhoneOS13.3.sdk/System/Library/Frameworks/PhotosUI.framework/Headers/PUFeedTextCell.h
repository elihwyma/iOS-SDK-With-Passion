/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUFeedCell.h>

@class NSAttributedString, UIButton, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface PUFeedTextCell : PUFeedCell

{
    _Bool _shouldUseOpaqueBackground;
    _Bool _shouldUseAccessibilityLayout;
    NSAttributedString *_attributedText;
    long long _numberOfTextLines;
    double _textDetailTextSpacing;
    NSAttributedString *_attributedDetailText;
    long long _numberOfDetailTextLines;
    long long _textAlignment;
    UIImage *_iconImage;
    long long _iconLocation;
    long long _tappableArea;
    long long _buttonType;
    long long _buttonSize;
    long long _buttonHorizontalAlignment;
    double _buttonPadding;
    UILabel *__label;
    UILabel *__detailLabel;
    UIImageView *__iconImageView;
    UIButton *__button;
    struct UIOffset _iconOffset;
    struct UIEdgeInsets _contentInsets;
    struct UIEdgeInsets _iconPadding;
}

@property (retain, nonatomic, setter=_setLabel:) UILabel *_label;
@property (retain, nonatomic, setter=_setDetailLabel:) UILabel *_detailLabel;
@property (retain, nonatomic, setter=_setIconImageView:) UIImageView *_iconImageView;
@property (retain, nonatomic, setter=_setButton:) UIButton *_button;
@property (nonatomic) _Bool shouldUseAccessibilityLayout;
@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (retain, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) long long numberOfTextLines;
@property (nonatomic) double textDetailTextSpacing;
@property (retain, nonatomic) NSAttributedString *attributedDetailText;
@property (nonatomic) long long numberOfDetailTextLines;
@property (nonatomic) long long textAlignment;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) long long iconLocation;
@property (nonatomic) struct UIEdgeInsets iconPadding;
@property (nonatomic) struct UIOffset iconOffset;
@property (nonatomic) long long tappableArea;
@property (nonatomic) long long buttonType;
@property (nonatomic) long long buttonSize;
@property (nonatomic) long long buttonHorizontalAlignment;
@property (nonatomic) double buttonPadding;
@property (nonatomic) _Bool shouldUseOpaqueBackground;

- (void)dealloc;
- (id)_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (struct CGSize)_iconSize;
- (void)_handleButton:(id)arg1;
- (_Bool)shouldRecognizerTap:(id)arg1;
- (void)_updateShouldUseAccessibilityLayout;
- (void)setButtonType:(long long)arg1 animated:(_Bool)arg2;
- (void)_updateDetailLabel;
- (void)_updateIconImageView;
- (void)_updateButtonAnimated:(_Bool)arg1;
- (void)_invalidateCachedTextSizes;
- (struct CGSize)_textSizeForButtonWithType:(long long)arg1 size:(long long)arg2;
- (struct CGSize)_maximumPossibleTextSizeForButtonWithType:(long long)arg1 size:(long long)arg2;
- (void)_configureButton:(id)arg1 withType:(long long)arg2 size:(long long)arg3 animated:(_Bool)arg4;
- (void)_updateLabelsBackgroundColor;
- (id)_labelBackgroundColor;

@end
