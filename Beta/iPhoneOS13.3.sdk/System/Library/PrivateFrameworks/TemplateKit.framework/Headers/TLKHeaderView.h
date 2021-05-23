/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@class NSString, TLKImage, TLKImageView, TLKLabel, TLKMultilineText, TLKRichText, TLKRoundedCornerLabel, TLKStackView;

@interface TLKHeaderView

{
    TLKImage *_image;
    TLKMultilineText *_title;
    TLKRichText *_subtitle;
    TLKMultilineText *_footnote;
    TLKMultilineText *_trailingText;
    TLKImage *_subtitleImage;
    NSString *_roundedBorderText;
    long long _axis;
    TLKImageView *_imageView;
    TLKLabel *_titleLabel;
    TLKLabel *_trailingTextLabel;
    TLKLabel *_subtitleLabel;
    TLKLabel *_footnoteLabel;
    TLKImageView *_subtitleImageView;
    TLKStackView *_subtitleStackView;
    TLKStackView *_innerStackView;
    TLKRoundedCornerLabel *_roundedCornerLabel;
}

@property (retain, nonatomic) TLKStackView *contentView;
@property (retain, nonatomic) TLKImageView *imageView;
@property (retain, nonatomic) TLKLabel *titleLabel;
@property (retain, nonatomic) TLKLabel *trailingTextLabel;
@property (retain, nonatomic) TLKLabel *subtitleLabel;
@property (retain, nonatomic) TLKLabel *footnoteLabel;
@property (retain, nonatomic) TLKImageView *subtitleImageView;
@property (retain, nonatomic) TLKStackView *subtitleStackView;
@property (retain, nonatomic) TLKStackView *innerStackView;
@property (retain, nonatomic) TLKRoundedCornerLabel *roundedCornerLabel;
@property (retain, nonatomic) TLKImage *image;
@property (retain, nonatomic) TLKMultilineText *title;
@property (retain, nonatomic) TLKRichText *subtitle;
@property (retain, nonatomic) TLKMultilineText *footnote;
@property (retain, nonatomic) TLKMultilineText *trailingText;
@property (retain, nonatomic) TLKImage *subtitleImage;
@property (retain, nonatomic) NSString *roundedBorderText;
@property (nonatomic) long long axis;

- (id)titleLabelFont;
- (void)didMoveToWindow;
- (id)hasImage;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)setupContentView;
- (void)observedPropertiesChanged;
- (id)titleLabelText;
- (id)subtitleLabelText;
- (void)tlk_updateForAppearance:(id)arg1;
- (id)footnoteLabelText;
- (id)roundedCornerLabelText;

@end
