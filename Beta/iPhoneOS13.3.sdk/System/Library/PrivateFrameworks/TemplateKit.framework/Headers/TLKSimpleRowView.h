/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@class NSString, NUIContainerGridView, TLKImage, TLKImageView, TLKLabel, TLKRichText;

@interface TLKSimpleRowView

{
    TLKImage *_leadingImage;
    TLKRichText *_leadingTitle;
    TLKRichText *_leadingSubtitle;
    TLKImage *_trailingImage;
    TLKRichText *_trailingTitle;
    TLKRichText *_trailingSubtitle;
    TLKImageView *_leadingImageView;
    TLKLabel *_leadingTitleLabel;
    TLKLabel *_leadingSubtitleLabel;
    TLKLabel *_trailingTitleLabel;
    TLKLabel *_trailingSubtitleLabel;
    TLKImageView *_trailingImageView;
}

@property (retain, nonatomic) TLKImageView *leadingImageView;
@property (retain, nonatomic) TLKLabel *leadingTitleLabel;
@property (retain, nonatomic) TLKLabel *leadingSubtitleLabel;
@property (retain, nonatomic) TLKLabel *trailingTitleLabel;
@property (retain, nonatomic) TLKLabel *trailingSubtitleLabel;
@property (retain, nonatomic) TLKImageView *trailingImageView;
@property (retain, nonatomic) NUIContainerGridView *contentView;
@property (retain, nonatomic) TLKImage *leadingImage;
@property (retain, nonatomic) TLKRichText *leadingTitle;
@property (retain, nonatomic) TLKRichText *leadingSubtitle;
@property (retain, nonatomic) TLKImage *trailingImage;
@property (retain, nonatomic) TLKRichText *trailingTitle;
@property (retain, nonatomic) TLKRichText *trailingSubtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)applyText:(id)arg1 toLabel:(id)arg2;

- (struct CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect)arg3;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;
- (_Bool)hasSubtitles;
- (id)setupContentView;
- (void)observedPropertiesChanged;
- (id)gridOfAllViews;
- (id)stringForLabel:(id)arg1;
- (id)fontForTextInLabel:(id)arg1;
- (_Bool)usesDefaultInsets;
- (id)leadingTitleLabelString;
- (id)leadingSubtitleLabelString;
- (id)trailingTitleLabelString;
- (id)trailingSubtitleLabelString;
- (id)leadingTitleLabelFont;
- (id)trailingTitleLabelFont;
- (id)trailingSubtitleLabelFont;
- (double)widthOfColumnAtIndex:(unsigned long long)arg1;
- (id)topRowViews;
- (id)bottomRowViews;

@end
