/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@class NSString, NUIContainerBoxView, TLKImage, TLKImageView, TLKLabel, TLKMultilineText, TLKStackView, TLKTextButton, TLKTextView, UIBezierPath;

@protocol TLKDescriptionViewDelegate;

@interface TLKDescriptionView

{
    TLKImage *_image;
    TLKMultilineText *_text;
    TLKMultilineText *_title;
    NSString *_footnoteButtonText;
    NSString *_moreButtonText;
    id <TLKDescriptionViewDelegate> _delegate;
    TLKStackView *_stackView;
    TLKLabel *_titleLabel;
    TLKTextView *_detailsTextView;
    TLKTextButton *_moreButton;
    TLKImageView *_imageView;
    NUIContainerBoxView *_imageAndDescriptionBoxView;
    UIBezierPath *_imageViewExclusionPath;
    UIBezierPath *_moreButtonExclusionPath;
    TLKTextButton *_footnoteButton;
}

@property (retain, nonatomic) TLKStackView *stackView;
@property (retain, nonatomic) TLKLabel *titleLabel;
@property (retain, nonatomic) TLKTextView *detailsTextView;
@property (retain, nonatomic) TLKTextButton *moreButton;
@property (retain, nonatomic) TLKImageView *imageView;
@property (retain, nonatomic) NUIContainerBoxView *imageAndDescriptionBoxView;
@property (retain, nonatomic) UIBezierPath *imageViewExclusionPath;
@property (retain, nonatomic) UIBezierPath *moreButtonExclusionPath;
@property (retain, nonatomic) TLKTextButton *footnoteButton;
@property (retain, nonatomic) TLKImage *image;
@property (retain, nonatomic) TLKMultilineText *text;
@property (retain, nonatomic) TLKMultilineText *title;
@property (retain, nonatomic) NSString *footnoteButtonText;
@property (retain, nonatomic) NSString *moreButtonText;
@property (weak) id <TLKDescriptionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)numberOfLines;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (struct CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect)arg3;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (id)setupContentView;
- (void)observedPropertiesChanged;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)footnoteButtonPressed;
- (_Bool)usesDefaultInsets;
- (void)moreButtonPressed;
- (void)setExclusionPathInContainer:(id)arg1 includeMoreButton:(_Bool)arg2;
- (_Bool)shouldHideMoreButtonForTextView:(id)arg1;
- (struct CGSize)textSizeForTextView:(id)arg1 width:(double)arg2 lineCount:(unsigned long long)arg3;
- (void)simulateMoreButtonPress;
- (id)imageExclusionPath;
- (id)detailTextViewText;
- (_Bool)moreButtonIsHidden;
- (id)exclusionPathsForTextView;

@end
