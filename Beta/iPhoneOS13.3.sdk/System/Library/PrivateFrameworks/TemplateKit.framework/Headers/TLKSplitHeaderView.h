/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@class NSString, NUIContainerGridView, TLKEmbossedLabel, TLKImage, TLKImageView, TLKLabel, TLKMultilineText;

@interface TLKSplitHeaderView

{
    _Bool _shouldBadgeSubtitle;
    TLKMultilineText *_title;
    TLKMultilineText *_subtitle1;
    TLKMultilineText *_subtitle2;
    TLKImage *_leadingImage;
    TLKMultilineText *_leadingTitle;
    TLKMultilineText *_leadingSubtitle;
    TLKImage *_trailingImage;
    TLKMultilineText *_trailingTitle;
    TLKMultilineText *_trailingSubtitle;
    TLKImageView *_leadingImageView;
    TLKLabel *_leadingTitleLabel;
    TLKLabel *_leadingSubtitleLabel;
    TLKImageView *_trailingImageView;
    TLKLabel *_trailingTitleLabel;
    TLKLabel *_trailingSubtitleLabel;
    TLKLabel *_titleLabel;
    TLKLabel *_subtitle1Label;
    TLKEmbossedLabel *_subtitle2Label;
}

@property (retain, nonatomic) NUIContainerGridView *contentView;
@property (retain, nonatomic) TLKImageView *leadingImageView;
@property (retain, nonatomic) TLKLabel *leadingTitleLabel;
@property (retain, nonatomic) TLKLabel *leadingSubtitleLabel;
@property (retain, nonatomic) TLKImageView *trailingImageView;
@property (retain, nonatomic) TLKLabel *trailingTitleLabel;
@property (retain, nonatomic) TLKLabel *trailingSubtitleLabel;
@property (retain, nonatomic) TLKLabel *titleLabel;
@property (retain, nonatomic) TLKLabel *subtitle1Label;
@property (retain, nonatomic) TLKEmbossedLabel *subtitle2Label;
@property (retain, nonatomic) TLKMultilineText *title;
@property (retain, nonatomic) TLKMultilineText *subtitle1;
@property (retain, nonatomic) TLKMultilineText *subtitle2;
@property (nonatomic) _Bool shouldBadgeSubtitle;
@property (retain, nonatomic) TLKImage *leadingImage;
@property (retain, nonatomic) TLKMultilineText *leadingTitle;
@property (retain, nonatomic) TLKMultilineText *leadingSubtitle;
@property (retain, nonatomic) TLKImage *trailingImage;
@property (retain, nonatomic) TLKMultilineText *trailingTitle;
@property (retain, nonatomic) TLKMultilineText *trailingSubtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)footnoteFont;

- (id)titleFont;
- (id)footnoteLabel;
- (struct UIEdgeInsets)effectiveAlignmentRectInsets;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (id)grid;
- (id)setupContentView;
- (void)observedPropertiesChanged;
- (id)titleLabelText;
- (id)subtitleLabelText;
- (id)firstRowOfViews;
- (id)secondRowOfViews;
- (id)thirdRowOfViews;
- (_Bool)secondRowIsHidden;
- (id)leadingImageInView;
- (id)leadingSubtitleText;
- (id)trailingSubtitleText;
- (id)trailingImageInView;

@end
