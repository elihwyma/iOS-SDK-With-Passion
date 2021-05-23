/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/TVFocusableTextView.h>

@class VUILabel, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIFocusableTextView : TVFocusableTextView

{
    VUILabel *_computationLabel;
    VUITextLayout *_textLayout;
    VUITextLayout *_titleTextLayout;
}

@property (retain, nonatomic) VUITextLayout *textLayout;
@property (retain, nonatomic) VUITextLayout *titleTextLayout;
@property (retain, nonatomic) VUILabel *computationLabel;

+ (id)textViewWithElement:(id)arg1 textLayout:(id)arg2 existingTextView:(id)arg3;
+ (id)textViewWithString:(id)arg1 textLayout:(id)arg2 existingTextView:(id)arg3;
+ (id)textViewWithString:(id)arg1 textLayout:(id)arg2 titleString:(id)arg3 titleLayout:(id)arg4 existingTextView:(id)arg5;
+ (id)textViewWithElement:(id)arg1 textLayout:(id)arg2 titleElement:(id)arg3 titleLayout:(id)arg4 existingTextView:(id)arg5;

- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateTextColor;
- (double)topMarginWithBaselineMargin:(double)arg1;
- (double)bottomMarginWithBaselineMargin:(double)arg1;
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;

@end
