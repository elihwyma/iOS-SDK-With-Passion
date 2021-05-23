/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <UIKit/UIView.h>

@class NSMutableArray, NSMutableDictionary, SLSheetTextComposeView, UILabel, UITextView;

@interface SLSheetContentView : UIView

{
    SLSheetTextComposeView *_textComposeView;
    NSMutableArray *_constraints;
    NSMutableDictionary *_intrinsicSizes;
    double _previewTopMargin;
    double _textViewTopMargin;
    UIView *_bottomSeparator;
    UIView *_autoCompletionModeSeparator;
    _Bool _autoCompletionMode;
    double _autoCompletionTextViewHeight;
    UIView *_previewView;
    UIView *_accessoryView;
}

@property (retain, nonatomic) UIView *previewView;
@property (nonatomic, readonly) UITextView *textView;
@property (nonatomic, readonly) UILabel *placeholderLabel;
@property (retain, nonatomic) UIView *accessoryView;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)_setConstraints;
- (void)_setupConstraints;
- (void)_setupView;
- (void)setIntrinsicSize:(struct CGSize)arg1 forVerticalSizeClass:(long long)arg2;
- (void)endAutoCompletionMode;
- (void)preflightAutoCompletionModeWithApparentHeight:(double)arg1;
- (void)beginAutoCompletionMode;
- (void)_resetAccessoryView;
- (void)resetPreview;
- (double)_previewMarginForContentSize:(struct CGSize)arg1;
- (double)_textTopMarginForContentSize:(struct CGSize)arg1;
- (void)updatePreviewMargin;
- (void)updateTextViewMargin;
- (void)adjustComposeViewForPreview;

@end
