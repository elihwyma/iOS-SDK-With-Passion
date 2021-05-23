/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UIColor, UILabel, UITapGestureRecognizer, UITextView, UIVisualEffectView, _UIFloatingContentView;

@interface TVFocusableTextView : UIView

{
    UIColor *_backgroundColor;
    UIVisualEffectView *_vibrantEffectView;
    UITextView *_auxilliaryTextView;
    _Bool _textTruncating;
    _Bool _moreLabelOnNewLine;
    _Bool _trackHorizontal;
    _Bool _alwaysShowBackground;
    _Bool _alwaysFocusable;
    _Bool _disableFocus;
    _Bool _needsTextSizeComputation;
    UIColor *_descriptionTextColor;
    UIColor *_descriptionTextHighlightColor;
    long long _descriptionTextAlignment;
    UIColor *_highlightBackgroundColor;
    double _moreHighlightPadding;
    UIColor *_moreLabelTextColor;
    unsigned long long _focusSizeIncrease;
    CDUnknownBlockType _selectionHandler;
    CDUnknownBlockType _playHandler;
    UITextView *_descriptionTextView;
    _UIFloatingContentView *_floatingView;
    UIVisualEffectView *_backgroundView;
    UITapGestureRecognizer *_selectRecognizer;
    UITapGestureRecognizer *_playRecognizer;
    UILabel *_moreLabel;
    UITapGestureRecognizer *_moreLabelTapGestureRecognizer;
    struct UIEdgeInsets _padding;
}

@property (retain, nonatomic) UITextView *descriptionTextView;
@property (retain, nonatomic) _UIFloatingContentView *floatingView;
@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (retain, nonatomic) UITapGestureRecognizer *selectRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *playRecognizer;
@property (retain, nonatomic) UILabel *moreLabel;
@property (nonatomic, readonly) UITapGestureRecognizer *moreLabelTapGestureRecognizer;
@property (nonatomic) _Bool needsTextSizeComputation;
@property (retain, nonatomic) NSAttributedString *descriptionText;
@property (retain, nonatomic) UIColor *descriptionTextColor;
@property (retain, nonatomic) UIColor *descriptionTextHighlightColor;
@property (nonatomic) long long descriptionTextAlignment;
@property (retain, nonatomic) UIColor *highlightBackgroundColor;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (nonatomic, readonly, getter=isTextTruncating) _Bool textTruncating;
@property (nonatomic) double moreHighlightPadding;
@property (nonatomic) _Bool moreLabelOnNewLine;
@property (retain, nonatomic) UIColor *moreLabelTextColor;
@property (nonatomic) _Bool trackHorizontal;
@property (nonatomic) struct UIEdgeInsets padding;
@property (nonatomic) _Bool alwaysShowBackground;
@property (nonatomic) unsigned long long focusSizeIncrease;
@property (nonatomic, getter=isAlwaysFocusable) _Bool alwaysFocusable;
@property (nonatomic) _Bool disableFocus;
@property (copy, nonatomic) CDUnknownBlockType selectionHandler;
@property (copy, nonatomic) CDUnknownBlockType playHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)cornerRadius;

- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_selectButtonAction:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)_playButtonAction:(id)arg1;
- (struct CGRect)_moreLabelFrame;
- (void)_updateTextColorsForFocusState:(_Bool)arg1;
- (void)_recomputeTextSizeIfNeeded;
- (struct CGRect)_moreLabelExclusionPathFrame;
- (void)_updateTextColorsIfNeeded;
- (void)_updateBackgroundColors;
- (void)_setNeedsTextSizeComputation;

@end
